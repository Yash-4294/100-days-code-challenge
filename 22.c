#include <stdio.h>

int main() {
    double cp, sp;
    if (scanf("%lf %lf", &cp, &sp) != 2) return 0;

    if (sp > cp) {
        double profit_pct = ((sp - cp) / cp) * 100;
        printf("Profit %.0f%%\n", profit_pct);
    } else if (cp > sp) {
        double loss_pct = ((cp - sp) / cp) * 100;
        printf("Loss %.0f%%\n", loss_pct);
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
