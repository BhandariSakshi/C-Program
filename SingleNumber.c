# include <stdio.h>
# include <stdlib.h>

int SingleNumber(int Ptr[], int iSize)
{
    int iAns = 0, i = 0;

    for ( i = 0; i < iSize; i++)
    {
        iAns = iAns ^ Ptr[i];
    }
    return iAns;
}

int main()
{
    int *Arr = NULL;
    int iCount = 0, i = 0, iRet = 0;

    printf("Enter the number of elements you want to store: \n");
    scanf("%d", &iCount);

    Arr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the elements: \n");

    for ( i = 0; i < iCount; i++)
    {
        scanf("%d", &Arr[i]);
    }
    
    iRet = SingleNumber(Arr, iCount);
    printf("Single or unique number in array is: %d", iRet);

    return 0;

}