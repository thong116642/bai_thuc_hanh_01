#include <stdio.h>
int main() {
    int a, b;
    int x, y, r;
    int ucln, bcnn;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    if (a <= 0 || b <= 0) {
        printf("Vui long nhap hai so nguyen duong!");
        return 0;
    }
    x = a;
    y = b;
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    ucln = a;
    bcnn = (x / ucln) * y;
    printf("UCLN = %d\n", ucln);
    printf("BCNN = %d\n", bcnn);
    return 0;
}

