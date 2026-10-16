#include <stdio.h>
#include <string.h>

int main() {
    char ism[50];
    char familiya[50];

    scanf("%49s %49s", ism, familiya);

    printf("%c%s", ism[0], familiya);

    return 0;
}