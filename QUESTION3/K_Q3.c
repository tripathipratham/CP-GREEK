#include <stdio.h>

void displayMultiplicationTable(int n, int i) {
    if (i <= 10) {
        int result = n * i;
        printf("%d x %d = %d\n", n, i, result);
        displayMultiplicationTable(n, i + 1);
    }
}

int main() {
    int n;
    printf("Enter a number (1 <= n <= 1000): ");
    scanf("%d", &n);

    if (n >= 1 && n <= 1000) {
        printf("Multiplication table for %d:\n", n);
        displayMultiplicationTable(n, 1);
    } else {
        printf("Invalid input. Please enter a number between 1 and 1000.\n");
    }

    return 0;
}
