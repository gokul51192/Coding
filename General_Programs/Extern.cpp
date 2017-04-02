#include <stdio.h>
extern int var;
int main()
{
	var = 10;
	printf("%d ", var);
	return 0;
}

