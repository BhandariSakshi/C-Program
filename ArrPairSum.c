# include<stdio.h>
# include<stdlib.h>

int* PairSum(int Ptr[], int iSize, int iTarget)
{
    int *Result = (int*)malloc(2* sizeof(int));

    for (int i = 0; i < iSize; i++)
    {
        for (int j = i+1; j < iSize; j++)
        {
            if (Ptr[i] + Ptr[j] == iTarget)
            {
                Result[0] = i;
                Result[1] = j;
                return Result;
            }
            
        } 
    }
}

int main()
{
    int iCount = 0, i = 0, iValue;
    int *Arr = NULL;
    int *Brr = NULL;

    printf("Enter the number of elements you want to store: \n");
    scanf("%d", &iCount);

    Arr = (int *)malloc(iCount* sizeof(int));

    printf("Enter the elments: \n");
    for ( i = 0; i < iCount; i++)
    {
        scanf("%d", &Arr[i]);
    }

    printf("Enter the targeted number: \n");
    scanf("%d", &iValue);

    Brr = PairSum(Arr, iCount, iValue);

    if (Brr != NULL)
    {
        printf("Pair found at indices: %d and %d\n", Brr[0], Brr[1]);
    }
    else
    {
        printf("No pair found");
    }

    free(Arr);
    free(Brr);

    return 0;
    
}