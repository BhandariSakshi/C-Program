# include <stdio.h>
# include <stdlib.h>

void Reverse(int ptr[], int iSize)
{
    int iStart = 0, iEnd = 0, i = 0, temp = 0;

    iEnd = iSize-1;

    while (iStart < iEnd)
    {
        temp = ptr[iStart];
        ptr[iStart] = ptr[iEnd];
        ptr[iEnd] = temp;

        iStart++;
        iEnd--;
    }
    
}

int main()
{
    int iCount = 0, i = 0;
    int *Arr = NULL;

    printf("Enter the nuber of elements you want to store: \n");
    scanf("%d", &iCount);

    Arr = (int *)malloc(iCount* sizeof(int));

    printf("Enter the elements: \n");
    for ( i = 0; i < iCount; i++)
    {
        scanf("%d", &Arr[i]);
    }

    printf("Array before reverse: \n");
   for ( i = 0; i < iCount; i++)
   {
        printf("%d\t",Arr[i]);
   }
    
   Reverse(Arr, iCount);

   printf("\nArray after reverse: \n");
   for ( i = 0; i < iCount; i++)
   {
        printf("%d\t",Arr[i]);
   }
   

    free(Arr);

    return 0;
}