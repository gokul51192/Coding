#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	char a[10];
	memset(a,'\0',sizeof(a));
	a[5] = '1';
	printf("\n Output Array Values Ascii:[%d],char:[%c] \n",a[5],a[5]);
	return 0;
}
