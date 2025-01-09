# include <stdio.h>
# include <stdlib.h>

void EvenDisplay(int ptr[], int iSize)
{
    int i = 0;
    for ( i = 0; i < iSize; i++)
    {
        if (ptr[i] % 2 == 0)
        {
            printf("%d\t", ptr[i]);
        } 
    }
}

int main()
{
    int iCount = 0, i = 0;
    int *Arr = NULL;

    printf("Enter the number of elements that you want to store: \n");
    scanf("%d", &iCount);

    Arr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the elements: \n");
    for ( i = 0; i < iCount; i++)
    {
        scanf("%d", &Arr[i]);
    }

    EvenDisplay(Arr, iCount);
    
    free(Arr);

    return 0;
    
}