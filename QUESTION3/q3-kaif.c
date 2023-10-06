#include <stdio.h>

// Function to display the first 10 entries in the multiplication table of n
void printMultiplicationTable(int n, int current, int count) {
    if (count == 10) {
        return; // Base case: Stop after printing 10 entries
    }

    printf("%d x %d = %d\n", n, current, n * current);

    // Recursively call the function with the next number in the table
    printMultiplicationTable(n, current + 1, count + 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Multiplication table of %d:\n", n);
    printMultiplicationTable(n, 1, 0);

    return 0;
}
