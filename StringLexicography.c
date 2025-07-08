//Lexicographical smallest string
//cbacdcbc = acdcbc , k = 2
# include <stdio.h>

void lexicography(char *Str, int k)
{
    int i  = 0;
    while (*Str != '\0' && i < k)
    {
        Str++;
        i++;
    }
    printf(Str);
    
}


int main()
{
    char Arr[100];
    int k = 0;

    printf("Enter the string: \n");
    scanf("%[^'\n']s", Arr);

    printf("Enter the value of k: \n");
    scanf("%d", &k);

    lexicography(Arr, k);



    return 0;
}