// Write a program to print number from 1 to n number in gap of two using for loop.

#include <stdio.h>

int main() {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i = i + 2) {
        printf("%d\n", i);
    }

    return 0;
}