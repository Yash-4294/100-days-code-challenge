#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time;
    if (scanf("%lf %lf %lf", &principal, &rate, &time) != 3) return 0;

    double si = (principal * rate * time) / 100.0;
    double ci = principal * (pow(1.0 + (rate / 100.0), time)) - principal;

    // Formatting output to drop trailing zeroes if whole number, else show up to 2 decimals
    printf("Simple Interest=%.2g, Compound Interest=%.2g\n", si, ci);
    return 0;
} 
