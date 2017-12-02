#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task5.h"
#include <time.h>

#define COUNT 10
#define LENGTH 8

int main()
{
	clock_t now;
	srand(time(0));
	char line[LENGTH + 1];
	line[LENGTH] = '\0';
	int i = 1;  
			
	while (i <= COUNT)
	{
		puts(password(line));
		i++;
	}
	return 0;
}