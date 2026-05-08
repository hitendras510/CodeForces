#include <stdio.h>
#include <math.h>

int main() {
    double a, b;

    scanf("%lf %lf", &a, &b);

    double original = a / (1 - b / 100);

    printf("%.2lf\n", original);
    

    return 0;
}