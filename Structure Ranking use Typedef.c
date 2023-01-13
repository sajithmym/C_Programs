#include<stdio.h>
#include<conio.h>
#include<string.h>

typedef struct {
    char n[100][100] ; //name list 
    int bm,sm,im;    // Btec marks, Sft marks,ICT marks 
    float a[100];    // Average
    int t[100];    //Total
}details; 

int main(){   
    int st[100];
    char o[22];
    int x=-99*5;
    
    details s; //assigning Structure
    
    int cp=0;
    while(1){
        printf("\n\t\t\t* %d th Student... ",cp+1);
        printf("\n Enter Name : ");
        scanf("%s", &s.n[cp]);
        
        printf(" B.tec marks : ");
        scanf("%d",&s.bm);
        
        printf(" S.tec marks : ");
        scanf("%d",&s.sm);
        
        printf(" Ict marks : ");
        scanf("%d",&s.im);
       
        s.t[cp]=s.bm+s.sm+s.im;
        st[cp]=s.t[cp];
        s.a[cp]=s.t[cp]/3.0;
        
        printf("\n   %s Totel is %d",s.n[cp],s.t[cp]);
        printf("\n   %s Average is %.2f \n",s.n[cp],s.a[cp]);
        cp+=1;
        printf("\nEnter q - end..\n    Enter any key to next student : ");
        scanf("%s",o);
        if (!strcmp(o,"q")) 
            break;
    } 
    
    int i=0;
    int j=0;
    int ix;
    int mx[100];
    for(i;i!=cp;i+=1){
        for(j=0;j!=cp;j+=1) {
            if (st[j] > x) {
                x=st[j];
                ix=j;
             }    
        } 
        mx[i]=ix;
        st[ix]=-99*3;
        x=-99*4;
    } 
    printf("\n- - - - - - - - - - - - - - - - - - - - - -\n");
    int n;
    for(n=0;n!=cp;n++){
        printf("\n\t»»»»»»»»» ");
        printf("\n   %d place : %s \n     Average : %.2f",n+1,s.n[mx[n]],s.a[mx[n]]);
        printf("\n       Total is : %d",s.t[mx[n]]);
        printf("\n\t»»»»»»»»» ");
        printf("\n");
    } 
    printf("\n- - - - - - - - - - - - - - - - - - - - - - \n");
    return 0;
}
