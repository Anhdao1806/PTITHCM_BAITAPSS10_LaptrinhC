#include <stdio.h>

int main() {
    int arr[] = {1,11,2008,34,43};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x, i, found[100], count = 0;
    printf("Nhap so can tim: ");
    scanf("%d", &x);
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            found[count++] = i; // Lưu vị trí tìm thấy vào mảng `found`
        }
    }
    if (count > 0) {
        printf("Tim thay %d tai cac vi tri: ", x);
        for (i = 0; i < count; i++) {
            printf("%d ", found[i]);
        }
        printf("\n");
    } else {
        printf("Khong tim thay %d trong mang.\n", x);
    }

    return 0;
}

