#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char value[1000];
	memset(value,'\0',sizeof(value));
	int status = system("ls");
	int a1;
	printf("\n\n\n:::%d:::\n\n\n",status);
	FILE *fp1 = popen("echo $a","r");
	if(fp1 != NULL)
	{
		while(fgets(value,sizeof(value),fp1))
		{
			a1 = atoi(value);	
			printf("\n\n\n:::%d:::\n\n\n",a1);
			printf("\n\n %s \n\n",value);
		}
	}
	else
	{
		printf("\n\n fp1 pointer is NULL");
		return 0;
	}
	printf("\n\n\n:::%d:::\n\n\n",a1);
	printf("Enter the value you want to set to the environment variable\n\n");
	scanf("%d",&a1);
	sprintf(value,"$a=%d",a1);
	system("value");
	return 0;
}
