#include<stdio.h>
#include<pthread.h>
#define NUM_THREADS 5
void *PrintHello(void *index)
{
	printf("\n[%d] : Hello World!\n",index);
	pthread_exit(NULL);
}
int main(int argc,char *argv[])
{
	pthread_t threads[NUM_THREADS];
	int res, t;
	for(t = 0;t<NUM_THREADS;t++)
	{
		printf("\nCreating thread:[%d]\n",t);
		res = pthread_create(&threads[t],NULL,PrintHello,(void *)t);
		if(res < 0)
		{	printf("ERROR\n");
			return 0;
		}	
	}
	return 0;
}
