#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task4.h"
#define LENGTH 50

int main()
{
	char line[LENGTH];
	char ch;
	clock_t now;
	srand(time(0));
	int a = 0, b = 0, c = 0;

	      for (int i = 0; i < (LENGTH - 1); i++)
	  {
		switch (rand() % 4)
		{
		   case 0:
		   ch = rand() % ('Z' - 'A' + 1) + 'A';
		   break;
		      case 1:
			  ch = rand() % ('z' - 'a' + 1) + 'a';
			  break;
		        case 2:
			    ch = rand() % ('9' - '0' + 1) + '0';
			    break;
		 }
		        line[i] = ch;
		
	   }
	              line[LENGTH - 1] = '\0';
	              puts("\nInitial line:");
	              puts(line);             
	                 puts("\nModified line:");
	                 puts(process(line));

	return 0;
}