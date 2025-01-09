# include <stdio.h>
# include <stdlib.h>

int Maximum(int ptr[], int iSize)
{
    int iMax = ptr[0];
    int i = 0;

    for ( i = 0; i < iSize; i++)
    {
        if (ptr[i] > iMax)
        {
            iMax = ptr[i];
        }
    }
    return iMax;
}

int main()
{
    int iCount = 0, i = 0, iRet = 0;
    int *Arr = NULL;

    printf("Enter the number of element you want to store: \n");
    scanf("%d", &iCount);

    Arr = (int* )malloc(iCount * sizeof(int));

    printf("Enter the elements: \n");
    for ( i = 0; i < iCount; i++)
    {
        scanf("%d", &Arr[i]);
    }

    iRet = Maximum(Arr, iCount);
    printf("Maximum element is: %d\n", iRet);

    free(Arr);

    return 0;
}