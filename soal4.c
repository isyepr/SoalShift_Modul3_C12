#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<pthread.h>

int in;
pthread_t tid[111];

void* faktorial(void *arg){
	int hsl=1;
	for (int i=in; i>=1;i--)
	hsl=hsl*i;
	printf("Hasil %d! = %d\n", in, hsl);
	return NULL;
	}
int main(int argc,char** argv){
	for(int i=0; i<argc-1; i++){
	in=0;
	for(int j=0; j<strlen(argv[i+1]); j++){
	in=in*10;
	in+=(argv[i+1][j]-'0');
	}

	pthread_create(&(tid[i]), NULL, &faktorial, NULL);
	pthread_join(tid[i], NULL);
}
}
