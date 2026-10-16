#include <stdio.h>

int binary_search(int books[], int size, int id) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (books[mid] == id) {
            return mid;
        } else if (books[mid] < id) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int books[12] = {
        102, 115, 128, 143,
        157, 169, 184, 201,
        218, 235, 249, 270
    };

    int id;
    scanf("%d", &id);

    int index = binary_search(books, 12, id);

    if (index != -1) {
        printf("Kitob topildi!\n");
        printf("Indeks: %d", index);
    } else {
        printf("Kitob topilmadi");
    }

    return 0;
}