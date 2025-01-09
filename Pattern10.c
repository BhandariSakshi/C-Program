# include <stdio.h>

void Display(int iNo)
{
    int i = 0;

    if(iNo < 1)
    {
        iNo = -iNo;
    }
    for (i = 1; i <= iNo; i++)
    {
        printf("%d\t*\t%d\t",i,i);
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}