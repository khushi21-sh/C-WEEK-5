// Write a program to input the number and than print sum of n natural number.

#include <stdio.h>

int main() {
    printf("Program to input the number and than print sum of n natural number.\n\n");
    int n, i = 1, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n) {
        sum = sum + i;
        i++;
    }
    printf("Sum of first %d natural number is %d\n", n, sum);

    return 0;
}
