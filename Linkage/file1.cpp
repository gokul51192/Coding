#include<stdio.h>
#include "file1.h"
extern int a = 10;
void print(int p_a)
{
	a = p_a;
	printf("FILE1::%d",a);
}
