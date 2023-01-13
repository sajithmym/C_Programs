#include<stdio.h>

int main()
{    char i;
    
    printf("\n\nEnter :- ");
    i=getchar();
    switch (i) 
    {    case 'a':
            printf("\nSaJiTh") ;
            break ;
         case 'b':
               printf("\n Cool") ;
               break;
          case 'c':
               printf("\n Haire") ;
               break;
          case 'd':
               printf("\n chicago") ;
                break;
          case 'f':
               printf("\n plastic" ) ;
               break;
         default:
                printf("\nok");
    }
    return 0;
}