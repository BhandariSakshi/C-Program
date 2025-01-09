#include <stdio.h>
#include <math.h>

void Display(char ch, char ch1, int iRow, int iCol)
{

    float iMid = 0.0f;
    /*char ch = Arr[0], ch1 = '\0';
    int i = 0;
    while (*Arr != '\0')
    {
        i++;
        if (*Arr == ' ')
        {
            break;
        }
        Arr++;
    }
    ch1 = Arr[i];*/

    if (ch == 'A' || ch1 == 'A')
    {
        iMid = (iRow + 1) / 2;
        for (int i = 1; i <= iRow; i++)
        {
            for (int j = 1; j <= iCol; j++)
            {
                if ((j == 1 && i > 1) || (i == 1 && j > 1 && j < iCol) || i == iMid || (j == iCol && i > 1))
                {
                    printf("*\t");
                }
                else
                {
                    printf("\t");
                }
            }
            printf("\n");
        }
    }
    printf("\n");

    if (ch == 'B' || ch1 == 'B')
    {
        iMid = (iRow + 1) / 2;
        for (int i = 1; i <= iRow; i++)
        {
            for (int j = 1; j <= iCol; j++)
            {

                if ((i == 1 && j < iCol) || (i == iMid && j < iCol) || (i == iRow && j < iCol) || j == 1 || (j == iCol && i > 1 && i < iRow && i != iMid))
                {
                    printf("*\t");
                }
                else
                {
                    printf("\t");
                }
            }
            printf("\n");
        }

        printf("\n");
    }
    printf("\n");

    if (ch == 'C' || ch1 == 'C')
    {
        iMid = (iRow + 1) / 2;
        for (int i = 1; i <= iRow; i++)
        {
            for (int j = 1; j <= iCol; j++)
            {
                if ((i == 1 && j > 1) || (j == 1 && i > 1 && i < iRow) || (i == iRow && j > 1))
                {
                    printf("*\t");
                }
                else
                {
                    printf("\t");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n");

    if (ch == 'D' || ch1 == 'D')
    {
        iMid = (iRow + 1) / 2;
        for (int i = 1; i <= iRow; i++)
        {
            for (int j = 1; j <= iCol; j++)
            {
                if (j == 1 || (i == 1 && j < iCol) || (i == iRow && j < iCol) || (j == iCol && i > 1 && i < iRow))
                {
                    printf("*\t");
                }
                else
                {
                    printf("\t");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n");

    if (ch == 'E' || ch1 == 'E')
    {

        iMid = (iRow + 1) / 2;
        for (int i = 1; i <= iRow; i++)
        {
            for (int j = 1; j <= iCol; j++)
            {
                if ((i == 1) || j == 1 || i == iRow || i == iMid)
                {
                    printf("*\t");
                }
                else
                {
                    printf("\t");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n");

    if (ch == 'F' || ch1 == 'F')
    {
        iMid = (iRow + 1) / 2;
        for (int i = 1; i <= iRow; i++)
        {
            for (int j = 1; j <= iCol; j++)
            {
                if ((i == 1) || j == 1 || i == iMid)
                {
                    printf("*\t");
                }
                else
                {
                    printf("\t");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n");

    if (ch == 'G' || ch1 == 'G')
    {
        iMid = (iRow + 1) / 2;
        for (int i = 1; i <= iRow; i++)
        {
            for (int j = 1; j <= iCol; j++)
            {
                if ((i == 1 && j > 1) || (j == 1 && i > 1 && i < iRow) || i == iRow && j > 1 || (j == iCol && i >= iMid) || (i == iMid && j >= iMid))
                {
                    printf("*\t");
                }
                else
                {
                    printf("\t");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n");

    if (ch == 'H' || ch1 == 'H')
    {
        iMid = (iRow + 1) / 2;
        for (int i = 1; i <= iRow; i++)
        {
            for (int j = 1; j <= iCol; j++)
            {
                if ((j == 1) || i == iMid || j == iCol)
                {
                    printf("*\t");
                }
                else
                {
                    printf("\t");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n");

    if (ch == 'I' || ch1 == 'I')
    {
        iMid = (iRow + 1) / 2;
        for (int i = 1; i <= iRow; i++)
        {
            for (int j = 1; j <= iCol; j++)
            {
                if ((i == 1) || j == iMid || i == iRow)
                {
                    printf("*\t");
                }
                else
                {
                    printf("\t");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n");

    if (ch == 'J' || ch1 == 'J')
    {
        iMid = (iRow + 1) / 2;
        for (int i = 1; i <= iRow; i++)
        {
            for (int j = 1; j <= iCol; j++)
            {
                if ((i == 1) || (j == iMid && i < iRow) || i == iRow && j < iMid || j == 1 && i >= iMid)
                {
                    printf("*\t");
                }
                else
                {
                    printf("\t");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n");

    if (ch == 'K' || ch1 == 'K')
    {
        iMid = (iRow + 1) / 2;
        for (int i = 1; i <= iRow; i++)
        {
            for (int j = 1; j <= iCol; j++)
            {
                if ((j == 1) || (i == j && i >= iMid) || (j == (iCol - i + 1) && i <= iMid) || j <= iMid && i == iMid)
                {
                    printf("*\t");
                }
                else
                {
                    printf("\t");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n");

    if (ch == 'L' || ch1 == 'L')
    {
        for (int i = 1; i <= iRow; i++)
        {
            for (int j = 1; j <= iCol; j++)
            {
                if (j == 1 || i == iRow)
                {
                    printf("*\t");
                }
                else
                {
                    printf("\t");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n");

    if (ch == 'M' || ch1 == 'M')
    {
        iMid = (iRow + 1) / 2;
        for (int i = 1; i <= iRow; i++)
        {
            for (int j = 1; j <= iCol; j++)
            {
                if ((j == 1) || (j == iCol) || (i == j && i <= iMid) || (j == (iCol - i + 1) && i <= iMid))
                {
                    printf("*\t");
                }
                else
                {
                    printf("\t");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n");

    if (ch == 'N' || ch1 == 'N')
    {
        for (int i = 1; i <= iRow; i++)
        {
            for (int j = 1; j <= iCol; j++)
            {
                if ((j == 1) || (j == iCol) || (j == i))
                {
                    printf("*\t");
                }
                else
                {
                    printf("\t");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n");

    if (ch == 'O' || ch1 == 'O')
    {
        for (int i = 1; i <= iRow; i++)
        {
            for (int j = 1; j <= iCol; j++)
            {
                if (i == iRow && j > 1 && j < iCol || i == 1 && j > 1 && j < iCol || j == 1 && i > 1 && i < iRow || j == iCol && i > 1 && i < iRow)
                {
                    printf("*\t");
                }
                else
                {
                    printf("\t");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n");

    if (ch == 'P' || ch1 == 'P')
    {
        iMid = (iRow + 1) / 2;
        for (int i = 1; i <= iRow; i++)
        {
            for (int j = 1; j <= iCol; j++)
            {
                if (i == 1 && j < iCol || j == 1 || (j == iCol && i < iMid && i > 1) || i == iMid && j < iCol)
                {
                    printf("*\t");
                }
                else
                {
                    printf("\t");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n");

    if (ch == 'Q' || ch1 == 'Q')
    {
        iMid = (iRow + 1) / 2;
        for (int i = 1; i <= iRow; i++)
        {
            for (int j = 1; j <= iCol; j++)
            {
                if ((i == 1 && j > 1) || (j == 1 && i > 1 && i < iRow) || (j == i && i >= iMid) || (j == iCol && i > 1 && i < iRow) || (i == iRow && j > 1 && j < iCol))
                {
                    printf("*\t");
                }
                else
                {
                    printf("\t");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n");

    if (ch == 'R' || ch1 == 'R')
    {
        iMid = (iRow + 1) / 2;
        for (int i = 1; i <= iRow; i++)
        {
            for (int j = 1; j <= iCol; j++)
            {
                if (i == 1 || j == 1 || j == iCol && i <= iMid || (i == j && i >= iMid) || i == iMid)
                {
                    printf("*\t");
                }
                else
                {
                    printf("\t");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n");

    if (ch == 'S' || ch1 == 'S')
    {
        iMid = (iRow + 1) / 2;
        for (int i = 1; i <= iRow; i++)
        {
            for (int j = 1; j <= iCol; j++)
            {
                if (i == 1 && j > 1 || (j == 1 && i < iMid && i > 1) || (j == iCol && i > iMid && i < iRow) || i == iMid && j > 1 && j < iCol || i == iRow && j < iCol)
                {
                    printf("*\t");
                }
                else
                {
                    printf("\t");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n");

    if (ch == 'T' || ch1 == 'T')
    {
        iMid = (iRow + 1) / 2;
        for (int i = 1; i <= iRow; i++)
        {
            for (int j = 1; j <= iCol; j++)
            {
                if (i == 1 || j == iMid)
                {
                    printf("*\t");
                }
                else
                {
                    printf("\t");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n");

    if (ch == 'U' || ch1 == 'U')
    {
        iMid = (iRow + 1) / 2;
        for (int i = 1; i <= iRow; i++)
        {
            for (int j = 1; j <= iCol; j++)
            {
                if (i == iRow && j > 1 && j < iCol || j == 1 && i < iRow || j == iCol && i < iRow)
                {
                    printf("*\t");
                }
                else
                {
                    printf("\t");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n");

    if (ch == 'V' || ch1 == 'V')
    {
        iMid = (iRow + 1) / 2;
        for (int i = 1; i <= iRow; i++)
        {
            for (int j = 1; j <= iCol; j++)
            {
                if (j == 1 && i <= iMid || j == iCol && i <= iMid || j == iMid && i == iRow || i == iCol - j + 1 && i >= iMid)
                {
                    printf("*\t");
                }
                else
                {
                    printf("\t");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n");

    if (ch == 'W' || ch1 == 'W')
    {
        iMid = (iRow + 1) / 2;
        for (int i = 1; i <= iRow; i++)
        {
            for (int j = 1; j <= iCol; j++)
            {
                if ((j == 1) || (j == iCol) || (i == j && i >= iMid) || (j == (iCol - i + 1) && i >= iMid))
                {
                    printf("*\t");
                }
                else
                {
                    printf("\t");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n");

    if (ch == 'X' || ch1 == 'X')
    {

        iMid = (iRow + 1) / 2;

        for (int i = 1; i <= iRow; i++)
        {
            for (int j = 1; j <= iCol; j++)
            {
                if (i == j || j == iCol - i + 1)
                {
                    printf("*\t");
                }
                else
                {
                    printf("\t");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n");

    if (ch == 'Y' || ch1 == 'Y')
    {
        iMid = (iRow + 1) / 2;
        for (int i = 1; i <= iRow; i++)
        {
            for (int j = 1; j <= iCol; j++)
            {
                if ((i == j && i <= iMid) || (j == (iCol - i + 1) && i <= iMid) || j == iMid && i >= iMid)
                {
                    printf("*\t");
                }
                else
                {
                    printf("\t");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n");

    if (ch == 'Z' || ch1 == 'Z')
    {
        iMid = (iRow + 1) / 2;
        for (int i = 1; i <= iRow; i++)
        {
            for (int j = 1; j <= iCol; j++)
            {
                if (j == (iCol - i + 1) || i == 1 || i == iRow)
                {
                    printf("*\t");
                }
                else
                {
                    printf("\t");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n");
}
int main()
{
    char Arr[100], Brr[100], ch = '\0', ch1 = '\0';
    int iRow = 0, iCol = 0;

    printf("Enter the first word: \n");
    scanf("%[^'\n']s", Arr);

    printf("Enter the second word: \n");
    scanf(" %[^'\n']s", Brr);

    printf("Enter the number of rows: \n");
    scanf("%d", &iRow);

    printf("Enter the number of Columns: \n");
    scanf("%d", &iCol);

    ch = Arr[0];
    ch1 = Brr[0];

    printf("\n");
    Display(ch, ch1, iRow, iCol);

    return 0;
}