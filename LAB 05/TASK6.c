#include <stdio.h>
int main() {
    int a, b, c, d;
    printf("Enter four side lengths of quadrilateral:");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a <= 0 || b <= 0 || c <= 0 || d <= 0) {
        printf("Not a valid quadrilateral");
    } else if (a == b && b == c && c == d) {
        printf("It's a Square");
    } else if ((a == c && b == d) || (a == b && c == d) || (a == d && b == c)) {
        printf("It's a Rectangle");
    } else {
        printf("General Quadrilateral");
    }
    return 0;
}
