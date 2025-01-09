# include <stdio.h>
# include <stdlib.h>

void DisplaySubarray(int Ptr[], int iSize)
{
    int Start = 0, End = 0, i = 0;

    printf("Subarrays are: \n");

    for ( Start = 0; Start < iSize; Start++)
    {
        for ( End = Start; End < iSize; End++)
        {
            for ( i = Start; i <= End; i++)
            {
                printf("%d", Ptr[i]);
            }
            printf("\t");
        }
        printf("\n");
    }
    
}

int main()
{
    int iCount = 0, i = 0;
    int *Arr = NULL;

    printf("Enter the number of elements you want to store: \n");
    scanf("%d", &iCount);

    Arr = (int* )malloc(iCount* sizeof(int));

    printf("Enter the elements: \n");
    for ( i = 0; i < iCount; i++)
    {
        scanf("%d", &Arr[i]);
    }
    
    DisplaySubarray(Arr, iCount);

    free(Arr);

    return 0;

}