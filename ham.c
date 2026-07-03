#include <stdio.h>
#include <math.h>
#define toantu 20

int main() {
    long long int a, b, tong, hieu, tich;
    double thuong;
    printf("Vui long nhap 2 so nguyen a b c:\n");
    scanf("%d %d", &a, &b);
    tong = a +b ;
    hieu = a - b; 
    tich = a * b;
    thuong = a / b;
    
    printf("tong la %d\n", tong);
    printf("hieu la %d\n", hieu);
    printf("tich la %d\n", tich);
    printf("thuong la %lf\n", thuong);
    printf("toan tu la %d", toantu);
    return 0;
}