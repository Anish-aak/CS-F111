#include <stdio.h>

void bubbleSortDec(int arr[10])
{
    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9-i; j++)
        {
            if(arr[j]<arr[j+1])   //Swaps the two numbers if this condition is satisfied
            {
                arr[j+1]+=arr[j];
                arr[j]=arr[j+1]-arr[j];
                arr[j+1]-=arr[j];
            }
        }
    }
}

int linearSearch(int arr[10], int x)
{
    for(int i=0; i<10; i++)
        if(arr[i]==x)
            return i+1;     //If an element is found it returns the first occurence of the element
    return -1;          //Executed only when the element is not found
}

int binarySearch(int arr[10], int x)
{
    int fl=1;
    if(arr[0]>arr[9])   //If the array is in descending order
        fl=0;
    int l=0, r=9;
    while(l<=r)
    {
        int m = (l+r)/2;
        if(arr[m]==x)       //If the element is found at the middle of the segment of array that we are considering
            return m+1;
        if(arr[m]<x)        //If the element is greater, then we check for it in the second half when the array is in ascending order, or in the first half when the array is in descending order
        {
            if(fl)
                l=m+1;
            else
                r=m-1;
        }
        else                //If the element is lesser, then we check for it in the first half when the array is in descending order, or in the second half when the array is in descending order
        {
            if(fl)
                r=m-1;
            else
                l=m+1;
        }
    }
    return -1;      //Executed only when the element is not found
}

int main()
{
    while(1)
    {
        int a;
        printf("Enter 1 for Linear Search, 2 for Binary Search, 3 for Bubble Sort, 4 to exit\n");
        scanf("%d", &a);
        if(a==4)    //If the user inputs 4, then the loop terminates immediately, ending the program before the creation of variables that won't be used
        {
            printf("Bye Bye SearchNSort!");
            break;
        }
        else if(a>4||a<1)   //If the user enters an incorrect input, then they are prompted to re-enter correct input
        {
            printf("Incorrect input!\nTry again...\n");
            continue;
        }
        int arr[10];
        if(a==1||a==3)      //For options 1 and 3, the array need not necessarily be in any order
        {
            printf("Enter the array of 10 integers\n");
            for(int i=0; i<10; i++)
                scanf("%d", &arr[i]);
        }
        else                //For option 2, the array must be in sorted ascending/descending order for binary search to work
        {
            printf("Enter the array of 10 integers, which are necessarily in sorted ascending/descending order!\n");
            for(int i=0; i<10; i++)
                scanf("%d", &arr[i]);
            int fl=1;       //Checking if the input is in sorted order
            for(int i=0; i<9; i++)      //Checking if it is in ascending order
                if(arr[i]>arr[i+1])
                    fl=0;
            if(!fl)                     //Checking if it is in descending order
                for(int i=0; i<9; i++)
                    if(arr[i]<arr[i+1])
                        fl=-1;
            if(fl==-1)
            {
                printf("The array entered is not in sorted order!\n");
                continue;
            }
        }
        if(a==1||a==2)  //For option 1 and 2, it is further required to accept the element to be searched, as well as output its position
        {
            int x, ind;
            printf("Enter the element to be searched\n");
            scanf("%d", &x);
            if(a==1)
                ind = linearSearch(arr, x); 
            else
                ind = binarySearch(arr, x);
            if(ind==-1)
                printf("Element not found\n");
            else
                printf("Element found at %dth location\n", ind);
        }
        else //For option 3 there is no further input required, only the array elements are to printed in ascending order
        {
            bubbleSortDec(arr);
            printf("Elements in descending order after being sorted:\n");
            for(int i=0; i<10; i++)
                printf("%d ", arr[i]);
            printf("\n");
            printf("Elements in ascending order after being sorted:\n");
            for(int i=9; i>=0; i--)
                printf("%d ", arr[i]);
            printf("\n");
        }
    }
    return 0;
}