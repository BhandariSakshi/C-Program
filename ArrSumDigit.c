# include <stdio.h>
# include <stdlib.h>

void DisplaySumDigit(int Ptr[], int iSize)
{
    int i = 0, iRet = 0;

    for ( i = 0; i < iSize; i++)
    {
        iRet = SumDigit(Ptr[i]);
        printf("Sum of %d is %d\n",Ptr[i],iRet);
    }
}

int SumDigit(int iNo)
{
    int iSum = 0;

    while (iNo != 0)
    {
        iSum = iSum + (iNo % 10);
        iNo = iNo / 10;
    }
    return iSum;
}

int main()
{
    int iCount = 0, i = 0;
    int *Arr = NULL;

    printf("Enter the number of elements you want to store: \n");
    scanf("%d", &iCount);

    Arr = (int*)malloc(iCount* sizeof(int));

    printf("Enter elements: \n");
    for ( i = 0; i < iCount; i++)
    {
        scanf("%d", &Arr[i]);
    }
    
    DisplaySumDigit(Arr,iCount);

    free(Arr);

    return 0;
}