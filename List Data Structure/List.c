#include "List.h"

#define jj                                                                \
    printf("\n\n\n\n------------------------------------------------\n"); \
    printf("\n\t Choose 1 to Append.");                                   \
    printf("\n\t Choose 2 to Insert.");                                   \
    printf("\n\t Choose 3 to Delete.");                                   \
    printf("\n\t Choose 4 to Retrieve.");                                 \
    printf("\n\t Choose 5 to Show.");                                     \
    printf("\n\t Choose 6 to Replace.");                                  \
    printf("\n\t Choose 7 to TraverselList.");                            \
    printf("\n\t Choose 0 to Stop.");                                     \
    printf("\n\n------------------------------------------------\n");

void main()
{
    List one;
    CreateList(&one);
    int choose;
    while (TRUE)
    {
        jj;
        printf("\n * Choose : ");
        scanf("%d", &choose);

        if (choose == 0)
            break;
        else if (choose == 1)
        {
            printf("\n\t Enter Value to Append : ");
            int z;
            scanf("%d", &z);
            InsertLast(z, &one);
        }
        else if (choose == 2)
        {
            printf("\n\t Enter Value to Insert : ");
            int z;
            scanf("%d", &z);
            printf("\n\t Enter Position : ");
            int position;
            scanf("%d", &position);
            InsertList(position, z, &one);
        }
        else if (choose == 3)
        {
            printf("\n\t * Enter Position to Delete : ");
            int pos;
            scanf("%d", &pos);
            int vz;
            DeleteList(pos, &vz, &one);
            printf("\n ---> Delete Value is %d \n", vz);
        }
        else if (choose == 4)
        {
            printf("\n\t * Enter Position to Retrieve : ");
            int pos;
            scanf("%d", &pos);
            int vz;
            RetrieveList(pos, &vz, &one);
            printf("\n ---> Retrieve Value is %d \n", vz);
        }
        else if (choose == 5)
            Show(&one);
        else if (choose == 6)
        {
            printf("\n\t * Enter Position to Replace : ");
            int pos;
            scanf("%d", &pos);
            int vz;
            printf("\n\t Enter Value to Replace : ");
            scanf("%d", &vz);
            ReplaceList(pos, vz, &one);
        }
        else if (choose == 7){
            
            TraverselList(&one,PrintElement);
        }
        else
            printf("\n <-- Invalid Input --> \n");
    }
}