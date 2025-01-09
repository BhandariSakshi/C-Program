# include <stdio.h>

void StringToggleX(char *Str)
{
    while (*Str != '\0')
    {
        if (*Str >= 'a' && *Str <= 'z')
        {
            *Str = *Str - 32;
        }
        else if (*Str >= 'A' && *Str <= 'Z')
        {
            *Str = *Str + 32;
        }
        Str++;
    }
    
}

int main()
{
    char Arr[50];

    printf("Enter the string: \n");
    scanf("%[^'\n']s", Arr);

    StringToggleX(Arr);

    printf("Updated string is: %s\n", Arr);

    return 0;
}