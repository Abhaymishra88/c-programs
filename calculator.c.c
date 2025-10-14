#include <stdio.h>

int main() {
    int n, a, b;

    printf("Enter 1 for sum\n");
    printf("Enter 2 for subtraction\n");
    printf("Enter 3 for multiplication\n");
    printf("Enter 4 for division\n");
    printf("Enter 5 for modulus\n");
    printf("Enter your choice: ");
    scanf("%d", &n);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch(n) {
        case 1:
            printf("Sum is %d\n", a + b);
            break;
        case 2:
            printf("Subtraction is %d\n", a - b);
            break;
        case 3:
            printf("Multiplication is %d\n", a * b);
            break;
        case 4:
            if (b == 0) {
                printf("Division is not possible (division by zero)\n");
            } else {
                printf("Division is %.2f\n", (float)a / b);
                       if (b == 0) {
                printf("Modulus is not possible (division by zero)\n");
            } else {
                printf("Modulus is %d\n", a % b);
            }
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
