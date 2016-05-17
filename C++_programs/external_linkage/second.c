#include<stdio.h>
extern const int a = 11;
extern int b = 4;
void print_a()
{		
	printf("\nFunction:-%s-,A value:-%d-",__FUNCTION__,a);
	printf("\n address of variable a:-%p-",&a);
	printf("\n address of variable b:-%p-",&b);
	return;
}
