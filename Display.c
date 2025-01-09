# include <stdio.h>

void Display(int iNo)
{
    int i = 0;
    for(i = 0; i < iNo; i++)
    {
        printf("Jay Ganesh......\n");
    }
}

int main()
{
    int iValue  = 0;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}