# include <stdio.h>
# include <stdlib.h>

int main()
{
    int iRow = 0, iCol = 0;
    int **Arr = NULL;

    printf("Enter the number of rows: \n");
    scanf("%d", &iRow);

    printf("Enter the number of columns: \n");
    scanf("%d", &iCol);

    Arr = (int **)malloc(iRow * sizeof(int*));

    for (int i = 0; i < iRow; i++)
    {
         Arr[i] = (int *)malloc(iCol * sizeof(int));
    }
    

    printf("Enter the matrix elements: \n");
    for (int i = 0; i < iRow; i++)
    {
        for (int j = 0; j < iCol; j++)
        {
            scanf("%d", &Arr[i][j]);
        }
        printf("\n");
    }
    printf("Elements are: \n");
    for (int i = 0; i < iRow; i++)
    {
        for (int j = 0; j < iCol; j++)
        {
            printf("%d\t", Arr[i][j]);
        }
        printf("\n");
    }


    return 0;
}