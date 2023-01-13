#include <stdio.h>
#include <stdlib.h>
#define kd \
        printf("\n\t-----------------------------------------------------------------------\n\n"); \
        printf("\t\t\t\t Enter 1 to push\n"); \
        printf("\t\t\t\t Enter 2 to pop\n"); \
        printf("\t\t\t\t Enter 3 to Terminate\n"); \
        printf("\n\t-----------------------------------------------------------------------\n\n"); \
        printf(" Enter Your Chice :- ");

typedef int StackEntry;
typedef enum {False,True} Logic;

typedef struct node {
    StackEntry entry;
    struct node *next;
}Node;

typedef struct{
    int no;
    Logic full;
    Node *top;
}Stack;

void CreateStack(Stack *s){
    s->top = NULL;
    s->no = 0;
    s->full = False;
}

Logic Empty(Stack *s){
    return (s->top == NULL);
}

Logic Full(Stack *s){
    return (s->full);
}

void push(Stack *s,StackEntry oi){
    Node *n;
    n = (Node *)malloc(sizeof(Node));
    if (n == NULL)
        printf("RAM Full Cant't Push...");
    else{
        n->entry = oi;
        n->next = s->top;
        s->top = n;
        s->no++;
    }
}

void pop(Stack *s,StackEntry *v){
    if (!Empty(s)){
        Node *np;
        *v = s->top->entry;
        np = s->top;
        s->top = s->top->next;
        s->no--;
        printf("Pop value is %d",*v);
        free(np);
    }else{
        printf("\nCan't Execute......");
    }
}

int main()
{
    printf("Welcome......!\n");
    kd;
    int inp,count = 1,value;
    Stack ok;
    CreateStack(&ok);
    while (True){
        printf("\n\t -> Enter : ");scanf("%d",&inp);
        if (inp == 1){
            push(&ok,count);
        }else if (inp == 2){
            pop(&ok,&value);
        }else if (inp == 3)
            break;
        else
            printf("\n Invalid...");
        count++;
    }
    return 0;
}
