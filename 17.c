#include <stdio.h>

int main() {
    int month;
    if (scanf("%d", &month) != 1) return 0;

    switch (month) {
        case 1:  printf("January, 31 days\n"); break;
        case 2:  printf("February, 28 days\n"); break;
        case 3:  printf("March, 31 days\n"); break;
        case 4:  printf("April, 30 days\n"); break;
        case 5:  printf("May, 31 days\nHere are complete C implementations for each problem from Q17 to Q24, formatted to match the provided sample test cases.

---


```c
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) return 0;

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        if (root1 == (int)root1 && root2 == (int)root2) {
            printf("Roots are real and different: %.0f, %.0f\n", root1, root2);
        } else {
            printf("Roots are real and different: %.2f, %.2f\n", root1, root2);
        }
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        if (root == (int)root) {
            printf("Roots are real and same: %.0f\n", root);
        } else {
            printf("Roots are real and same: %.2f\n", root);
        }
    } else {
        printf("Roots are complex\n");
    }

    return 0;
}
