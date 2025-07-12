#include <stdio.h>

int countDigits(int num) {
    int digits = 0;
    
    if (num == 0) return 1;  
    
    while (num != 0) {
        num = num / 10;
        digits++;
    }
    return digits;
}

int main() {
    int n;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int nums[n];
    
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    int evenDigitCount = 0;
    
    for (int i = 0; i < n; i++) {
        int digits = countDigits(nums[i]);
        if (digits % 2 == 0) {
            evenDigitCount++;
        }
    }
    
    printf("Count of numbers with even number of digits: %d\n", evenDigitCount);
    
    return 0;
}
