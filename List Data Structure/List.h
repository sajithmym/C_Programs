#include <stdio.h>
#include <stdlib.h>

#define MAXLIST 10
#define EMPTY -1
#define FULL MAXLIST - 1
#define No_Value -777

typedef enum {FALSE,TRUE} Boolean;
typedef int ListEntry;
typedef int Position;

typedef struct
{
    int count;
    ListEntry entry[MAXLIST];
} List;

void CreateList(List *l)
{
    l->count = -1;
}

Boolean IsListEmpty(List *l)
{
    return (l->count == EMPTY);
}

Boolean IsListFull(List *l)
{
    return (l->count == FULL);
}

int ListSize(List *l)
{
    return (l->count + 1);
}

void InsertLast(ListEntry x, List *l)
{
    if (IsListFull(l))
    {
        // Warning("Attempt to insert at the end of a full list");
        // exit(1);
        printf("\n\t-> List is full <-\n");
    }
    else
        l->entry[++l->count] = x;
}

void Warning(char *message)
{
    // fprintf(stderr, "Warning: %s\n", message);
    printf("\nWarning: %s \n", message);
}

void Error(char *message)
{
    // fprintf(stderr, "Error: %s \n", message);
    // exit(1);
    printf("\nError: %s \n", message);
}

void Insert(Position p, ListEntry x, List *l)
{
    if (IsListFull(l))
        Error("List is full");
    else if (p < 0 || p > ListSize(l))
        Error("attempt to insert a position not in the list");
    else
    {
        int size = ListSize(l),*Remain,copy=p,idx=0,Calculate = size-p;
        Remain = (int *)malloc(Calculate*sizeof(int));
        for (copy;copy!=(size);copy++){
            Remain[idx] = l->entry[copy];
            idx++;
        }
        l->entry[p]=x;
        int i=p+1;
        for (i;i!=(size+1);i++){
            l->entry[i]=*(Remain++);
        }
        l->count++;
    }
}

void InsertList( Position p, ListEntry x, List *l)
{
    int i;
    if (IsListFull(l))
        Error("Attempt to insert an entry into a full list"); 
    else if (p < 0 || p > ListSize(l))
        Error("attempt to insert a position not in the list");
    else
    {
        for( i = ListSize(l) - 1; i >= p; i--)
            l->entry[i+1] = l->entry[i];
        l->entry[p] = x;
        l->count++;
    }
}

void DeleteList(Position p, ListEntry *x, List *l)
{
    int i;
    if (IsListEmpty(l))
        Error("Attempt to delete an entry from an empty list");
    else if (p < 0 || p >= ListSize(l))
        Error("attempt to delete a position not in the list");
    else
    {
        *x = l->entry[p];
        for (i = p; i < ListSize(l); i++)
            l->entry[i] = l->entry[i + 1];
        l->count--;
    }
}

void RetrieveList(Position p, ListEntry *x, List *l)
{
    if (IsListEmpty(l))
        Error("Attempt to retrieve an entry from an empty list");
    else if (p < 0 || p >= ListSize(l))
        Error("attempt to retrieve an entry at a position not in the list");
    else
        *x = l->entry[p];
}

void ReplaceList(Position p, ListEntry x, List *l)
{
    if (IsListEmpty(l))
        Error("Attempt to replace an entry of an empty list");
    else if (p < 0 || p >= ListSize(l))
        Error("attempt to replace an entry at a position not in the list");
    else
        l->entry[p] = x;
}

void TraverselList(List *l, void (*Visit)(ListEntry))
{
    int i;
    for (i = 0; i < ListSize(l); i++)
    {
        (*Visit)(l->entry[i]);
    }
}

void Show(List *ok)
{
    printf("\n\t\t-----------------------------------------");
    for (int i = 0; i < MAXLIST; i++)
    {
        if (ok->entry[i] == No_Value)
            printf("\n\t\t\t\tIndex %d is %s", (i), "No Value Inserted.");
        else
            printf("\n\t\t\t\tIndex %d is %d", (i), ok->entry[i]);
    }
    printf("\n\t\t-----------------------------------------\n");
}

void PrintElement(ListEntry x)
{
    printf("\n%d", x);
}