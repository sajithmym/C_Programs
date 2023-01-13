#include<stdio.h>

#define area l*w

int main() {
	float l,w;
	while(1){
		printf("\n  * Enter Lenth :- ");
		scanf("%f",&l);
		printf("\n  * Enter Width :- ");
		scanf("%f",&w);

		// can undefine macro " #undef area ".....
		// can undifine any place in program...

		printf("\n\tArea is %.2f\n",area );
		printf("\n * * * * * * * * * * * * * * * * * * * * * * * \n");

	}
	return 0;
}

//printf();
//scanf();
