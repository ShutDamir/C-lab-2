#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"
#include <time.h>
#include <Windows.h>

int main()
{
	float height = 0;
	int startHeight = 0, currTime = 0;

	puts("\nEnter start height:\n");
	   scanf("%d", &startHeight);
          while(height<=startHeight)
         {
	         height = (9.81*(currTime)*(currTime)) / 2;
	            currTime++;
	               if(height<=startHeight)
		           printf("\n %ds %.1fm\n", currTime, (startHeight-height));
	                  if (height >= startHeight)
		              puts("\nBABAH!\n");
		              Sleep(1000);
         }
                        return 0;
}