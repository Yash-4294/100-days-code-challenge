#include <stdio.h>

int main() {
    int num;
    if (scanf("%d", &num) != 1) return 0;

    if (num % 2 == 0) {
        printf("%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
    }
    return 0;
}
