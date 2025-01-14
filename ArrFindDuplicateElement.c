# include <stdio.h>
# include <stdlib.h>

void Sort(int Ptr[], int iSize)
{
    for (int i = 0; i < iSize; i++)
    {
        for (int j = 0; j < iSize-1; j++)
        {
            if (Ptr[j] > Ptr[j+1])
            {
                int temp = Ptr[j];
                Ptr[j] = Ptr[j+1];
                Ptr[j+1] = temp;
            }
            
        }
        
    }
    
}


int FindDuplicate(int *Ptr, int iSize)
{
    for (int i = 0; i < iSize; i++)
    {
        if (Ptr[i] == Ptr[i+1])
        {
            return Ptr[i];
        }
        
    }
    return -1;
}

int main()
{
    int iLength = 0, iRet = 0;
    int *Arr = NULL;

    printf("Enter the number of elements you want to store: \n");
    scanf("%d", &iLength);

    Arr = (int*)malloc(iLength* sizeof(int));

    printf("Enter the elements: \n");
    for (int i = 0; i < iLength; i++)
    {
        scanf("%d", &Arr[i]);
    }

    Sort(Arr,iLength);

    iRet = FindDuplicate(Arr, iLength);
    printf("Duplicate element in the array is: %d\n", iRet);

    if (iRet == -1)
    {
        printf("There is no duplicate element\n");
    }
    free(Arr);

    return 0;
    

}