# include <stdio.h>

void StrCpySmall(char *Src, char *Dest)
{
    while (*Src != '\0')
    {
        if (*Src >= 'a' && *Src <= 'z')
        {
            *Dest = *Src;
             Dest++;
        }
        Src++;
    }
    *Dest = '\0';
}

int main()
{
    char Arr[50];
    char Brr[50];

    printf("Enter the source string: \n");
    scanf("%[^'\n']s", Arr);

    StrCpySmall(Arr,Brr);

    printf("Destination string is: %s\n",Brr);

    return 0;
}