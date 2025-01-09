# include <stdio.h>
# include <stdlib.h>

int FindMajorityElement(int Ptr[], int iSize)
{
   int iFreq = 0, Max = 0;

   for (int i = 0; i < iSize; i++)
   {
        if (iFreq == 0)
        {
            Max = Ptr[i];
        }
        if (Max == Ptr[i])
        {
            iFreq++;
        }
        else
        {
            iFreq--;
        }
        
   }
   return Max;
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

    iRet = FindMajorityElement(Arr, iCount);
    printf("Majority element in the array is: %d\n", iRet);

    free(Arr);

    return 0;
    
}