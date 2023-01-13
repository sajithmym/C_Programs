#include<stdio.h>

int main() {
    int saj=100;
    while (saj != 1000) {
        int i=1;
        int m;
        printf("\n\tMultiplication Table ....\n");
        printf("Enter a integer :-  ");
        scanf("%d",&m);
        printf("\n");
        while (i<25) {    
             int v=i*m;
             printf("\t%d X %d = %d\n",i,m,v);
             i+=1;
       }
    } 
    
    return 0;
}
