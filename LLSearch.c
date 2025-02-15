#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void Display(PNODE First)
{
    while (First != NULL)
    {
        printf("| %d | -> ", First->data);
        First = First->next;
    }

    printf("NULL\n");
}

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

void InsertFirst(PPNODE First, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
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

void InsertLast(PPNODE First, int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
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

void InsertAtPos(PPNODE First, int iNo, int iPos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    int iLength = 0;
    iLength = Count(*First);

    if ((iPos < 1) || (iPos > iLength + 1))
    {
        printf("Invalid position\n");
        return;
    }
    if (iPos == 1)
    {
        InsertFirst(First, iNo);
    }
    else if (iPos == iLength + 1)
    {
        InsertLast(First, iNo);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = iNo;
        newn->next = NULL;

        temp = *First;

        for (int i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }
}

void DeleteFirst(PPNODE First)
{
    PNODE temp = NULL;

    if (*First == NULL)
    {
        printf("LL is empty\n");
        return;
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

void DeleteLast(PPNODE First)
{
    PNODE temp = NULL;

    if (*First == NULL)
    {
        printf("LL is empty\n");
        return;
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

void DeleteAtPos(PPNODE First, int iPos)
{
    PNODE temp1 = NULL;
    PNODE temp2 = NULL;

    int iLength = 0;
    iLength = Count(*First);

    if ((iPos < 1) || (iPos > iLength))
    {
        printf("Invalid position\n");
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

        for (int i = 1; i < iPos - 1; i++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;
        temp1->next = temp2->next;
        free(temp2);
    }
}

bool Search(PNODE First, int iNo)
{
    bool bFlag = false;
    while (First != NULL)
    {
        if (First->data == iNo)
        {
            bFlag = true;
        }
        First = First->next;
    }
    return bFlag;
}
int main()
{
    PNODE HEAD = NULL;
    int iRet = 0;
    bool iResult = 0;

    InsertFirst(&HEAD, 51);
    InsertFirst(&HEAD, 21);
    InsertFirst(&HEAD, 11);

    Display(HEAD);
    iRet = Count(HEAD);
    printf("Number of nodes are: %d\n", iRet);

    InsertLast(&HEAD, 101);
    InsertLast(&HEAD, 151);
    InsertLast(&HEAD, 151);

    Display(HEAD);
    iRet = Count(HEAD);
    printf("Number of nodes are: %d\n", iRet);

    InsertAtPos(&HEAD, 39, 3);

    Display(HEAD);
    iRet = Count(HEAD);
    printf("Number of nodes are: %d\n", iRet);

    DeleteFirst(&HEAD);

    Display(HEAD);
    iRet = Count(HEAD);
    printf("Number of nodes are: %d\n", iRet);

    DeleteLast(&HEAD);

    Display(HEAD);
    iRet = Count(HEAD);
    printf("Number of nodes are: %d\n", iRet);

    DeleteAtPos(&HEAD, 2);

    Display(HEAD);
    iRet = Count(HEAD);
    printf("Number of nodes are: %d\n", iRet);

    iResult = Search(HEAD, 151);
    if (iResult == true)
    {
        printf("151 is present\n");
    }
    else
    {
        printf("151 is present\n");
    }

    return 0;
}
