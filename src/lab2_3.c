#include <stdio.h>
#include <stdlib.h>

int is_prime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;

    printf("Enter a number n: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Error: n must be greater than or equal to 2.\n");
    } else {
        printf("Primes less than or equal to %d:\n", n);
        for (int i = 2; i <= n; i++) {
            if (is_prime(i)) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }

    return 0;
}
