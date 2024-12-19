#include <stdio.h>

void inputArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

void findDuplicates(int arr[], int n) {
    int found_duplicate = 0;

    for (int i = 0; i < n; i++) {
        int count = 1;
        
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                break;
            }
        }

        if (i == j) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                }
            }

            if (count > 1) {
                printf("Phan tu %d xuat hien %d lan\n", arr[i], count);
                found_duplicate = 1;
            }
        }
    }

    if (!found_duplicate) {
        printf("Khong co phan tu lap lai.\n");
    }
}

int main() {
    int n;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    inputArray(arr, n);   
    findDuplicates(arr, n);   

    return 0;
}

