#include <stdio.h>
#include <stdlib.h>

int main(void){
	char palavra[20] = {"Hello World!"};
	
	gets(palavra);
	
	printf("\n%s", palavra);
	return 0;
}

