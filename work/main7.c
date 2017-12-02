#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define stroka 100
#define N 100 

int main()
{
	int i=0;
	char string[stroka];
	int count[N] = {0};
	int max = 0;

	puts("Enter any string:");
	fgets(string, stroka, stdin);
	    string[strlen(string) - 1] = '\0';  
	    while (string[i]) 
	{
		count[string[i] - ' ']++;
		i++;
	}

	    for (i = 0; i < N; i++)
	   {
		    if (count[i] > 0)
			printf("%c - %d\n", i + ' ', count[i]);
	   }
	      return 0;
}