include<stdio.h>

// Recursive function to calculate power
int power(int base, int exponent) {
    if (exponent == 0)
        return 1; // Base case: any number to the power of 0 is 1
    else
        return base * power(base, exponent - 1); // Recursive case
}

int main() {
    int base, exponent;
    
    // Get base and exponent from the user
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    
    // Calculate and display the power
    int result = power(base, exponent);
    printf("%d^%d = %d\n", base, exponent, result);
    
    return 0;
}