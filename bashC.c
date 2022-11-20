#include<stdio.h>
#include<unistd.h>
#include <sys/wait.h>
#include<stdlib.h>
#include <strings.h>
#include <limits.h>
#include<pthread.h>

int main(int argc , char* argv[]){
	double start = clock();
	struct sched_param param;
   	int pid_num = 0;
   	param.sched_priority = 50;
   	sched_setscheduler(pid_num, SCHED_FIFO, &param);
	for(int i = 0 ; i<INT32_MAX ; i++){continue;}
	for(int i = 0 ; i<1000 ; i++){continue;}
	printf("Completed process C\n");
	printf("time C: %f\n",(double)(clock()-start)/CLOCKS_PER_SEC);
	return 0 ;
}