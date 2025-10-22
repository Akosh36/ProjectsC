#include <stdio.h>
#include <unistd.h>
#include "../hfiles/color.h"
int main(){
	srand(time(NULL));
	FILE *ptr;
	ptr = fopen("text.txt" , "r");
	char ch;
	while((ch = fgetc(ptr)) != EOF){
		rc();
		printf("%c" , ch);
	}
	return 0;
}
