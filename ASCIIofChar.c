# include <stdio.h>

int main()
{
    char ch = '\0';

    printf("Enter the charecter: \n");
    scanf("%c", &ch);

    printf("Entered charecter is: %c\n", ch);
    printf("ASCII value of charecter is: %d\n",ch);

    return 0;
}