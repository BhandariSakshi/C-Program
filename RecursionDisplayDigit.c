# include <stdio.h>

int Display(int iNo)
{
    if(iNo != 0)
    {
        printf("%d\n",(iNo%10));
        iNo = iNo/10;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number: \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}