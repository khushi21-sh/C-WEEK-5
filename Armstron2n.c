// Program to print all the armstrong numbers from 1 to n.

#include <math.h>
#include <stdio.h>

int main() {
    printf("Program to print all the armstrong numbers from 1 to n.\n\n");
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int num = 1; num <= n; num++) {
        int sum = 0, temp = num, count = 0, d;
        while (temp > 0) {
            d = temp % 10;
            temp = temp / 10;
            count = count + 1;
        }
        temp = num;
        while (temp > 0) {
            d = temp % 10;
            temp = temp / 10;
            sum = sum + pow(d, count);
        }
        if (sum == num) {
            printf("%d\n", num);
        }
    }
    return 0;
}
