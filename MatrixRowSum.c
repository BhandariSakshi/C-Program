# include <stdio.h>
# include <stdlib.h>

void RowSum(int **Ptr, int Row, int Col)
{
    int iSum = 0;

    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            iSum += Ptr[i][j];
        }
        printf("Sum of elements in row %d is %d",i,iSum);
        iSum = 0;
        printf("\n");
    }   
}

int main()
{
    int iRow = 0, iCol = 0;
    int **Arr = NULL;

    printf("Enter the number of rows: \n");
    scanf("%d", &iRow);

    printf("Enter the number of columns: \n");
    scanf("%d", &iCol);

    Arr = (int **)malloc(iRow* sizeof(int *));

    for(int i = 0; i < iRow; i++)
    {
        Arr[i] = (int*)malloc(iCol* sizeof(int));
    }

     printf("Enter the elements: \n");
    for (int i = 0; i < iRow; i++)
    {
        for (int j = 0; j < iCol; j++)
        {
            scanf("%d", &Arr[i][j]);
        }
       printf("\n"); 
    }
  
    RowSum(Arr,iRow, iCol);
    
    return 0;
}
