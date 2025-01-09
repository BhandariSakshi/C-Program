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

int iCount = 0; //Global variable
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: Count
// Discription  : Used to count the number of elements in Stack
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
// Discription  : Used to display the Stack
// Input        : PNODE
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 1/08/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Display(PNODE First)
{
    while (First != NULL)
    {
        printf("%d\n",First->data);
        First = First->next;
    }
    
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: Push
// Discription  : Used to insert the element in stack
// Input        : PPNODE, Integer
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 1/08/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Push(PPNODE First, int No)
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
    iCount++;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: Pop
// Discription  : Used to delete node from the Stack
// Input        : null
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 1/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int Pop(PPNODE First)
{
    PNODE temp = NULL;
    int Value = 0;

    if (*First == NULL)
    {
        printf("Stack is empty");
    }
    else
    {
        temp = *First;
        Value = (*First)->data;
        *First = (*First)->next;
        free(temp);

        iCount--;
    }
    return Value;
    
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    Push(&Head,11);
    Push(&Head,21);
    Push(&Head,51);

    Display(Head);
    iRet = Count();
    printf("Number of elements are: %d\n", iRet);

    iRet = Pop(&Head);
    printf("Poped element is: %d\n", iRet);

     Display(Head);
    iRet = Count();
    printf("Number of elements are: %d\n", iRet);


    return 0;
}