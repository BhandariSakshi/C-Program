# include <stdio.h>

int CountSmall(char *Str)
{
    int iCount = 0;

    while (*Str != '\0')
    {
        if (*Str >= 97 && *Str <= 122)
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

    iRet = CountSmall(Arr);
    printf("Number of small letters are: %d\n",iRet);

    return 0;

}