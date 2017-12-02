#define _CRT_SECURE_NO_WARNINGS
#include "task2.h"
#include <stdio.h>
#include <time.h>

int main()
{
	int secret=0, value=0;
	srand();
	secret = 1 + rand() % 99;
	printf("%d\n", secret);

	while (turn != 0)
	{
		puts("\nEnter your value:\n");
		scanf("%d", &value);
		if (turn<0)
			 puts("\nless");
		if (turn>0)
			 puts("\nmore");
	}

	if (turn == 0)
	 puts("\nRight value!");
	
	return 0;
}