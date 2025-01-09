# include <stdio.h>
# include <stdlib.h>

int Sum(int ptr[], int iSize)
{
    int iSum = 0, i = 0;

    for ( i = 0; i < iSize; i++)
    {
        if (ptr[i] % 2 != 0)
        {
           iSum += ptr[i];
        }
         
    }
    
    return iSum;
}

int main()
{
    int iCount = 0, i = 0, iRet = 0;
    int *Arr = NULL;

    printf("Enter the number of elements you want to store: \n");
    scanf("%d", &iCount);

    Arr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the elements: \n");
    for ( i = 0; i < iCount; i++)
    {
        scanf("%d", &Arr[i]);
    }
    
    iRet = Sum(Arr, iCount);
    printf("Sum of odd numbers: %d\n", iRet);

    free(Arr);

    return 0;
    
}