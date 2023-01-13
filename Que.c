#include <stdio.h>
#include <stdlib.h>
#define mx 5
#define design printf("\n\t-----------------------------------------------------------------------\n\n"); \
                        printf("\t\t\t\t Enter 1 to push\n"); \
                        printf("\t\t\t\t Enter 2 to pop\n"); \
                        printf("\t\t\t\t Enter 3 to Terminate\n"); \
                        printf("\n\t-----------------------------------------------------------------------\n\n"); \
                        printf(" Enter Your Chice :- ");

typedef int QueueElement;
typedef enum {False,True} L;

typedef struct {
    QueueElement items[mx];
    int front;
    int rear;
    int count;
}Queue;

void Create(Queue *q){
    q->count = 0;
    q->front = 0;
    q->rear = -1;
}

L Empty(Queue *q){
    // if (q->rear < q->front)
    //     return (True);
    // else
    //     return (False);
    return (q->rear < q->front);
}

L Full(Queue *q){
    if (q->rear == mx-1)
        return (True);
    else
        return (False);
}

void Append(Queue *q, QueueElement x){
    if (Full(q)){
        printf("Queue Full %d\n",q->count);
        //exit(1);
    }else {
        q->items[++(q->rear)] = x;
        q->count++;
    }
}

void Serve(Queue *q, QueueElement *x){
    if (Empty(q)) {
        printf("Queue is empty,%d underflow\n",q->count);
        //exit(1);
    }else{
        *x = q->items[(q->front)++];
        q->count--;
    }
}

int main()
{
    printf("You can Push %d Values......\n",mx);
    int popItem,pushItem,choice;
    Queue ki;
    Create(&ki);

    while(True){
        design;
        scanf("%d",&choice);

        if (choice==1){
            printf(" \tEnter Value to push :- ");
            scanf("%d",&pushItem);
            Append(&ki,pushItem);
        }else if (choice==2){
            Serve(&ki,&popItem);
            printf("\npop value %d",popItem);
        }else if (choice==3)
            break;
        else
            printf("\n --> Invalid Try again <-- \n");

    }
    return 0;
}
