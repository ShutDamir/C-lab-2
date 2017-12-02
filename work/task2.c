#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task2.h"

int turn(int value, int secret)
{
	if (value == secret)
		return 0;
	if (value < secret)
		return -1;
	if (value > secret)
		return 1;
}