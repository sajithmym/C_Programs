#include<stdio.h>

#define Design for (int i = 0; i < 3; ++i){ \
	printf("----------------------------------------------------------------------------------------\n");  \
	printf("****************************************************************************************\n"); } \

#define Qu(x) (x)*(x)*(x)

#define sq(x) (x)*(x)

#define max(x,y) ((x)>(y)?x:y)

#define min(x,y) (x>y?y:x)

#define tm(a,b,c) max(a,max(b,c))
void main(){
	
	Design

	printf("\n11 ^ 3 : %d\n", Qu(11));

	printf("\n11 ^ 2 : %d\n", sq(4+2));

	printf("\n50,40 what is max : %d\n", max(50,40));

	printf("\n10,50,90 what is max : %d\n", tm(10,50,90));

	printf("\n50,40 what is min : %d\n\n", min(50,40));

	Design
}