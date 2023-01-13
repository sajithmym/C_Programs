#include<stdio.h>

#define max(x,y) ((x)>(y)?x:y)

void main(){
	int m=0,i=1,ok;
	printf("\n \t Enter -99 to Finish... \n");
	while (1){
		printf("\n Enter  integer %d :- ",i);
		scanf("%d",&ok);
		if (ok==-99)
			break;
		if (i==1)
			m=ok;
		else
			m=max(m,ok);
		++i;
	}
	printf("\n \tMaximum Is %d \n",m );
}