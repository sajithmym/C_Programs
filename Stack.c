#include <stdio.h>
#include <stdlib.h>

#define Countable 6

#define design printf("\n\t-----------------------------------------------------------------------\n\n"); \
                        printf("\t\t\t\t Enter 1 to push\n"); \
                        printf("\t\t\t\t Enter 2 to pop\n"); \
                        printf("\t\t\t\t Enter 3 to Terminate\n"); \
                        printf("\n\t-----------------------------------------------------------------------\n\n"); \
                        printf(" Enter Your Chice :- ");

typedef int StackEntryValue;
typedef enum {False,True} Logic;

typedef struct {
    int top;
    StackEntryValue *List;
}Stack;

void create(Stack *s,int tot){
    s->top = -1;
    s->List = (int *)malloc(tot*sizeof(int));
}

Logic Empty(Stack *s){
    return (s->top ==  -1);
}

Logic Full(Stack *s){
    return (s->top == (Countable-1));
}

void Push(Stack *s,StackEntryValue v){
    if (!Full(s)){
        s->top = s->top+1;
        s->List[s->top] = v;
    }else{
        printf("\n --> Stack is full can't Push Item - %d -\n",v);
    }
}

void pop(Stack *s,StackEntryValue *x){
    if(!Empty(s)){
        *x = s->List[s->top];
        s->top = s->top-1;
    }else{
        printf("\n --> Cant't pop Statck is Empty");
        *x = 0;
    }
}

int main()
{
    printf("You can Push %d Values......\n",Countable);
    int popItem,pushItem,choice;
    Stack ki;
    create(&ki,6);

    while(True){
        design;
        scanf("%d",&choice);

        if (choice==1){
            printf(" \tEnter Value to push :- ");
            scanf("%d",&pushItem);
            Push(&ki,pushItem);
        }else if (choice==2){
            pop(&ki,&popItem);
            printf("\npop value %d",popItem);
        }else if (choice==3)
            break;
        else
            printf("\n --> Invalid Try again <-- \n");

    }
    return 0;
}
