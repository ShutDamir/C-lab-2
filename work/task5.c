#include <stdlib.h>
#include <string.h>
#include "task5.h"

char * password(char * line)
{

	char symbol;
	int a = 0, b = 0, c = 0; 
	int itog = 0;
	      while (itog == 0)
	      {
		     for (int j = 0; j < strlen(line); j++)
		     {
			     switch (rand() % 3)
			   {
			     case 0:
			      {
				    symbol = rand() % ('Z' - 'A' + 1) + 'A';
				     a++;
			      }
			         break;
			           case 1:
			          {
				          symbol = rand() % ('z' - 'a' + 1) + 'a';
				          b++;
			          }
			                break;
			                  case 2:
			             {
				              symbol = rand() % ('9' - '0' + 1) + '0';
				              c++;
			             }
			                  break;
			    }
			                    line[j] = symbol;
		      }

		                          if (a > 0 && b > 0 && c > 0)
		                          {
			                        itog = 1;
		                          }
	                                	else
		                               {
			                              a = 0, b = 0, c = 0;
		                               }
		
	}

	return line;
}