#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void SelectionSort(int Arr[], int iSize)
{
    int temp, i = 0, j = 0, min_index = 0;

    for (i = 0; i < iSize - 1; i++)
    {
        min_index = i;

        for (j = i+1; j < iSize; j++)
        {
            if (Arr[j] < Arr[min_index])
            {
               min_index = j;
            }
               
        }
        temp = Arr[i];
        Arr[i] = Arr[min_index];
        Arr[min_index] = temp;
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

    SelectionSort(Brr, iLength);

    printf("Array after sorting: \n");
    for (i = 0; i < iLength; i++)
    {
        printf("%d\t", Brr[i]);
    }

    free(Brr);

    return 0;
}