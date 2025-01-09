#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void InsertionSort(int Arr[], int iSize)
{
    int Selected, i = 0, j = 0;

    for (i = 0; i < iSize; i++)
    {
       
        for (j = i-1, Selected = Arr[i]; (j >= 0) && (Arr[j] > Selected); j--)
        {
           Arr[j+1] = Arr[j];
        }
        Arr[j+1] = Selected;
    }
}

int main()
{
    int iLength = 0, i = 0;
    int *Brr = NULL;

    printf("Enter the number of element that you want to store: \n");
    scanf("%d", &iLength);

    Brr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements: \n");

    for (i = 0; i < iLength; i++)
    {
        scanf("%d", &Brr[i]);
    }

    InsertionSort(Brr, iLength);

    printf("Array after sorting: \n");
    for (i = 0; i < iLength; i++)
    {
        printf("%d\t", Brr[i]);
    }

    free(Brr);

    return 0;
}