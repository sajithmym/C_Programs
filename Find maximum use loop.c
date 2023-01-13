#include<stdio.h>
int main()
{   int l[56];
    int b, c,d, q, i, x;
    int z=3;
    printf("Enter %d Integers.. \n\n",z);
    for(b=0;b!=z;b+=1){
        printf("Enter : ");
        scanf("%d",&c) ;
        l[b]=c;
    } 
    printf("\n - - - - - - - - - - - - - - -");
    for (d=0;d!=z;d++) {
        int m=-5000;
        
        for (q=0;q!=z;q++) {
            if (m<l[q]) {
                m=l[q];
            }
        } 
        
        for (x=0;x!=z;x++){
            //printf("\n\t-- %d",l[x]);
            if (l[x] == m) {
                l[x]=-9999;
                break;
            } 
                
        } 
        printf("\n\t   Max %d is %d",d+1,m);
    } 
    printf("\n - - - - - - - - - - - - - - -");
    return 0;
}