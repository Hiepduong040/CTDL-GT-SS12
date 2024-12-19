#include <stdio.h>
#include <string.h>

struct SinhVien {
    char ten[50];
    float diem;
};

void inputStudentInfo(struct SinhVien danhSach[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("Ten: ");
        scanf(" %[^\n]", danhSach[i].ten);
        printf("Diem: ");
        scanf("%f", &danhSach[i].diem);
    }
}

void searchStudent(struct SinhVien danhSach[], int n, char tenCanTim[]) {
    int timThay = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(danhSach[i].ten, tenCanTim) == 0) {
            printf("Diem cua sinh vien %s la: %.2f\n", tenCanTim, danhSach[i].diem);
            timThay = 1;
            break;
        }
    }

    if (!timThay) {
        printf("Khong tim thay sinh vien.\n");
    }
}

int main() {
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    struct SinhVien danhSach[n];
    printf("Nhap thong tin sinh vien:\n");
    inputStudentInfo(danhSach, n);

    char tenCanTim[50];
    printf("Nhap ten sinh vien can tim: ");
    scanf(" %[^\n]", tenCanTim);

    searchStudent(danhSach, n, tenCanTim);

    return 0;
}

