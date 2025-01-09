# include <stdio.h>
# include <stdlib.h>

int MaxSubarray(int *Ptr, int iSize)
{
    int iMax = Ptr[0];

    for (int Start = 0; Start < iSize; Start++)
    {
        int CurrSum = 0;

        for (int End = Start; End < iSize; End++)
        {
            CurrSum += Ptr[End];

            if (iMax < CurrSum)
            {
                iMax = CurrSum;
            }
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