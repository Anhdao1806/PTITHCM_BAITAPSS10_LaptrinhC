#include <stdio.h>

int main() {
    int a[7] = {2008,5487,1,84873,11,89523,28374};
    int size = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep : \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

