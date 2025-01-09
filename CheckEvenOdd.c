# include <stdio.h>
# include <stdbool.h>

bool Check(int iNo)
{
    bool bFlag = false;

    if (iNo % 2 == 0)
    {
        bFlag = true;
    }

    return bFlag;
    
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    bRet = Check(iValue);

    if (bRet == true)
    {
        printf("It is even number\n");
    }
    else
    {
        printf("It is an odd number\n");
    }
    

    return 0;
}