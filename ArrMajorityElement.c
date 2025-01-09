# include <stdio.h>
# include <stdlib.h>

int FindMajorityElement(int Ptr[], int iSize)
{
   int i, j;
    int maxCount = 0;  
    int majorityElement = -1;  

    for (i = 0; i < iSize; i++) {
        int count = 0;

        for (j = 0; j < iSize; j++) {
            if (Ptr[j] == Ptr[i]) {
                count++;
            }
        }
        if (count > iSize / 2) {
            majorityElement = Ptr[i];
            break;  
        }
    }

    return majorityElement;  
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