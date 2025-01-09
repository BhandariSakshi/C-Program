#include <stdio.h>
#include <math.h>

void Display(char *Arr, int iRow, int iCol)
{

    float iMid = 0.0f;
    char ch = Arr[0], ch1 = '\0';
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
    ch1 = Arr[i];

    switch (ch, ch1)
    {
    case 'A':
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
        break;

    case 'B':
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
        break;

    case 'C':
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
        break;

    case 'D':
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
        break;

    case 'E':
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
        break;

    case 'F':
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
        break;

    case 'G':
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
        break;

    case 'H':
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
        break;

    case 'I':
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
        break;

    case 'J':
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
        break;

    case 'K':
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
        break;

    case 'L':
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
        break;

    case 'M':
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
        break;

    case 'N':
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
        break;

    case 'O':
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
        break;

    case 'P':
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
        break;

    case 'Q':
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
        break;

    case 'R':
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
        break;

    case 'S':
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
        break;

    case 'T':
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
        break;

    case 'U':
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
        break;

    case 'V':
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
        break;

    case 'W':
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
        break;

    case 'X':
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
        break;

    case 'Y':
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
        break;

    case 'Z':
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
        break;

    default:
        printf("Invalid\n");
        break;
    }
}
int main()
{
    char Arr[100], ch = '\0';
    int iRow = 0, iCol = 0;

    printf("Enter the first word: \n");
    scanf("%[^'\n']s", Arr);

    printf("Enter the number of rows: \n");
    scanf("%d", &iRow);

    printf("Enter the number of Columns: \n");
    scanf("%d", &iCol);

    Display(Arr, iRow, iCol);

    return 0;
}