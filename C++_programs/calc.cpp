#include<stdio.h>
int main()
{
	int i,j;
	int total;
	for(i=1;i<=30;i++)
	{
		total = 0;
		for(j=i;j>0;j--)
		{
			int temp = 0;
			temp = j*j;
			total= total+temp;
		}
		printf("\n i:%d value:%d",i,total);
	}
	return 0;
}
