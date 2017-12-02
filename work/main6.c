#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task6.h"
#include <string.h>
#define N 50

int main()
{
	char line[N];
	puts("Enter the string:");
	fgets(line, N, stdin);
	   puts("\nCleaned:");
	   printf("%s\n", clear(line));

	return 0;
}