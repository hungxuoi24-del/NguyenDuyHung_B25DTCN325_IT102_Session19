#include <stdio.h>

int soSanhArrays(int *a, int *b, int n) {
	int i;
    for (i = 0; i < n; i++) {
        if (*(a + i) != *(b + i)) {
            return 0;   
        }
    }
    return 1; 
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5};

    int size = sizeof(arr1) / sizeof(arr1[0]);

    int ketQua = soSanhArrays(arr1, arr2, size);

    if (ketQua == 1)
        printf("Hai mang giong nhau.\n");
    else
        printf("Hai mang khac nhau.\n");

    return 0;
}

