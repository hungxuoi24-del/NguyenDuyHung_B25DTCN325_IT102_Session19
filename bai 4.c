#include <stdio.h>

int countValue(int *arr, int n, int x) {
    int count = 0;
    int i;

    for (i = 0; i < n; i++) {
        if (*(arr + i) == x) {  
            count++;
        }
    }

    return count;
}

int main() {
    int mang[] = {3, 5, 7, 3, 8, 3, 9};
    int size = sizeof(mang) / sizeof(mang[0]);

    int x;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);

    int soLan = countValue(mang, size, x);

    printf("Gia tri %d xuat hien %d lan trong mang.\n", x, soLan);

    return 0;
}

