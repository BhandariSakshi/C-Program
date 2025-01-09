# include <stdio.h>
# include <stdlib.h>

int Divisible(int ptr[], int iSize)
{
    int i = 0, iCount = 0;

    for ( i = 0; i < iSize; i++)
    {
        if ((ptr[i] % 5 == 0) && (ptr[i] % 3 == 0))
        {
            iCount++;
        }
        
    }
    
    return iCount;
}

int main()
{
    int iCount = 0, i = 0, iRet = 0;
    int *Arr = NULL;

    printf("Enter the number of elements that you want to store: \n");
    scanf("%d", &iCount);

    Arr = (int *)malloc(iCount * sizeof(int));

    printf("Enter th elements: \n");
    for ( i = 0; i < iCount; i++)
    {
        scanf("%d",&Arr[i]);
    }
    
    iRet = Divisible(Arr, iCount);
    printf("Number of elements divisible by 5 and 3: %d\n", iRet);

    free(Arr);

    return 0;
}