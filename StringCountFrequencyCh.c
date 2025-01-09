# include <stdio.h>

int CountFrequency(char *Str, char ch)
{
    int iCount = 0;

    while (*Str != '\0')
    {
        if (*Str == ch)
        {   
             iCount++;
        }
       
        Str++;
    }  
      
    return iCount;
}


int main()
{
    char Arr[100], cValue = '\0';
    int iRet = 0;

    printf("Enter the string: \n");
    scanf("%[^'\n']s", Arr);

    printf("Enter the charecter of which you want to find position of: \n");
    scanf(" %c", &cValue);

    iRet = CountFrequency(Arr, cValue);

    printf("Frequency of charecter is: %d\n",iRet);
    

    return 0;
}