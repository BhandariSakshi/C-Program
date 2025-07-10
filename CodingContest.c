//In a coding contest, there are two types of problems:
//Easy problems, which are worth 1 point each
//Hard problems, which are worth 2 points each
//To qualify for the next round, a contestant must score at least X points. Amit solved A Easy problems and B Hard problems. Will Amit qualify or not?

//Input Format
//The first line of input contains a single integer T, denoting the number of test cases. The description of T test cases follows.
//Each test case consists of a single line of input containing three space-separated integers — X, A, and B.

//Output Format
//For each test case, output a new line containing the answer — Qualify if Amit qualifies for the next round, and Not Qualify otherwise.
//Each character of the answer may be printed in either uppercase or lowercase. For example, if the answer is Qualify, outputs such as qualify, quALiFy, QUALIFY and QuAlIfY will also be accepted as correct.

//Test Case 1
//Input (stdin)
//3
//15 9 3
//5 3 0
//6 2 8
//Output (stdout)
//Qualify NotQualify Qualify

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    int x[t], a[t], b[t];

    // First take all inputs
    for (int i = 0; i < t; i++) {
        scanf("%d %d %d", &x[i], &a[i], &b[i]);
    }

    // Then process and print all results on one line
    for (int i = 0; i < t; i++) {
        int score = a[i] * 1 + b[i] * 2;
        if (score >= x[i]) {
            printf("Qualify ");
        } else {
            printf("NotQualify ");
        }
    }

    printf("\n");
    return 0;
}
