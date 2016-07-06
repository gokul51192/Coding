#include<iostream>
#include<stdio.h>
int fibonacci(int n) {
	const int sz = 100;
	static int f[sz]; // Initialized to zero
	f[0] = f[1] = 1;
	// Scan for unfilled array elements:
	int i;
	for(i = 0; i < sz; i++)
		if(f[i] == 0) break;
	while(i <= n) {
		f[i] = f[i-1] + f[i-2];
		if(i == 0 || i == 1)
			printf("\n f[i]:[%d]",f[i]);
		i++;
	}
	return f[n];
} ///:~
int main()
{
	printf("\n%d\n",fibonacci(10));
	printf("\n%d\n",fibonacci(11));
	printf("\n%d\n",fibonacci(12));
	return 0;
}
