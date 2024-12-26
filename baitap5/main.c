#include <stdio.h>

int main() {
    int arr[] = {1,2398,11,2395,2008};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, temp, x;
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
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Tim thay %d o vi tri: %d\n", x, i);
            return 0;
        }
    }

    printf("Khong tim thay phan tu %d\n", x);
    return 0;
}

