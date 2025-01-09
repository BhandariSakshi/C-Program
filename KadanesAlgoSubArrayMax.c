# include <stdio.h>
# include <stdlib.h>

int MaxSubarray(int *Ptr, int iSize)
{
    int iMax = Ptr[0];
    int CurrSum = 0;

    for (int Start = 0; Start < iSize; Start++)
    {
            CurrSum += Ptr[Start];

            if (iMax < CurrSum)
            {
                iMax = CurrSum;
            }
            
            if (CurrSum < 0)
            {
                CurrSum = 0;
            }
            
    }
    return iMax;
}

int main()
{
    int iCount = 0, i = 0, iRet = 0;
    int *Arr = NULL;

    printf("Enter the number of elements you want to store: \n");
    scanf("%d", &iCount);

    Arr = (int *)malloc(iCount * sizeof(int));

    printf("Enter elements: \n");
    for ( i = 0; i < iCount; i++)
    {
        scanf("%d", &Arr[i]);
    }

    iRet = MaxSubarray(Arr, iCount);
    printf("Maximum sum of subarray is: %d\n", iRet);

    free(Arr);

    return 0;
}