#include <stdio.h>

struct Xodim {
    char ism[50];
    int soat;
};

int main() {
    FILE *f = fopen("xodimlar.txt", "r");

    if (f == NULL) {
        printf("Fayl ochilmadi");
        return 1;
    }

    int n;
    struct Xodim xodim[100];

    if (fscanf(f, "%d", &n) != 1 ||
        n < 0 || n > 100) {
        fclose(f);
        printf("Fayl formati xato");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (fscanf(f, "%49s %d",
                   xodim[i].ism,
                   &xodim[i].soat) != 2) {
            fclose(f);
            printf("Fayl formati xato");
            return 1;
        }
    }

    fclose(f);

    for (int i = 0; i < n; i++) {
        printf("%s: %d som\n",
               xodim[i].ism,
               xodim[i].soat * 15000);
    }

    return 0;
}