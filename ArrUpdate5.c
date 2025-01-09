# include <stdio.h>
# include <stdlib.h>

void Update(int ptr[], int iSize)
{
    int i = 0;
    for ( i = 0; i < iSize; i++)
    {
            ptr[i] = ptr[i]*2;
        
    }
    
}

int main()
{
    int iCount = 0, i = 0;
    int *Arr = NULL;

    printf("Enter the number of elements you want to store: \n");
    scanf("%d", &iCount);

    Arr = (int *)malloc(iCount * sizeof(int));

    printf("Enter th elements: ");
    for ( i = 0; i < iCount; i++)
    {
        scanf("%d", &Arr[i]);
    }

    Update(Arr, iCount);

    printf("Array after updation: \n");
    for ( i = 0; i < iCount; i++)
    {
        printf("%d\n",Arr[i]);
    }
    
    free(Arr);

    return 0;
}