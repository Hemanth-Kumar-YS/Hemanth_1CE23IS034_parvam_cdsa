#include <stdio.h>

int main() 
{
    int M, N, temp;

    
    printf("Enter the value of M: ");
    scanf("%d", &M);
    printf("Enter the value of N: ");
    scanf("%d", &N);
    
    
    printf("Before swapping: M = %d, N = %d\n", M, N);
    temp = M;
    M = N;
    N = temp;

   
    printf("After swapping: M = %d, N = %d\n", M, N);

    return 0;
}