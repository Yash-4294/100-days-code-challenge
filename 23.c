#include <stdio.h>

int main() {
    int days;
    if (scanf("%d", &days) != 1) return 0;

    if (days <= 0) {
        printf("Fine ₹0\n");
    } else if (days <= 5) {
        printf("Fine ₹%d\n", days * 2);
    } else if (days <= 10) {
        // First 5 days @ 2 + remaining @ 4
        int fine = (5 * 2) + ((days - 5) * 4);
        printf("Fine ₹%d\n", fine);
    } else if (days <= 30) {
        // First 5 days @ 2 + Next 5 days @ 4 + remaining @ 6
        int fine = (5 * 2) + (5 * 4) + ((days - 10) * 6);
        printf("Fine ₹%d\n", fine);
    } else {
        printf("Membership Cancelled\n");
    }

    return 0;
}
