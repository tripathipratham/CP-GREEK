#include <stdio.h>

// Function to print the lazy sequence
void printLazySequence(int n, int current) {
    if (current == -n) {
        printf("%d ", current);
        return;
    }

    printf("%d ", current);
    printLazySequence(n, current - 1);
    printf("%d ", current);
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1; // Exit with an error code
    }

    printLazySequence(n, n);

    return 0;
}
