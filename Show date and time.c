
#include <stdio.h> 
#include <time.h> 

int main() 
{ 
   struct sajith* show;

    time_t t; 

    t = time(NULL); 

    show = localtime(&t); 

    printf("%s", asctime(show)); 
    
    return 0;
} 