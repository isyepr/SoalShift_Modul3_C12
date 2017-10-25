#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<pthread.h>

int in;
pthread_t tid[111];

void* faktor(void *arg){
	int hsl=1;
	for (int i=in; i>=1;i++)
	hsl=hsl*i;
	printf("Hasil %d! = %d\n", in, hsl);
	return NULL;
	}
