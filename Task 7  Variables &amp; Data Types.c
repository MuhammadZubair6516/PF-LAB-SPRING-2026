#include <stdio.h>
int main() 
{
    int age = 20;
    float height = 5.8f;
    double cgpa = 3.45;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    printf("CGPA: %.2lf\n", cgpa);
    printf("Grade: %c\n", grade);

    return 0;
}
