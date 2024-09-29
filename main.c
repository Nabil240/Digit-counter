#include<stdio.h>

int main() {
    int num;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num == 0) {
        count = 1; 
         // Handle the special case of 0
    } else {
        if (num < 0) {
            num = -num; 
             // Handle negative numbers
        }

        while (num != 0) {
            num /= 10;
            count++;
        }
    }

    printf("Digit count: %d\n", count);
    return 0;
}
