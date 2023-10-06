#include <stdio.h>
#include <string.h>

// Function to reverse a string recursively
void reverseString(char str[], int start, int end) {
    if (start >= end) {
        return; // Base case: if start is greater than or equal to end, no need to reverse further
    }

    // Swap the characters at the start and end positions
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // Recursively call the function with updated start and end positions
    reverseString(str, start + 1, end - 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int length = strlen(str);
    reverseString(str, 0, length - 1);

    printf("Reversed string: %s\n", str);

    return 0;
}
