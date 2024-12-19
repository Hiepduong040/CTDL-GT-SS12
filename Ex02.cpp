#include<stdio.h>

void inputArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("arr[%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

int findMin(int arr[], int n) {
    int min = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
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
    int min = findMin(arr, n);
    printf("Phan tu nho nhat trong mang la: %d\n", min);
    
    return 0;
}

