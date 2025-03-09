#include<stdio.h>
#include<stdlib.h>

int Coverage(int **Ptr, int Row, int Col)
{
    int iAns = 0;

    for(int i = 0; i < Row; i++)
    {
        for(int j = 0; j < Col; j++)
        {
            if(Ptr[i][j] == 0)
            {
                if(i > 0 && Ptr[i-1][j] == 1)  
                {
                    iAns++;
                }
                if(i < Row-1 && Ptr[i+1][j] == 1) 
                {
                    iAns++;
                }
                if(j > 0 && Ptr[i][j-1] == 1) 
                {
                    iAns++;
                }
                if(j < Col-1 && Ptr[i][j+1] == 1) 
                {
                    iAns++;
                }
            }
        }
    }
    return iAns;
}

int main()
{
    int iRow = 0, iCol = 0, iRet = 0;
    int **Arr = NULL;

    printf("Enter the number of rows: \n");
    scanf("%d", &iRow);

    printf("Enter the number of columns: \n");
    scanf("%d", &iCol);

    Arr = (int**)malloc(iRow * sizeof(int*));
    if (Arr == NULL) {
        printf("Memory allocation failed!\n");
        return -1;
    }

    for (int i = 0; i < iRow; i++)
    {
        Arr[i] = (int*)malloc(iCol * sizeof(int));
        if (Arr[i] == NULL) {
            printf("Memory allocation failed!\n");
            return -1;
        }
    }

    printf("Enter the matrix elements: \n");
    for(int i = 0; i < iRow; i++)
    {
        for(int j = 0; j < iCol; j++)
        {
            scanf("%d", &Arr[i][j]);
        }
    }

    iRet = Coverage(Arr, iRow, iCol);
    printf("Coverage of matrix is: %d\n", iRet);

    for (int i = 0; i < iRow; i++)
    {
        free(Arr[i]);
    }
    free(Arr);

    return 0;
}
