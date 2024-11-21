#include <stdio.h>
int main() {
    float base, height, area;

    printf("Nhap chieu dai canh day cua tam giac: ");
    scanf("%f", &base);
    printf("Nhap chieu cao cua tam giac: ");
    scanf("%f", &height);

    if (base <= 0 || height <= 0) {
        printf("Canh day v� chieu cao can l� so duong.\n");
        return 1; 
    }

    area = 0.5 * base * height;
    printf("Dien tich cua tam giac l�: %.2f\n", area);

    return 0;
}
