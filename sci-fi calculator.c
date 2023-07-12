#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double num, result;

    printf("Scientific Calculator\n");
    printf("=====================\n");
    printf("1. Square Root\n");
    printf("2. Power\n");
    printf("3. Logarithm\n");
    printf("4. Exit\n");

    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter a number: ");
            scanf("%lf", &num);
            result = sqrt(num);
            printf("Square root of %.2lf = %.2lf\n", num, result);
            break;
        case 2:
            printf("Enter a number: ");
            scanf("%lf", &num);
            printf("Enter the power: ");
            scanf("%lf", &result);
            result = pow(num, result);
            printf("%.2lf raised to the power %.2lf = %.2lf\n", num, result, result);
            break;
        case 3:
            printf("Enter a number: ");
            scanf("%lf", &num);
            result = log(num);
            printf("Natural logarithm of %.2lf = %.2lf\n", num, result);
            break;
        case 4:
            printf("Exiting the calculator...\n");
            return 0;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}
