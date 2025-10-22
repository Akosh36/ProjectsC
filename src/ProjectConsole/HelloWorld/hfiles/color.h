#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void rc(void){
	int r = rand() % 9;
	printf("\x1b[3%dm" , r);
}
