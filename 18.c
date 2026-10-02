#include <stdio.h>

int main() {
    int percentage;
    if (scanf("%d", &percentage) != 1) return 0;

    if (percentage >= 90 && percentage <= 100) {
        printf("Grade A\n");
    } else if (percentage >= 80 && percentage <= 89) {
        printf("Grade B\n");
    } else if (percentage >= 70 && percentage <= 79) {
        printf("Grade C\n");
    } else if (percentage >= 60 && percentage <= 69) {
        printf("Grade D\n");
    } else if (percentage < 60 && percentage >= 0) {
        printf("Grade F\n");
    } else {
        printf("Invalid Percentage\n");
    }

    return 0;
}
