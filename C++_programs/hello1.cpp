#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	printf("Enter the number");
	scanf("%d",&n);
	if (n%2 == 0) 
		printf("it is an even number");
	else
		printf("it is an odd number");
	return 0;
}
