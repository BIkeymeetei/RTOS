#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <pthread.h> 



pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER;

void print(char* a, char* b)
{
    
	pthread_mutex_lock(&mutex1);
	printf("%s\n",a);
	sleep(2);
	printf("%s\n",b);
	pthread_mutex_unlock(&mutex1);
}

void *print_prathvi(void* arg)
{
	print("I am","Prathvi");
	
}


void *print_raj(void* arg)
{
	
	print("I am","Raj");
}


int main()
{
	pthread_t tid1,tid2;

	pthread_create(&tid1,NULL,print_prathvi,NULL);
	pthread_create(&tid2,NULL,print_raj,NULL);

	pthread_join(tid1,NULL);
        pthread_join(tid2,NULL);

    pthread_exit(NULL);
	
	
	return 0; 
}