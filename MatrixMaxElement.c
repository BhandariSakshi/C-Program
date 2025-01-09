# include <stdio.h>
# include <stdlib.h>

int Maximum(int **Ptr, int Row, int Col)
{
    int iMax = Ptr[0][0];

    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            if (iMax < Ptr[i][j])
            {
                iMax = Ptr[i][j];
            }
            
        }
        
    }
    return iMax;
}


int main()
{
    int iRow = 0, iCol = 0, iRet = 0;
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
    
    iRet = Maximum(Arr, iRow, iCol);
    printf("Maximum element in the matrix is: %d\n", iRet);


    return 0;
}