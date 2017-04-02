#include<stdio.h>
struct outer
{
	int a;
	struct inner
	{
		int i_a;
	};
	inner *i_ptr;
};
int main()
{
	outer a;
	if(1)
	{
		struct outer::inner obj1;
		obj1.i_a = 10;
		a.i_ptr = &obj1;
	}
	{
		int a;
	}
	printf(" \n [%d]\n",a.i_ptr->i_a);
	return 0;
}
