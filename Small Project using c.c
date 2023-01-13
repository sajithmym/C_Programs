// Student Number : CT/2018/056 

#include<stdio.h>
#include <string.h>

int main(){ 
    char name[20],id[6],test[30];
    int age,day,valid=5,discount=0,oo;
    
    printf("\n***************************************************************\n");
    printf("\tservice code      Description \n") ;
    printf("\t  SV105      :   Docter Channeling\n") ;
    printf("\t  SV156      :   Pharmacy\n");
    printf("\t  SV128      :   Laboratory\n");
    printf("\t  SV100      :   OPD\n");
    printf("***************************************************************");
    
    printf("\nEnter your Name :- ");
    scanf("%[^\n]",name);
    printf("Enter your age :- ");
    scanf("%d",&age);
    printf("\nEnter a service code :- ");
    scanf("%s",id);
    
    while (strcmp(id,"q") && strcmp(id,"Q") ) {
     if (!strcmp(id,"SV156") || !strcmp(id,"sv156") ) {
        discount+=2;
        valid=10;
        
      } 
        // Pharmacy Complite... 
    
     if (!strcmp(id,"SV105") || !strcmp(id,"sv105") ) {
        valid=10;
        printf("\n\t\t------------------\n");
        printf("\t\t  1 - Monday \n") ;
        printf("\t\t  2 - Tuesday \n") ;
        printf("\t\t  3 - Wednesday \n") ;
        printf("\t\t  4 - Thursday \n") ;
        printf("\t\t  5 - Friday \n") ;
        printf("\t\t  6 - Saturday \n") ;
        printf("\t\t  7 - Sunday \n") ;
        printf("\t\t------------------ \n\n");
        
        printf("    Enter Day Number your wish (1-7) :- ");
        scanf("%d",&day);
        
        while ((day>=8) || (day<=0)){
            printf("\n\t Invalid input.. ");
            printf("\n   Enter Day Number (1-7) :- ");
            scanf("%d",&day);
        } 
        if (day>5){
           discount+=5;
        } 
        else{
           discount+=10;
        } 
         //Doctor Channeling complete.. 
     } 

      if (!strcmp(id,"SV128") || !strcmp(id,"sv128") ) {
        valid=10;
        printf("\n\tEnter Test Type :");
        scanf("%s",test);
        if (!strcmp(test,"Blood") || !strcmp(test,"blood") || !strcmp(test,"BLOOD")) {
            discount+=5;
        } 
        else {
            printf("Sorry, no discounts are available for this test! ");
        } 
      } //Laboritary complete.... 
      
      if (!strcmp(id,"SV100") || !strcmp(id,"sv100")){
            valid=10;
            discount+=3;
      } 
      // OPD complete... 
      
     if (valid!=10) {
        printf("\n\t Invalid Code...\n ");
      } 
    
      valid=5;
  
      printf("\n\t ----- Enter q to End -----\n");
      printf("Enter a service code or q :- ");
      scanf("%s",id); 
      printf("\t\t********\n");  
   } 
    
    if (age>64) {
        printf("\n*%s You are offered with the seniaor Citizen Discount! * \n ",name) ;
        discount+=15;
    }  
    printf("\n***************************************************************\n");
    printf("\n\t  ** %s You are eligible for a %d%% Discount **\n",name,discount);
    printf("\n***************************************************************\n");
    scanf("%d",&oo);
    return 0;
}