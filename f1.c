#include <stdio.h>

int main() {
    int number[10] = {9, 76, 2, 45, 3, 81, 25, 33, 71, 10};

    printf("The total array is:\n");

    int i, sum = 0;
    i = 0;

    while( i < 10) {
        printf("%d ", number[i]);
        sum = sum + number[i];
        i++;
    }

    printf("\nSum = %d\n", sum);

    return 0;
}
