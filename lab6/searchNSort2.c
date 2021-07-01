#include <stdio.h>
#include <stdlib.h>

void bubbleSortDec(int arr[10])
{
    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9-i; j++)
        {
            if(arr[j]<arr[j+1])   
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
            return i+1; 
    return -1; 
}

int binarySearch(int arr[10], int x)
{
    int l=0, r=9;
    while(l<=r)
    {
        int m = (l+r)/2;
        if(arr[m]==x)       
            return m+1;
        if(arr[m]<x)       
        {
            l=m+1;
        }
        else
        {
            r=m-1;
        }
    }
    return -1;      
}

int main()
{
    while(1)
    {
        int a;
        printf("Enter 1 for Linear Search, 2 for Binary Search, 3 for Bubble Sort, 4 to exit\n");
        scanf("%d", &a);
        if(a>4||a<1)
        {
            printf("Wrong input, try again!!\n");
            continue;
        }
        else if(a==4)
        {
            printf("Bye bye searchNSort!");
            exit(0);
        }
        int arr[10], x, ind;
        printf("Enter the array of 10 integers\n");
        for(int i=0; i<10; i++)
        {
            scanf("%d", &arr[i]);
        }
        switch(a)
        {
            case 1:
                printf("Enter the element to be searched\n");
                scanf("%d", &x);
                ind = linearSearch(arr, x);
                if(ind==-1)
                    printf("Element not found\n");
                else
                    printf("Element found at %dth position\n", ind);
                break;
            case 2:
                printf("Enter the element to be searched\n");
                scanf("%d", &x);
                ind = binarySearch(arr, x);
                if(ind==-1)
                    printf("Element not found\n");
                else
                    printf("Element found at %dth position\n", ind);
                break;
            case 3:
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