#include<stdio.h>
volatile int a ;
int main()
{
	a = a+1;
	printf("\nA value :[%d]",a);
	int temp;
	printf("\n How much Needs to be incremented for a value \n");
	scanf("%d",&temp);
	a = a+temp;
	printf("\nA value at the end of the program:[%d]",a);
	return 0;
}
