#include <stdio.h>

long long findFactorial(int number) {
    if (number < 0) {
        return -1; // Indicates an error for negative input
    }
    
    long long factorial = 1;
    for (int i = 1; i <= number; i++) {
        factorial *= i;
    }
    
    return factorial;
}

int main() {
    int num = 5;
    long long result = findFactorial(num);
    
    if (result == -1) {
        printf("Factorial does not exist for negative numbers.\n");
    } else {
        printf("The factorial of %d is %lld\n", num, result);
    }
    
    return 0;
}
