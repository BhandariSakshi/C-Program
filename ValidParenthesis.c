#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX 1000

// Stack implementation
char stack[MAX];
int top = -1;

void push(char ch) {
    if (top < MAX - 1) {
        stack[++top] = ch;
    }
}

char pop() {
    if (top >= 0) {
        return stack[top--];
    }
    return '\0'; // Return null char if stack is empty
}

char peek() {
    if (top >= 0) {
        return stack[top];
    }
    return '\0';
}

bool isValid(const char* str) {
    top = -1; // Reset stack for each input

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            push(ch);
        } else {
            if (top == -1) return false;  // Stack empty

            char topChar = pop();
            if ((ch == ')' && topChar != '(') ||
                (ch == '}' && topChar != '{') ||
                (ch == ']' && topChar != '[')) {
                return false;
            }
        }
    }

    return top == -1; // Stack should be empty at the end
}

int main() {
    char str[MAX];

    printf("Enter the string: ");
    scanf("%s", str);

    if (isValid(str)) {
        printf("Valid Parenthesis\n");
    } else {
        printf("Not Valid Parenthesis\n");
    }

    return 0;
}
