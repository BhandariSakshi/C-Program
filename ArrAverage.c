# include <stdio.h>
# include <stdlib.h>

float Average(int Ptr[], int iSize)
{
    float Average = 0.0f, fSum = 0.0f;

    for (int i = 0; i < iSize; i++)
    {
        fSum = fSum + Ptr[i];
    }
    
    Average = fSum / iSize;

    return Average;
}

int main()
{
    int *Arr = NULL;
    int iCount = 0, i = 0;
    float iRet = 0.0f;

    printf("Enter the number of elements you want to store: \n");
    scanf("%d", &iCount);

    Arr = (int* )malloc(iCount* sizeof(int));

    printf("Enter the elements: \n");
    for ( i = 0; i < iCount; i++)
    {
        scanf("%d", &Arr[i]);
    }
    
    iRet = Average(Arr, iCount);
    printf("Average is: %f",iRet);

    free(Arr);

    return 0;

}