#include <stdio.h>

int countDigits(long long number) {
    int count = 0;
    if (number == 0) {
        return 1;
    }
    if (number < 0) {
        number = -number;
    }
    while (number > 0) {
        number /= 10;
        count++;
    }

    return count;
}

int main() {
    long long num = 123456;
    int result = countDigits(num);
    
    printf("The number of digits in %lld is: %d\n", num, result);
    
    return 0;
}