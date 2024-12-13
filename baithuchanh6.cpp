#include <stdio.h>
#include <math.h>

int main() {
    int i, n, num = 2, count = 0, ketqua;
    
    printf("Nhap so N nguyen to: ");
    scanf("%d", &n);
    
    if (n < 1) {
        printf("So N khong hop le, vui long nhap lai\n");
        return 1;
    } else {
        printf("N so nguyen to dau tien la: \n");
        while (count < n) {
            int ketqua = 1;
            
            if (num < 2) {
                ketqua = 0;
            } else {
                for (i = 2; i <= sqrt(num); i++) {
                    if (num % i == 0) {
                        ketqua = 0;
                        break;
                    }
                }
            }
            
            if (ketqua) {
                printf("%d ", num); 
                count++;
            }
            num++;    
        }
        printf("\n");
        return 0;
    }
}

