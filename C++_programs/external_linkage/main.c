#include<stdio.h>
extern const int a;
static int b = 9;
extern int b;
void print_a();
int main()
{
	printf("\nFunction:-%s-,A value:-%d-",__FUNCTION__,a);
	printf("\n Function :-%s-address of variable a:-%p-",__FUNCTION__,&a);
	printf("\nFunction name:%s address of variable b:-%p- b value:-%d-",__FUNCTION__,&b,b);
	print_a();
	printf("\n size of a :-%lu-",sizeof(a));
	return 0;	
}
