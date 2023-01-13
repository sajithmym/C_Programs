#include <stdio.h>
#include <stdlib.h>

typedef enum {False,True} Logic;
typedef int e;

typedef struct node {
    e value;
    struct node *Address;
}Node;

typedef struct {
    int count;
    Logic full;
    Node *Now;
}Stack;

void create(Stack *s){
    s->count = 0;
    s->full = False;
    s->Now = NULL;
}

Logic Empty(Stack *s){
    return (s->Now == NULL);
}

Logic Full(Stack *s){
    return (s->full);
}

void Push(e item, Stack *s){
    Node *np;
    np=(Node *)malloc(sizeof(Node));
    if (np==NULL){
        printf("Not enough memory");
        s->full=True;
    }else{
        np->value=item;
        np->Address=s->Now;
        s->Now=np;
        s->count++;
    }
}

void Pop(e *item, Stack *s){
    if (Empty(s))
        printf("\n -- Empty -- \n");
    else{
        Node *np;
        *item = s->Now->value;
        np = s->Now;
        s->Now = s->Now->Address;
        s->count--;
        free(np);
    }
}

void main(){
    printf("\n------------------------------------------------------------- \n");
    printf("\t ---> 1 to Push\n");
    printf("\t ---> 2 to Pop\n");
    printf("\t ---> 3 to Destroy\n");
    printf("\t ---> 0 to Exit\n");
    printf("----------------------------------------------------------------- \n");

    Stack one;
    create(&one);
    int input,count = 10,pop_value;

    while (True) {
        printf("\n Enter Your Choice :: ");
        scanf("%d",&input);

        if (input == 0)
            break;
        else if (input == 1)
            Push(count,&one);
        else if (input == 2){
            Pop(&pop_value,&one);
            if (pop_value == -99)
                printf("\n Can't Proceed.\n");
            else
                printf("\n The Pop value is %d",pop_value);
        }else if (input == 3)
            printf("\n-- ** ---\n");
        count+=5;
    }
}