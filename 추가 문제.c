#include<stdio.h>

int main(void){
	char count[21];
	int i=0;
	
	for(i=0; i<21; i++){
		scanf("%c", &count[i]);
	}
	printf("%s", count);
}
