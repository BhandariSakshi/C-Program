# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

bool Search(int ptr[], int iSize,int iNo)
{
    int i = 0;

    for ( i = 0; i < iSize; i++)
    {
        if (ptr[i] == iNo)
        {
            break;
        }
    }
    if (i == iSize)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int iCount = 0, i = 0, iValue = 0;
    bool bRet = false;
    int *Arr = NULL;

    printf("Enter the number of elements that you want to store: \n");
    scanf("%d", &iCount);

    Arr = (int* )malloc(iCount* sizeof(int));

    printf("Enter the elements: \n");
    for ( i = 0; i < iCount; i++)
    {
        scanf("%d", &Arr[i]);
    }

    printf("Enter the number of which you want to find: \n");
    scanf("%d", &iValue);

    bRet = Search(Arr, iCount, iValue);
    if (bRet == true)
    {
       printf("%d is present",iValue);
    }
    else
    {
       printf("%d is not present",iValue); 
    }

    free(Arr);
    
    return 0;
}