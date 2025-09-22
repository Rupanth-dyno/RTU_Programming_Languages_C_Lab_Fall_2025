#include <stdio.h>

int sum_to_n(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	return sum;
}

int main() {
	int n;
	printf("Enter a positive integer: ");
	scanf("%d", &n);
	printf("Sum from 1 to %d is %d\n", n, sum_to_n(n));
	return 0;
}
