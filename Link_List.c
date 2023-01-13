#include <stdio.h>
#include <stdlib.h>

#define design printf("\n\t-----------------------------------------------------------------------\n\n"); \
                        printf("\t\t\t\t Enter 1 to push\n"); \
                        printf("\t\t\t\t Enter 2 to pop\n"); \
                        printf("\t\t\t\t Enter 3 to Terminate\n"); \
                        printf("\n\t-----------------------------------------------------------------------\n\n"); \
                        printf(" Enter Your Chice :- ");

typedef int E;
typedef enum {False,True} L;

typedef struct node{
    E value;
    struct node *NEXT;
}Node;

typedef struct{
    int number;
    L full;
    Node *TOP;
}Stack;

void create(Stack *s){
    s->full = False;
    s->number = 0;
    s->TOP = NULL;
}

L Empty(Stack *s){
    return (s->TOP == NULL);
}

L Full(Stack *s){
    return (s->full);
}

void Push(E item, Stack *s){
    Node *np;
    np=(Node *)malloc(sizeof(Node));
    if (np==NULL){
        printf("Not enough memory");
        s->full = True;
    }else{
        np->value=item;
        np->NEXT=s->TOP;
        s->TOP=np;
        s->number++;
    }
}

void DestroyStack( Stack *s ) {
    free (s);
}

void Pop(E *item, Stack *s){
    Node *np;
    *item = s->TOP->value;
    np = s->TOP;
    s->TOP = s->TOP->NEXT;
    s->number--;
    free(np);
}


int main(){
    int popItem,pushItem,choice;
    Stack ki;
    create(&ki);

    while(True){
        design;
        scanf("%d",&choice);

        if (choice==1){
            printf(" Enter Value to push :- ");
            scanf("%d",&pushItem);
            Push(pushItem,&ki);
        }else if (choice==2){
            Pop(&popItem,&ki);
            printf("\npop value %d",popItem);
        }else if (choice==3)
            break;
        else
            printf("\n --> Invalid Try again <-- \n");
    }
    return 0;
}
