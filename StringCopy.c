# include <stdio.h>

void StrCpy(char *Src, char *Dest)
{
    while (*Src != '\0')
    {
        *Dest = *Src;

        Src++;
        Dest++;
    }
    *Dest = '\0';
}

int main()
{
    char Arr[50];
    char Brr[50];

    printf("Enter the source string: \n");
    scanf("%[^'\n']s", Arr);

    StrCpy(Arr,Brr);

    printf("Destination string is: %s\n",Brr);

    return 0;
}