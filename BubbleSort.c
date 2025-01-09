#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void BubbleSort(int Arr[], int iSize)
{
    int temp, i = 0, j = 0;

    for (i = 0; i < iSize - 1; i++)
    {
        for (j = 0; j < iSize - 1 - i; j++)
        {
            if (Arr[j] > Arr[j + 1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j + 1] = temp;
            }
        }
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

    BubbleSort(Brr, iLength);

    printf("Array after sorting: \n");
    for (i = 0; i < iLength; i++)
    {
        printf("%d\t", Brr[i]);
    }

    free(Brr);

    return 0;
}