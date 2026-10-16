#include <stdio.h>

int main() {
    int seats[10];
    int n;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &seats[i]);
    }

    scanf("%d", &n);

    if (n < 1 || n > 10) {
        printf("Noto'g'ri o'rindiq");
    } else if (seats[n - 1] == 0) {
        printf("Joy mavjud");
    } else {
        printf("Joy band");
    }

    return 0;
}