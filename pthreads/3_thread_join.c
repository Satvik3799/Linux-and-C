//Passing an arguement to threads and get results from thread

#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
 
void *myturn( void *arg)
{
	int *v_ptr = (int *) arg;
	for(int i=0; i<5; i++)
	{
		sleep(1);
		printf("My turn! %d v= %d\n", i, *v_ptr);
		(*v_ptr)++;
	}
	return NULL;
}

void yourturn()
{
	for(int i=0; i<3; i++)
	{
		sleep(1);
		printf("Your Turn! %d\n", i);
	}
}

int main()
{
	pthread_t newthread;
	
	int v = 5; //We will pass this as interger in a thread 
	
	pthread_create(&newthread, NULL, myturn, &v);
	yourturn();

	pthread_join(newthread, NULL);
	printf(" Thread is done: v=%d\n", v);
}
