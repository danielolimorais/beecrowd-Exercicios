#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);

    double delta = B * B - 4 * A * C;

    if (A == 0 || delta < 0) {
        printf("Impossivel calcular\n");
    } else {
        double raiz1 = (-B + sqrt(delta)) / (2 * A);
        double raiz2 = (-B - sqrt(delta)) / (2 * A);
        printf("R1 = %.5lf\n", raiz1);
        printf("R2 = %.5lf\n", raiz2);
    }

    return 0;
}