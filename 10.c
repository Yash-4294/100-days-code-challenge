#include <stdio.h>

int main() {
    int total_seconds;
    if (scanf("%d", &total_seconds) != 1) return 0;

    int hours = total_seconds / 3600;
    int minutes = (total_seconds % 3600) / 60;
    int seconds = total_seconds % 60;

    printf("%d:%d:%d\n", hours, minutes, seconds);
    return 0;
}
