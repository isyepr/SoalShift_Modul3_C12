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
	}
char kata[1000];
char kata2[1000];
void* count_Ifah(void *arg){
	status = 0;
	fp = fopen("/home/ilham/modul3/Novel.txt", "r");
	char kata[1000];
	char cari[5]="Ifah";
	int countiffah=0;
	while(fgets(kata,1000,fp)!=NULL){
		countifah+=hitung(kata,cari);
		}
	status=1;
	fclose(fp);
	printf("IFAH=%d\n", countifah);
	}
void* count_Fina(void *arg){
	while(status != 1){
	fq = fopen ("/home/ilham/modul3/Novel.txt", "r");
	char cari[5]="Fina";

	int countfina=0;
	while(fgets(kata2,2000,fq)!=NULL){
		countfina+=hitung(kata2,cari);
		}
	fclose(fq);
	printf("Fina=%d\n", countfina);
	}
}
