#include<stdio.h>

void inputArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("arr[%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

int findMax(int arr[], int n) {
    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Khong co gia tri nao\n");
        return 0;
    }

    int arr[n];
    inputArray(arr, n);
    int max = findMax(arr, n);
    printf("Phan tu lon nhat trong mang la: %d\n", max);
    
    return 0;
}

