# include <stdio.h>
# include <stdlib.h>

void Reverse(int ptr[], int iSize)
{
    int i = 0;

    printf("Reversed Array is: \n");
    
    for ( i = iSize-1; i >= 0; i--)
    {
        printf("%d\t",ptr[i]);
    }
    
}

int main()
{
    int iCount = 0, i = 0;
    int *Arr = NULL;

    printf("Enter the number of element you want to store: \n");
    scanf("%d", & iCount);

    Arr = (int*)malloc(iCount * sizeof(int));

    printf("Enter the elements: \n");
    for ( i = 0; i < iCount; i++)
    {
        scanf("%d", &Arr[i]);
    }

    Reverse(Arr, iCount);

    free(Arr);
    
    return 0;
}