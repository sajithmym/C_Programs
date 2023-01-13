#include <stdio.h>
#include <stdlib.h>

extern int c;
extern float f;

void p(){
    f = 1.8*c+32;
}