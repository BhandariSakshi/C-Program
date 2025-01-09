# include <stdio.h>
# include <stdlib.h>

int Minimum(int **Ptr, int Row, int Col)
{
    int iMin = Ptr[0][0];

    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            if (iMin > Ptr[i][j])
            {
                iMin = Ptr[i][j];
            }
            
        }
        
    }
    return iMin;
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
    
    iRet = Minimum(Arr, iRow, iCol);
    printf("Minimum element in the matrix is: %d\n", iRet);


    return 0;
}