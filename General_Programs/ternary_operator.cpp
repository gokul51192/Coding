#include<stdio.h>
int main()
{
	int a,b;
	a = 90;
	b = 45;
	//a=--b?b:(b = -12);	
	--b ? b : (b = -128);
	printf("\na:-%d- b:-%d-",a,b);
	return 0;
}
