#include<stdio.h>
int fun(int i){
	return i>1?i*fun(i-1):i;
}
main(){
	printf("%d",fun(5));
}
