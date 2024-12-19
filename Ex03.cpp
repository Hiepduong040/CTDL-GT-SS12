#include<stdio.h>

void inputArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("arr[%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void findSymmetricPairs(int arr[], int n) {
    int dx = 0;
    for(int i = 0; i < n / 2; i++) {
        if(arr[i] == arr[n - i - 1]) {
            printf("(%d, %d)\n", arr[i], arr[n - i - 1]);
            dx = 1;
        }
    }
    if(!dx) {
        printf("Mang khong co phan tu doi xung.\n");
    }
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
    findSymmetricPairs(arr, n);
    
    return 0;
}

