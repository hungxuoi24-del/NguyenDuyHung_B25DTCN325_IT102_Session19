#include <stdio.h>

#define MAX 100

void nhapMang(int *arr, int *n) {
    int i;
    printf("Nhap so luong phan tu: ");
    scanf("%d", n);

    for (i = 0; i < *n; i++) {
        printf("Nhap arr[%d]: ", i);
        scanf("%d", arr + i);
    }
}

void hienThiMang(int *arr, int n) {
    int i;
    printf("Cac phan tu trong mang: ");
    for (i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int doDaiMang(int n) {
    return n;
}

int tinhTong(int *arr, int n) {
    int i;
    int sum = 0;

    for (i = 0; i < n; i++) {
        sum += *(arr + i);
    }

    return sum;
}

int timMax(int *arr, int n) {
    int i;
    int max = *arr;

    for (i = 1; i < n; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }

    return max;
}


int main() {
    int arr[MAX];
    int n = 0;
    int choice;

    do {
        printf("\n========== MENU ==========\n");
        printf("1. Nhap mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Do dai mang\n");
        printf("4. Tinh tong cac phan tu\n");
        printf("5. Phan tu lon nhat\n");
        printf("6. Thoat\n");
        printf("Chon chuc nang: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                nhapMang(arr, &n);
                break;

            case 2:
                hienThiMang(arr, n);
                break;

            case 3:
                printf("Do dai mang: %d\n", doDaiMang(n));
                break;

            case 4: {
                int tong = tinhTong(arr, n);
                printf("Tong cac phan tu: %d\n", tong);
                break;
            }

            case 5: {
                int max = timMax(arr, n);
                printf("Phan tu lon nhat: %d\n", max);
                break;
            }

            case 6:
                printf("Thoat chuong trinh...\n");
                break;

            default:
                printf("Lua chon khong hop le!\n");
        }

    } while (choice != 6);

    return 0;
}

