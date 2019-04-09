#include "stdio.h"
#include<time.h>
void main() {
	time_t lt; /*define a longint time varible*/
	lt=time(NULL);/*system time and date*/
	struct tm *p=localtime(&lt);
	struct tm *q=gmtime(&lt);
	//printf("%d\n",p->tm_yday);µ±Ìì 
	printf("%s\n",ctime(&lt));/*english format output*/
	printf("%s\n",asctime(p));/*tranfer to tm*/
	printf("%s\n",asctime(q)); /*tranfer to Greenwich time*/
}
// struct tm *localtime(const time_t *timer)
// struct tm *gmtime(time_t *time)

// char* asctime(struct tm * ptr)

// char *ctime(const time_t *time)
//double difftime(time_t time2, time_t time1)
// time_t time(time_t *timer)
