#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci Series: ");
    int i;
    for ( i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    
    return 0;
}


