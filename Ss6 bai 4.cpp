#include <stdio.h>
#include <math.h>  // Thu vi?n d? tính can b?c 2

int main() {
    float a, b, c, delta,x,x1,x2;
    printf("Nhap he so a: ");
    scanf("%f", &a);
    printf("Nhap he so b: ");
    scanf("%f", &b);
    printf("Nhap he so c: ");
    scanf("%f", &c);
    if (a == 0) {
        printf("Phuong trinh khong phai la phuong trinh bac 2.\n");
    } else {
        delta = b * b - 4 * a * c;
        if (delta > 0) {
             x1 = (-b + sqrt(delta)) / (2 * a);
             x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co hai nghiem phan biet: x1 = %.2f va x2 = %.2f\n", x1, x2);
        } else if (delta == 0) {
             x = -b / (2 * a);
            printf("Phuong trinh co nghiem kep: x = %.2f\n", x);
        } else {
            printf("Phuong trinh vo nghiem (khong co nghiem thuc).\n");
        }
    }

    return 0;
}

