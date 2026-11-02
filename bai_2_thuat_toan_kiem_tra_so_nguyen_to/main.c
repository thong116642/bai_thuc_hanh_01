#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    int laSoNguyenTo = 1;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    if (n < 2) {
        laSoNguyenTo = 0;
    } else {
        for (i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                laSoNguyenTo = 0;
                break;
            }
        }
    }
   if (laSoNguyenTo == 1) {
        printf("%d la so nguyen to", n);
    } else {
        printf("%d khong phai la so nguyen to", n);
    }
    return 0;
}

