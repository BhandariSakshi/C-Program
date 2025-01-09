# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int MaxProfit(int Ptr[], int iSize)
{
    int maxProfit = 0, bestBuy = Ptr[0];

        for(int i = 1; i< iSize; i++)
        {
            if(Ptr[i] > bestBuy)
            {
                if(maxProfit < Ptr[i]-bestBuy)
                {
                    maxProfit = Ptr[i]-bestBuy;
                }
            }
            if (bestBuy > Ptr[i])
            {
                bestBuy = Ptr[i];
            }
            
            
        }
        return maxProfit;
}

int main()
{
    int iCount = 0, i = 0, iRet = 0;
    int *Arr = NULL;

    printf("Enter the number of elements you want to store: \n");
    scanf("%d", &iCount);

    Arr = (int* )malloc(iCount * sizeof(int));

    printf("Enter the elements: \n");
    for ( i = 0; i < iCount; i++)
    {
        scanf("%d", &Arr[i]);
    }

    iRet = MaxProfit(Arr, iCount);
    printf("Maximum profit gained is: %d", iRet);

    return 0;
    
}