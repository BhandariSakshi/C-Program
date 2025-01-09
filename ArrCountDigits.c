# include <stdio.h>
# include <stdlib.h>

void DisplayDigit(int Ptr[], int iSize)
{
    int i = 0, iRet = 0;

    for ( i = 0; i < iSize; i++)
    {
        iRet = CalculateDigit(Ptr[i]);
        printf("%d contains %d digits\n",Ptr[i],iRet);
    }
}

int CalculateDigit(int iNo)
{
    int iCount = 0;

    while (iNo != 0)
    {
        iCount++;
        iNo = iNo / 10;
    }
    return iCount;
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
    
    DisplayDigit(Arr,iCount);

    free(Arr);

    return 0;
}