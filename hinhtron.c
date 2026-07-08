#include <stdio.h>
#include <math.h>

void nhapcanh(float *x){
   scanf("%f", x);
}
int kiemtratamgiac(float a, float b, float c){
   if(a + b > c && b + c > a && c + a > b && a > 0 && b >0 && c >0){
   return 1;
   }
   else{
      printf("Vui long nhap lai\n");
   }
   return 0;
}
void phanloai(float a, float b, float c){
   if(a == b && b == c){
      printf("Tam giac deu\n");
   }
   else if(a == b || b == c || a == c){
      printf("Tam giac can\n");
   }
   else if(a * a + b * b == c * c ||a * a + c * c == b * b||c * c + b * b == a * a){
      printf("Tam giac vuong\n");
   }
   else{
      printf("Tam giac thuong\n");
   }
}
void tinh(float a, float b, float c){
   float p = (a + b + c)/2;
   float s = sqrt(p*(p-a)*(p-b)*(p-c));
   printf("Chu vi cua tam giac la %.2f\n", 2*p);
   printf("Dien tich cua tam giac la %.2f\n", s);
}
int main(){
   float a, b, c;
   printf("Nhap canh a: \n");
   nhapcanh(&a); // a nhan gt tu scanf
   printf("Nhap canh b: \n");
   nhapcanh(&b);
   printf("Nhap canh c: \n");
   nhapcanh(&c); 
   if(kiemtratamgiac(a, b, c) == 1){
   phanloai(a, b, c);
   tinh(a, b, c);
   }
return 0;
}
