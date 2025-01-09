#include <stdio.h>
#include <stdlib.h>

// A helper function to return indices as an array
int* TwoSum(int Ptr[], int iSize, int Target)
{
    int i = 0, j = 0;
    static int result[2];  

    for (i = 0; i < iSize - 1; i++)
    {
        for (j = i + 1; j < iSize; j++)
        {
            if (Ptr[i] + Ptr[j] == Target)
            {
                result[0] = i;  
                result[1] = j;  
                return result;   
            }
        }
    }
    
    return NULL; 
}

int main()
{
    int iCount = 0, i = 0, iValue = 0;
    int *Arr = NULL;
    int *iRet = NULL; 

    printf("Enter the number of elements you want to store: \n");
    scanf("%d", &iCount);

    Arr = (int *)malloc(iCount * sizeof(int)); 

    printf("Enter the target sum: \n");
    scanf("%d", &iValue);

    printf("Enter the elements: \n");
    for (i = 0; i < iCount; i++)
    {
        scanf("%d", &Arr[i]);
    }

    iRet = TwoSum(Arr, iCount, iValue);

    if (iRet != NULL)
    {
        printf("Indices: %d and %d\n", iRet[0], iRet[1]);
    }
    else
    {
        printf("No two elements found with the given sum.\n");
    }

    free(Arr);  

    return 0;
}
