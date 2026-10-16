#include <stdio.h>

void hisoblagich(int n) {
    if (n == 0) {
        return;
    }

    printf("%d\n", n);
    hisoblagich(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);

    hisoblagich(n);

    printf("Xabar yuborildi!");

    return 0;
}