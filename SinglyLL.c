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

/// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: Display
// Discription  : Used to display the Linked List
// Input        : PNODE
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 29/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Display(PNODE First)
{
    while (First != NULL)
    {
        printf("| %d |->", First->data);
        First = First->next;
    }
    printf("NULL\n");
}
// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: Count
// Discription  : Used to count the number of nodes in Linked List
// Input        : PNODE
// Output       : Integer
// Author       : Sakshi Bhandari
// Date         : 29/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int Count(PNODE First)
{
    int iCount = 0;
    while (First != NULL)
    {
        iCount++;
        First = First->next;
    }
    return iCount;
}
/// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: InsertFirst
// Discription  : Used to insert the node at first position in the Linked List
// Input        : PPNODE, Integer
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 29/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void InsertFirst(PPNODE First, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if (*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
}
/// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: InsertLast
// Discription  : Used to insert node at last position of Linked List
// Input        : PPNODE, Integer
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 29/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void InsertLast(PPNODE First, int No)
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
        temp = newn;
    }
}
/// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: InsertAtPos
// Discription  : Used to node at given position in Linked List
// Input        : PPNODE, Integer
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 29/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void InsertAtPos(PPNODE First, int No, int iPos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    int iLength = 0, i = 0;

    iLength = Count(*First);

    if ((iPos < 1) || (iPos > iLength + 1))
    {
        printf("Invalid Position");
        return;
    }
    if (iPos == 1)
    {
        InsertFirst(First, No);
    }
    else if (iPos == iLength + 1)
    {
        InsertLast(First, No);
    }
    else
    {

        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = No;
        newn->next = NULL;

        temp = *First;

        for (i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: DeleteFirst
// Discription  : Used to delete node at First position of Linked List
// Input        : PPNODE
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 29/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void DeleteFirst(PPNODE First)
{
    PNODE temp = NULL;

    if (*First == NULL)
    {
        printf("Linked list is empty\n");
    }
    else if ((*First)->next == NULL)
    {
        free(*First);
        *First = NULL;
    }
    else
    {
        temp = *First;
        *First = (*First)->next;

        free(temp);
    }
}
/// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: DeleteLast
// Discription  : Used to delete node at last position of Linked List
// Input        : PPNODE
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 29/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void DeleteLast(PPNODE First)
{
    PNODE temp = NULL;

    if (*First == NULL)
    {
        printf("Linked list is empty\n");
    }
    else if ((*First)->next == NULL)
    {
        free(*First);
        *First = NULL;
    }
    else
    {
        temp = *First;

        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}
/// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: DeleteAtPos
// Discription  : Used to delete node at given position of Linked List
// Input        : PPNODE, Integer
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 29/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void DeleteAtPos(PPNODE First, int iPos)
{
    PNODE temp1 = NULL;
    PNODE temp2 = NULL;
    int iLength = 0, i = 0;

    iLength = Count(*First);

    if ((iPos < 1) || (iPos > iLength))
    {
        printf("Invalid Position");
        return;
    }
    if (iPos == 1)
    {
        DeleteFirst(First);
    }
    else if (iPos == iLength)
    {
        DeleteLast(First);
    }
    else
    {

        temp1 = *First;

        for (i = 1; i < iPos - 1; i++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;

        temp1->next = temp2->next;
        free(temp2);
    }
}
/// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: Main
// Discription  : Entry point function
// Input        : Null
// Output       : Integer
// Author       : Sakshi Bhandari
// Date         : 29/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head, 51);
    InsertFirst(&Head, 21);
    InsertFirst(&Head, 11);

    Display(Head);
    iRet = Count(Head);
    printf("Number of nodes: %d\n", iRet);

    InsertLast(&Head, 101);
    InsertLast(&Head, 111);
    InsertLast(&Head, 151);

    Display(Head);
    iRet = Count(Head);
    printf("Number of nodes: %d\n", iRet);

    InsertAtPos(&Head, 60, 4);

    Display(Head);
    iRet = Count(Head);
    printf("Number of nodes: %d\n", iRet);

    DeleteFirst(&Head);

    Display(Head);
    iRet = Count(Head);
    printf("Number of nodes: %d\n", iRet);

    DeleteLast(&Head);

    Display(Head);
    iRet = Count(Head);
    printf("Number of nodes: %d\n", iRet);

    DeleteAtPos(&Head, 4);

    Display(Head);
    iRet = Count(Head);
    printf("Number of nodes: %d\n", iRet);
}