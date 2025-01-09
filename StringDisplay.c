# include <stdio.h>

void Display(char *Str)
{
    while (*Str != '\0')
    {
        printf("%c",*Str);

        Str++;
    }
}

int main()
{
    char Arr[50];

    printf("Enter the string: \n");
    scanf("%[^'\n']s", Arr);

    Display(Arr);
    
    return 0;
}