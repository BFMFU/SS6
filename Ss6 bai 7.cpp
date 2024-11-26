#include <stdio.h>
int main() {
    int number;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &number);
    if (number==0||number<0) {
        printf("So tren khong co uoc.\n");
        return 0;
    }
    printf("Cac uoc cua so %d la: ", number);
    for (int i=1; i<=number; i++) {
        if (number%i==0) {
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}

