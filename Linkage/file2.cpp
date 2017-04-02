#include<stdio.h>
#include "file2.h"
#include "file1.h"
extern int a = 10;
void print1(int p_a)
{
	a = p_a;
	printf("FILE2::%d",a);
}
