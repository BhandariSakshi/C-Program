# include<stdio.h>
# include<stdlib.h>

int* PairSum(int Ptr[], int iSize, int iTarget)
{
    int *Result = (int*)malloc(2* sizeof(int));

    int Start = 0, End = iSize-1;

    while (Start < End)
    {
        int PairSum = Ptr[Start] + Ptr[End];
        if (PairSum > iTarget)
        {
            End--;
        }
        else if (PairSum < iTarget)
        {
            Start++;
        }
        else
        {
            Result[0] = Start;
            Result[1] = End;

            return Result;
        }
        
    }

    return NULL;
    
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