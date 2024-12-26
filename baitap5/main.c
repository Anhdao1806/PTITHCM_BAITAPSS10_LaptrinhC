#include <stdio.h>

int main() {
    int arr[] = {1,2342,2008,11,2345};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, temp, x, left, right, mid;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Nhap so can tim: ");
    scanf("%d", &x);
    left = 0;
    right = n - 1;
    while (left <= right) {
        mid = (left + right) / 2;
        if (arr[mid] == x) {
            printf("Tim thay %d o vi tri: %d\n", x, mid);
            return 0;
        }
        if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    printf("Khong tim thay %d trong mang.\n", x);
    return 0;
}

