#include <stdio.h>
int main() {
    float cc, bt, kt, final, tb;

    printf("Nhap diem Chuyen can (CC): ");
    scanf("%f", &cc);
    printf("Nhap diem Bai tap (BT): ");
    scanf("%f", &bt);
    printf("Nhap diem Kiem tra (KT): ");
    scanf("%f", &kt);

    if (cc > 0 && bt > 0 && kt > 0) {
        printf("Sinh vien duoc du thi cuoi mon\n");

        printf("Nhap diem thi cuoi mon (Final): ");
        scanf("%f", &final);

        tb = cc * 0.1 + bt * 0.1 + kt * 0.1 + final * 0.7;
        printf("Diem trung binh (TB) = %.2f\n", tb);

        if (tb < 4)
            printf("Xep loai: YEU\n");
        else if (tb <= 6.5)
            printf("Xep loai: TB\n");
        else if (tb <= 7.5)
            printf("Xep loai: KHA\n");
        else if (tb <= 8.5)
            printf("Xep loai: GIOI\n");
        else
            printf("Xep loai: XUAT SAC\n");
    } else {
        printf("Sinh vien khong du dieu kien du thi\n");
    }

    return 0;
}