# include <stdio.h>
# include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int FindMajorityElement(int Ptr[], int iSize)
{
   int Max = Ptr[0], Freq = 1;

   for (int i = 0; i < iSize; i++)
   {
        if (Ptr[i] == Ptr[i-1])
        {
            Freq++;
        }
        else
        {
            Freq = 1;
            Max = Ptr[i];
        }

        if (Freq > iSize/2)
        {
            return Max;
        }
        
        
   }
   
   
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

    qsort(Arr, iCount, sizeof(int), compare);

    iRet = FindMajorityElement(Arr, iCount);
    printf("Majority element in the array is: %d\n", iRet);

    free(Arr);

    return 0;
    
}