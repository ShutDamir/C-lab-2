#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"


char *layout(char buf[], int line, int count)
{
	for (int probely = 0; probely< (count - line); probely++)
		buf[probely] = ' ';

	for (int zvezd = (count - line); zvezd< (count + line - 1); zvezd++)
		buf[zvezd] = '*';
	buf[count + line - 1] = '\0';

	return buf;
}