#include <stdio.h>

double chegirma(double narx) {
    return narx * 0.9;
}

int main() {
    double narx[5];

    for (int i = 0; i < 5; i++) {
        scanf("%lf", &narx[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("%.0f", chegirma(narx[i]));

        if (i < 4) {
            printf(" ");
        }
    }

    return 0;
}