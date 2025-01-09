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

/// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: Display
// Discription  : Used to display the Linked List
// Input        : PNODE
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 31/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(PNODE First, PNODE Last)
{
    if ((First == NULL) && (Last == NULL))
    {
        printf("LinkList is empty\n");
    }
    
    do
    {
        printf("| %d |->",First->data);
        First = First->next;
        
    } while (First != Last->next);
    
    printf("\n");
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: Count
// Discription  : Used to count the number of nodes in Linked List
// Input        : null
// Output       : Integer
// Author       : Sakshi Bhandari
// Date         : 31/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int Count(PNODE First, PNODE Last)
{
    int iCount = 0;

    if ((First == NULL) && (Last == NULL))
    {
        return 0;
    }
    do
    {
        iCount++;
        First = First->next;
        
    } while (First != Last->next);

    return iCount;    
}
/// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: InsertFirst
// Discription  : Used to insert the node at first position in the Linked List
// Input        : PPNODE, Integer
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 31/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void InsertFirst(PPNODE First, PPNODE Last, int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if ((*First == NULL) && (*Last == NULL))
    {
        *First = newn;
        *Last = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
    (*Last)->next = *First;
    
}
/// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: InsertLast
// Discription  : Used to insert node at last position of Linked List
// Input        : Integer
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 31/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void InsertLast(PPNODE First, PPNODE Last, int No)
{

     PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if ((*First == NULL) && (*Last == NULL))
    {
        *First = newn;
        *Last = newn;
    }
    else
    {
      
       do
       {
           *First = (*First)->next;

       } while (*First != (*Last)->next);
       
       (*Last)->next = newn;
       *Last = newn;
    }
    (*Last)->next = *First;
}
// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: InsertAtPos
// Discription  : Used to node at given position in Linked List
// Input        : PPNODE, Integer
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 31/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void InsertAtPos(PPNODE First, PPNODE Last, int No, int iPos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    int iLength = 0;
     iLength = Count(*First, *Last);

    if ((iPos < 1) || (iPos > iLength+1))
    {
        printf("Invalid Position\n");
        return;
    }
    if (iPos == 1)
    {
        InsertFirst(First,Last,No);
    }
    else if (iPos == iLength+1)
    {
        InsertLast(First, Last, No);
    }
    else
    {
        temp = *First;

        
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = No;
        newn->next = NULL;

       for (int i = 1; i < iPos-1; i++)
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
// Input        : null
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 31/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void DeleteFirst(PPNODE First, PPNODE Last)
{
    if ((*First == NULL) && (*Last == NULL))
    {
        printf("LinkList is empty\n");
        return;
    }
    if (*First == *Last)
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else
    {
        *First = (*First)->next;
        free((*Last)->next);
        (*Last)->next = *First;
    }
  
}
/// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: DeleteLast
// Discription  : Used to delete node at last position of Linked List
// Input        : PPNODE
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 31/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void DeleteLast(PPNODE First, PPNODE Last)
{
    PNODE temp = NULL;

    if ((*First == NULL) && (*Last == NULL))
    {
        printf("LinkList is empty\n");
        return;
    }
    if (*First == *Last)
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else
    {
        temp = *First;

        while (temp->next != *Last)
        {
            temp = temp->next;
        }
        
        free(*Last);
        *Last = temp;

        (*Last)->next = *First;
    }
}
// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: DeleteAtPos
// Discription  : Used to delete node at given position of Linked List
// Input        : Integer
// Output       : Void
// Author       : Sakshi Bhandari
// Date         : 31/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void DeleteAtPos(PPNODE First, PPNODE Last, int iPos)
{
    PNODE temp1 = NULL;
    int iLength = 0;

     iLength = Count(*First, *Last);

    if ((iPos < 1) || (iPos > iLength))
    {
        printf("Invalid Position\n");
        return;
    }
    if (iPos == 1)
    {
        DeleteFirst(First,Last);
    }
    else if (iPos == iLength)
    {
        DeleteLast(First, Last);
    }
    else
    {
        temp1 = *First;

       for (int i = 1; i < iPos-1; i++)
       {
            temp1 = temp1->next;
       }
        temp1->next = temp1->next->next;
      
    }
}

int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;
    int iRet = 0;

    InsertFirst(&Head, &Tail, 51);
    InsertFirst(&Head, &Tail, 21);
    InsertFirst(&Head, &Tail, 11);

    Display(Head, Tail);

    iRet = Count(Head, Tail);
    printf("Number of elements: %d\n", iRet);

     InsertLast(&Head, &Tail, 101);
    InsertLast(&Head, &Tail, 121);
    InsertLast(&Head, &Tail, 151);

    Display(Head, Tail);

    iRet = Count(Head, Tail);
    printf("Number of elements: %d\n", iRet);

     InsertAtPos(&Head, &Tail, 30, 3);

    Display(Head, Tail);

    iRet = Count(Head, Tail);
    printf("Number of elements: %d\n", iRet);

    DeleteFirst(&Head, &Tail);

    Display(Head, Tail);

    iRet = Count(Head, Tail);
    printf("Number of elements: %d\n", iRet);

     DeleteLast(&Head, &Tail);

    Display(Head, Tail);

    iRet = Count(Head, Tail);
    printf("Number of elements: %d\n", iRet);

     DeleteAtPos(&Head, &Tail,3);

    Display(Head, Tail);

    iRet = Count(Head, Tail);
    printf("Number of elements: %d\n", iRet);

    return 0;
}