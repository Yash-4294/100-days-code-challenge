#include <stdio.h>

int main() {
    int num;
    if (scanf("%d", &num) != 1) return 0;

    if (num >= 0) {
        if (num == 0) {
            printf("Zero\n");
        } else {
            printf("Positive\n");
        }
    } else {
        printf("Negative\n");
    }
    return 0;
}
