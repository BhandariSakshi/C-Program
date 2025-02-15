# include <stdio.h>
# include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

int Count(PNODE First)
{
    int iCount = 0;

    while (First != NULL)
    {
        iCount++;
        First = First -> next;
    }
    
    return iCount;
}

void Display(PNODE First)
{
    while (First != NULL)
    {
        printf("| %d | -> ", First->data);
        First = First -> next;
    }
    printf("NULL\n");
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

    int iLength = 0, i = 0;

    iLength = Count(*First);

    if ((iPos < 1) || (iPos > iLength+1))
    {
        printf("Invalid Position\n");
    }
    if (iPos == 1)
    {
        InsertFirst(First, iNo);
    }
    else if (iPos == iLength+1)
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
        printf("Link List is empty\n");
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
        printf("Link List is empty\n");
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

void deleteAtPos(PPNODE First, int iPos)
{
    PNODE temp1 = NULL;
    PNODE temp2 = NULL;

    int iLength = 0, i = 0;

    iLength = Count(*First);

    if ((iPos < 1) || (iPos > iLength))
    {
        printf("Invalid Position\n");
    }
    if (iPos == 1)
    {
        DeleteFirst(First);
    }
    else if(iPos == iLength)
    {
        DeleteLast(First);
    }
    else
    {
        temp1 = *First;

        for (int i = 1; i < iPos - 1; i++)
        {
            temp1 = temp1 -> next;
        }
        temp2 = temp1->next;
        temp1->next = temp2->next;
        free(temp2);
    }
}

int Addition(PNODE First)
{
    int iSum = 0;

    while (First != NULL)
    {
        iSum = iSum + First->data;
        First = First -> next;
    }
    
    return iSum;
}

int main()
{

    PNODE Head = NULL;
    int iRet = 0, iSum = 0;

    InsertFirst(&Head, 51);
    InsertFirst(&Head, 21);
    InsertFirst(&Head, 11);

    Display(Head);
    iRet = Count(Head);

    printf("Number of nodes are: %d\n", iRet);

    InsertLast(&Head, 101);
    InsertLast(&Head, 111);
    InsertLast(&Head, 121);
    
    Display(Head);
    iRet = Count(Head);

    printf("Number of nodes are: %d\n", iRet);

    InsertAtPos(&Head, 39, 3);
    
    Display(Head);
    iRet = Count(Head);

    printf("Number of nodes are: %d\n", iRet);

    DeleteFirst(&Head);
    Display(Head);
    iRet = Count(Head);

    printf("Number of nodes are: %d\n", iRet);

    DeleteLast(&Head);
    Display(Head);
    iRet = Count(Head);

    printf("Number of nodes are: %d\n", iRet);

    deleteAtPos(&Head, 2);
    Display(Head);
    iRet = Count(Head);

    printf("Number of nodes are: %d\n", iRet);

    iSum = Addition(Head);
    printf("Sum of elements is: %d\n", iSum);

    return 0;
}