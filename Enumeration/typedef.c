#include<stdio.h>

typedef enum {
	mon=111,
	tue=222,
	wed=333,
	thu,
	fri=11,
	sat,
	sun=55,
	ok}day;

int main() {
	day f;
	f=ok;
	printf("\n\t--- mon is %d -- \n\n",mon);
	printf("\t--- tue is %d -- \n\n",tue);
	printf("\t--- wed is %d -- \n\n",wed);
	printf("\t--- thu is %d -- \n\n",thu);
	printf("\t--- fri is %d -- \n\n",fri);
	printf("\t--- sat is %d -- \n\n",sat);
	printf("\t--- sun is %d -- \n\n",sun);
	printf("\t--- ok is %d -- \n\n",f);
	return 0;
}

//printf();
//scanf();
