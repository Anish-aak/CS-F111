#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main ()
{
	char s[100], ans[100], temp;
	int i, j;
    printf("Enter the string:\n");
    scanf("%[^\n]%*c", s);
	int n = strlen(s);
	for(i=0; i<n; i++)              //This converts all characters to its lower case
	    s[i] = tolower(s[i]);
	for (i=0; i<n-1; i++)           //This is the sorting of the string character by character, comparing ascii values
	{
		for (j=i+1; j<n; j++) 
		{
			if (s[i]>s[j]) 
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	for(i=0; i<n; i++)      //This loop finds the first space in the sorted array, as spaces have lower ascii they will be in the first
	    if(s[i]!=' ')
	        break;
	strcpy(ans, s+i);      //Copies the answer to 'ans' array, giving source pointer as the first non-space character in the string 's'
	printf("The sorted string is %s", ans);
	return 0;
}