#include <stdio.h>
#include "../hfiles/color.h"
int main(){
	FILE *ptr;
	ptr = fopen("text.txt" , "r");
	char ch;
	while((ch = fgetc(ptr)) != EOF){
		rc();
		printf("%c" , ch);
	}
	return 0;
}
