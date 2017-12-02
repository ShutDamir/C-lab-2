#include "task4.h"
#include <ctype.h>
#include <string.h>

char* process(char* line)
{
	int change, left = 0, right = strlen(line) - 1;
	     while (left < right)
	     {
		    //while (isalpha(line[left]))
			 if(isalpha(line[left]))
			left++;
		      change = line[left];
		         //while ((right > left) && (isdigit(line[right])))
			  if ((right > left) && (isdigit(line[right])))
			     right--;
		            line[left] = line[right];
		             line[right] = change;
					
	      }
	return line;
}