# include <stdio.h>

void Reverse(char *Str)
{
    char *Start = Str;
    char *End = Str;
    char temp;

    while (*End != '\0')
    {
        End++;
    }
    End--;

    while (Start < End)
    {
        temp = *Start;
        *Start = *End;
        *End = temp;

        Start++;
        End--;

    }
    
    
}

int main()
{
    char Arr[50];

    printf("Enter the string: \n");
    scanf("%[^'\n']s", Arr);

    Reverse(Arr);

    printf(Arr);

    return 0;
}