#include <stdio.h>

int main() {
    int giolamviec;
    float tienluong, luongphucap = 0, luongcoban = 0, luongtheogio;

    printf("Nhap so gio lam viec cua cong nhan trong thang: ");
    scanf("%d", &giolamviec);

    luongtheogio = 30000;

    if (giolamviec > 160) {
        luongcoban = giolamviec * luongtheogio;
        luongphucap = luongcoban * 0.1;
        tienluong = luongphucap + luongcoban;                    
    } else {
        luongcoban = giolamviec * luongtheogio;
        tienluong = luongcoban;            
    } 

    printf("Tong tien luong cua ban trong thang nay la: %.2f\n", tienluong);
    printf("Luong co ban cua ban trong thang nay la: %.2f\n", luongcoban);
    printf("Luong phu cap cua ban trong thang nay la: %.2f\n", luongphucap);    

    return 0;
}

