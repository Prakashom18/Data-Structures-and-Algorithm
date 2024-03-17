#include <stdio.h>

// Function to calculate factorial using recursion
int factorial(int n) {
    // Base case: if n is 0 or 1, factorial is 1
    if (n == 0 || n == 1)
        return 1;
    // Recursive case: factorial of n = n * factorial of (n-1)
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &num);
    
    // Calling the factorial function and printing the result
    printf("Factorial of %d is %d\n", num, factorial(num));
    
    return 0;
}

