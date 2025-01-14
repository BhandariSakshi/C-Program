#include <stdio.h>
#include <string.h>

void MaxLength(char *Str, char *Max_Word) {
    int currL = 0, MaxL = 0, Start = 0, MaxStart = 0;

    for (int i = 0; Str[i] != '\0'; i++) {
        if (Str[i] != ' ' && Str[i] != '\n') {
            if (currL == 0) {
                Start = i; 
            }
            currL++;
        } else {
            if (currL > MaxL) {
                MaxL = currL; 
                MaxStart = Start; 
            }
            currL = 0; 
        }
    }

    if (currL > MaxL) {
        MaxL = currL;
        MaxStart = Start;
    }

    for (int i = 0; i < MaxL; i++) {
        Max_Word[i] = Str[MaxStart + i];
    }
    Max_Word[MaxL] = '\0'; 
}

int main() {
    char Str[100];
    char Max_Word[100];

    printf("Enter the string: \n");
    fgets(Str, sizeof(Str), stdin); 
    Str[strcspn(Str, "\n")] = '\0'; 
    MaxLength(Str, Max_Word);

    printf("Maximum length of the word is: %d\n", (int)strlen(Max_Word));
    printf("MaxLength word is: %s\n", Max_Word);

    return 0;
}
