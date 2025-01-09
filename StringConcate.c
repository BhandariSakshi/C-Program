# include <stdio.h>

void StrCatX(char *Dest, char *Src)
{
    while (*Dest != '\0')
    {
        Dest++;
    }

    while (*Src != '\0')
    {
        *Dest = *Src;
        Dest++;
        Src++;

    }
    *Dest = '\0';
    
}

int main()
{
    char Arr[30];
    char Brr[30] = "Sakshi";

    printf("Enter the Source string: \n");
    scanf("%[^'\n']s", Arr);

    StrCatX(Arr, Brr);

    printf("Destination string is: %s\n",Arr);

    
    return 0;
}