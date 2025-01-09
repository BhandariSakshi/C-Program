# include <stdio.h>

int CountCapital(char *Str)
{
    int iCount = 0;

    while (*Str != '\0')
    {
        if (*Str >= 'A' && *Str <= 'Z')
        {
            iCount++;
        }
        Str++;
    }
    return iCount;
    
}
int main()
{
    char Arr[100];
    int iRet = 0;

    printf("Enter the string: \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountCapital(Arr);
    printf("Number of capital letters are: %d\n",iRet);

    return 0;

}