# include <stdio.h>
# include <stdlib.h>

int Count(int ptr[], int iSize,int iNo)
{
    int i = 0, iFrequency = 0;

    for ( i = 0; i < iSize; i++)
    {
        if (ptr[i] == iNo)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}

int main()
{
    int iCount = 0, i = 0, iRet = 0, iValue = 0;
    int *Arr = NULL;

    printf("Enter the number of elements that you want to store: \n");
    scanf("%d", &iCount);

    Arr = (int* )malloc(iCount* sizeof(int));

    printf("Enter the elements: \n");
    for ( i = 0; i < iCount; i++)
    {
        scanf("%d", &Arr[i]);
    }

    printf("Enter the number of which you want to find frequency: \n");
    scanf("%d", &iValue);

    iRet = Count(Arr, iCount, iValue);
    printf("Number of %d are: %d\n",iValue, iRet);

    free(Arr);
    
    return 0;
}