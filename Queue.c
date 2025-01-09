#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

int iCount = 0;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: Count
// Discription  : Used to count the number of elements in Queue
// Input        : null
// Output       : Integer
// Author       : Sakshi Bhandari
// Date         : 1/08/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int Count()
{
    return iCount;
}
/// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: Display
// Discription  : Used to display the Queue
// Input        : PNODE
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 1/08/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Display(PNODE First)
{

    while (First != NULL)
    {
        printf("%d\t", First->data);
        First = First->next;
    }
}
/// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: Enqueue
// Discription  : Used to insert the node in Queue
// Input        : PPNODE, Integer
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 1/08/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Enqueue(PPNODE First, int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if (*First == NULL)
    {
        *First = newn;
    }
    else
    {

        temp = *First;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }

    iCount++;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: Dequeue
// Discription  : Used to delete node from the Stack
// Input        : null
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 1/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int Dequeue(PPNODE First)
{
    PNODE temp = NULL;
    int iValue = 0;

    if (*First == NULL)
    {
        printf("Queue is Empty\n");
    }
    else if ((*First)->next == NULL)
    {
        free(*First);
        *First = NULL;
    }
    else
    {
        temp = *First;
        iValue = (*First)->data;
        *First = (*First)->next;

        free(temp);
    }
    iCount--;
    
    return iValue;
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    Enqueue(&Head, 111);
    Enqueue(&Head, 121);
    Enqueue(&Head, 51);
    Enqueue(&Head, 21);
    Enqueue(&Head, 11);

    Display(Head);
    iRet = Count();
    printf("\nNumber of elements are: %d\n", iRet);

    iRet = Dequeue(&Head);
    printf("Poped element is: %d\n",iRet);

    Display(Head);
    iRet = Count();
    printf("\nNumber of elements are: %d\n", iRet);

    return 0;
}