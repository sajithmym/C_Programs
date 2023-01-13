#include<stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

void main() {
	char String[25];
	while (1){

		printf("\n\n Enter a String :- ");
		scanf(" %[^\n]",String);

		printf(" \t* The String is '%s ' *",String);
		if (!strcmp(String,"0"))
			break;
	}
}