#include <stdio.h>

void copyArray(int *src, int *dest, int n) {
	int i;
    for (i = 0; i < n; i++) {
        *(dest + i) = *(src + i);   
    }
}

int main() {
    int A[] = {10, 20, 30, 40, 50};
    int n = sizeof(A) / sizeof(A[0]);
    int B[100]; 
    int i;

    copyArray(A, B, n);

    printf("Mang B sau khi sao chep:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}

