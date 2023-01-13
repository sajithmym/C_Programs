#include <stdio.h>

void main(int counting,char *The_List[]){

	printf("\n\n \t ---> Number of Argument : ~ %d ~ <---\n\n", counting);

	for (int i=0; i<counting; ++i)
		printf("\t\t\t ---> Argument %d is %s  \n",i,The_List[i]);
}