# include <stdio.h>
# include <stdbool.h>

# define MAX 100


typedef struct{
    char data[MAX];
    int top;
}Stack;

void push(Stack* S, char c)
{
    if(S->top < MAX-1)
    {
        S->data[++(S->top)] = c;
    }
}

char pop(Stack* S)
{
    if(S->top >= 0)
    {
        return S->data[(S->top)--];
    }
    return '\0';
}

bool isEmpty(Stack* S)
{
    return S->top == -1;
}

bool ValidParenthesis(char *S)
{
    Stack st;
    st.top=-1;

    for (int i = 0; S[i] != '\0'; i++) {
        char ch = S[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            push(&st, ch);  
        } else {
            if (isEmpty(&st)) return false; 
            char top = pop(&st);
            if (!((top == '(' && ch == ')') ||
                  (top == '{' && ch == '}') ||
                  (top == '[' && ch == ']'))) {
                return false;  
            }
        }
    }

    return isEmpty(&st); 
}

int main()
{

    char Arr[30];
    bool bRet = false;

    printf("Enter the parenthesis: \n");
    scanf("%[^'\n']s",Arr);

    bRet = ValidParenthesis(Arr);

    if(bRet == true)
    {
        printf("Parenthesis are balanced or valid\n");
    }
    else
    {
        printf("Parenthesis are not balanced or not valid\n");
    }

    return 0;
}