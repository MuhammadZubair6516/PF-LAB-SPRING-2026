#include <stdio.h>

int main() {
    double num;

    printf("Enter a double value: ");
    scanf("%lf", &num);

    printf("Default: %lf\n", num);
    printf("Two decimals: %.2lf\n", num);
    printf("Five decimals: %.5lf\n", num);

    return 0;
}
