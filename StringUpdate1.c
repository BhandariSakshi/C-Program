# include <stdio.h>

void Display(char Str[])
{
    while (*Str != '\0')
    {
        if (*Str == ' ')
        {
            *Str = '*';
        }
        Str++;
    }
    
}

int main()
{
    char Arr[50];

    printf("Enter the string: \n");
    scanf("%[^'\n']s", Arr);

    Display(Arr);

    printf("Updated string is: %s\n",Arr);

    return 0;
}