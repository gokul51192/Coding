#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
void * myThreadFun(void * arg)
{
	int *p;
	p = new int[10000];
	printf("\n Mythread Function\n");
	return NULL;
}
int main()
{
	pthread_t tid;
	printf("Before Thread\n");
	pthread_create(&tid, NULL, myThreadFun, NULL);
	pthread_detach(tid);
	printf("After Thread\n");
	int l_count = 0;
	while(l_count <= 100)
	{
		sleep(5);
		printf("\n Main function :%d",l_count);
		l_count++;
	}
	exit(0);
}
