#include <stdio.h>
#define size 5

void main(){
	int *Value;
	int Q5[size] = {963,10,89,789,111};
	Value = Q5;
	for (int i=0; i != size; ++i)
		printf("\n for loop \t\t --> %d <--", *Value++);

	printf("\n\n");

	int count = 0, *second = Q5;
	while (count != size){
		printf("\n while loop\t\t --> %d <--", *second++);
		count = count + 1;
	}
}