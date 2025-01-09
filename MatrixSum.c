# include <stdio.h>
# include <stdlib.h>

int Summation(int **Mat, int Row, int Col)
{
    int iSum = 0;

    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            iSum += Mat[i][j];
        }
        
    }
    return iSum;
}

int main()
{
    int iRow = 0, iCol = 0, iRet = 0;
    int **Arr = NULL;

    printf("Enter the number of rows: \n");
    scanf("%d",&iRow);

    printf("Enter the number of columns: \n");
    scanf("%d",&iCol);

    Arr = (int **)malloc(iRow* sizeof(int* ));

    for (int i = 0; i < iRow; i++)
    {
       Arr[i] = (int *)malloc(iCol* sizeof(int));
    }
    
    printf("Enter the elements into matrix: \n");

    for (int i = 0; i < iRow; i++)
    {
        for (int j = 0; j < iCol; j++)
        {
            scanf("%d",&Arr[i][j]);
        }
        printf("\n");
    }
    
    iRet = Summation(Arr, iRow, iCol);
    printf("Sum of matrix elements: %d", iRet);

    return 0;

}