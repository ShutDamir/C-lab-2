#include "task6.h"
#include <string.h>
#define  prob ' '

char * clear(char * line)
{
	for (int i = 0; i < strlen(line); i++)
	{

		if ((line[i] == prob) && (line[i + 1] == prob))


			for (int j = i; j < strlen(line); j++)
			{
				line[j] = line[j + 1];
				
				i = 0;
			}
	}

	             while (line[0] == prob)
		           for (int k = 0; k < strlen(line); k++)
			          line[k] = line[k + 1];
	                    if (line[strlen(line) - 1] == '\n')
		                   line[strlen(line) - 1] = '\0';
	                          if (line[strlen(line) - 1] == prob)
		                        line[strlen(line) - 1] = '\0';
	     return line;
}