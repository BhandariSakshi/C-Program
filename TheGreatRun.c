//The Great Run

//Varun loves running. He often visits his favourite Nehru Park and runs for very long distances. On one such visit he found that the number of girls in the park was unusually high. Now he wants to use this as an opportunity to impress a large number of girls with his awesome speed.

//The track on which he runs is an N kilometres long straight path. There are ai girls standing within the ith kilometre of this path. A girl will be impressed only if Varun is running at his maximum speed when he passes by her. But he can run at his best speed only for a single continuous stretch of K kilometres. Now Varun wants to know what is the maximum number of girls that he can impress.

//Input

//First line of the input contains the number of testcases T.

//For each test case,

//First line contains two space-separated integers N and K, the length of the track and the maximum distance he can run at his best speed.

//Second line contains N space-separated integers, the number of girls within each kilometre of the track.

//Output

//For each test case print one line containing an integer, denoting the maximum number of girls Varun can impress.

//Test Case 1
//Input (stdin)
//1
//7 2
//2 4 8 1 2 1 8
//Output (stdout)
//12

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);  

    for (int test = 0; test < t; test++) {
        int n, k;
        scanf("%d %d", &n, &k);  

        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);  
        }

        int max = 0;

        for (int i = 0; i <= n - k; i++) {
            int sum = 0;
            for (int j = i; j < i + k; j++) {
                sum += arr[j];
            }
            if (sum > max) {
                max = sum;
            }
        }

        printf("%d\n", max);  
    }

    return 0;
}
