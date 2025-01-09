# include <stdio.h>
# include <stdlib.h>

void MergeSort(int Arr[],int low, int high)
{
    int iMid = 0;

    if (low < high)
    {
        iMid = (low+high)/2;

        MergeSort(Arr,low,iMid);
        MergeSort(Arr,iMid+1,high);

        Merge(Arr, low, iMid, high);
    }
}



int main()
{
    int iLength = 0, i = 0;
    int *Brr = NULL;

    printf("Enter the number of element you want to search: \n");
    scanf("%d",&iLength);

    Brr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements: \n");
    for ( i = 0; i < iLength; i++)
    {
        scanf("%d",&Brr[i]);
    }

    MergeSort(Brr,0,iLength);

    printf("Array after sorting: \n");
    for ( i = 0; i < iLength; i++)
    {
        printf("%d\t",Brr[i]);
    }

    free(Brr);
    
    return 0;
}