#include<string.h>
#include<stdio.h>
void moveHash(char str[])
{
    char str1[100] = {0}, str2[100] = {0};
    int i, j = 0, k = 0;

    for (i = 0; str[i]; i++)
    {
        if (str[i] == '#')
            str1[j++] = str[i];
        else
            str2[k++] = str[i];
    }

    strcat(str1, str2);

    printf("String after moving Hashes front: \n");
    printf("%s", str1);
}

int main()
{
    char a[100];

    printf("Enter the string: \n");
    scanf("%[^\n]s", a);

    moveHash(a);

    return 0;
}