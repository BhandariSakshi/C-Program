# include <stdio.h>

//UDDDUDUU
int CountValleys(char Str[], int Step)
{
    int level = 0, valley = 0;

    for(int i = 0; i < Step; i++)
    {
        if(Str[i] == 'U')
        {
            level++;
            if(level == 0)
            {
                valley++;
            }
        }
        else
        {
            level--;
        }
    }
    return valley;
}

int main()
{
    char Str[20];
    int iRet = 0, Step = 0;

    printf("Enter the number of step: \n");
    scanf("%d", &Step);

    printf("Enter the string: \n");
    scanf("%s", Str);

    iRet = CountValleys(Str, Step);
    printf("Number of valleys are: %d",iRet);


    return 0;
}