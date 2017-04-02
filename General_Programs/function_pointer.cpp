#include<stdio.h>
#include<iostream>
int sum(int a,int b)
{
	return a+b;
}
int subtract(int a,int b)
{
	return a-b;
}
int function_needs_to_be_invoked(int (*p_fun)(int,int),int a ,int b)
{
	printf("\n Function going to be invoked \n");
	return p_fun(a,b);
}
int main()
{
	int a,b,choice;
	printf("\n Enter a and b \n");
	scanf("%d %d",&a,&b);
	printf("\n Enter 1 for sum , 2 for subtract");
	scanf("%d",&choice);
	if(1 == choice)
		choice = function_needs_to_be_invoked(sum,a,b);
	else
		choice = function_needs_to_be_invoked(subtract,a,b);
	printf("your result is :%d",choice);
	return 0;
}
