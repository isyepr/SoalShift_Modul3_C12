#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>

pthread_t tid1;
pthread_t tid2;
int status;

FILE *fp;
FILE *fq;
int hitung(char* String, char *str){
	int count=0;
	char* Temp = String;

	while(Temp != NUll){
		Temp=strstr(Temp,str);
		if(Temp){
			Temp++;
			cout++;
			}
		}
		return count;
