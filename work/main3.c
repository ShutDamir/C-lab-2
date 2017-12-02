#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"

int main()
{
	int count;
	int line = 1;
	char buf[80] = { ' ' };
	   puts("Enter the number of rows:");
	   scanf("%d", &count);
          for (line; line <= count; line++)
		   printf("%s\n", layout(buf, line, count));
  return 0;
}