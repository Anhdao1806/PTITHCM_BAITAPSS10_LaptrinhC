#include <stdio.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int n, flag = 0;
    printf("Nhap phan tu muon kiem tra: ");
    scanf("%d", &n);
    for (int i = 0; i < 5; i++) {
        if (a[i] == n) {
            printf("Phan tu %d ton tai tai vi tri %d.\n", n, i);
            flag = 1;
        }
    }
if (!flag) {
        printf("Phan tu  %d khong ton tai trong mang.\n", n);
    }

    return 0;
}

