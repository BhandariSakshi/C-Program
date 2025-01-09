#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void Insert(PPNODE Root, int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if (*Root == NULL)
    {
        *Root = newn;
    }
    else
    {
        temp = *Root;
        while (1)
        {

            if (temp->data == No)
            {
                printf("Unable to insert the element as it is already present");
                free(newn);
                break;
            }
            else if (No > temp->data)
            {
                if (temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }
                temp = temp->rchild;
            }
            else if (No < temp->data)
            {
                if (temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }
                temp = temp->lchild;
            }
        }
    }
}

void Inorder(PNODE Root)
{
    if(Root != NULL)
    {
        Inorder(Root->lchild);
        printf("%d\t", Root->data);
        Inorder(Root->rchild);
    }
    
}

void Preorder(PNODE Root)
{
    if (Root != NULL)
    {
        printf("%d\t", Root->data);
        Preorder(Root->lchild);
        Preorder(Root->rchild);
    }
    
}

void Postorder(PNODE Root)
{
    if (Root != NULL)
    {
        Postorder(Root->lchild);
        Postorder(Root->rchild);
        printf("%d\t", Root->data);
    }
    
}

int CountLeaf(PNODE Root)
{
   static int Leaf;

    if (Root != NULL)
    {
        if (Root->rchild == NULL && Root->lchild == NULL)
        {
            Leaf++;
        }
        CountLeaf(Root->lchild);
        CountLeaf(Root->rchild);
    }

    return Leaf;
    
}

int CountParent(PNODE Root)
{
   static int Parent;

    if (Root != NULL)
    {
        if (Root->rchild != NULL && Root->lchild != NULL)
        {
            Parent++;
        }
        CountParent(Root->lchild);
        CountParent(Root->rchild);
    }

    return Parent;
    
}

int CountAll(PNODE Root)
{
   static int Leaf;

    if (Root != NULL)
    {
        Leaf++;
        CountAll(Root->lchild);
        CountAll(Root->rchild);
    }
    return Leaf;
}

bool Search(PNODE Root, int Value)
{
    bool bFlag = false;

    if (Root == NULL)
    {
        printf("Tree is empty\n");
        
    }
    
    while (Root != NULL)
    {
        if (Root->data == Value)
        {
            bFlag = true;
            break;
        }
        else if (Value > Root->data)
        {
            Root = Root->rchild;
        }
        else if (Value < Root->data)
        {
            Root = Root->lchild;
        }
        
    }
   
    return bFlag;
    
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;
    bool bRet = false;

    Insert(&Head, 51);
    Insert(&Head, 11);
    Insert(&Head, 21);
    Insert(&Head, 101);
    Insert(&Head, 111);

    printf("Inorder Traversal: \n");
    Inorder(Head);

    printf("\nPreorder Traversal: \n");
    Preorder(Head);

    printf("\nPostorder Traversal: \n");
    Postorder(Head);

    iRet = CountLeaf(Head);
    printf("\nTotal Leaf nodes are: %d\n", iRet);

    iRet = CountParent(Head);
    printf("\nTotal Parent nodes are: %d\n", iRet);

    iRet = CountAll(Head);
    printf("\nTotal nodes are: %d\n", iRet);

    bRet = Search(Head,101);
    if (bRet == true)
    {
        printf("Element is present\n");
    }
    else
    {
        printf("Element is not present\n");
    }
    

    return 0;
}