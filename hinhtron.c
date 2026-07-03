#include <stdio.h>
#include <math.h>
int main() {
   float dtb;
   printf("Vui long nhap diem trung binh cua ban: \n");
   scanf("%f", &dtb);

   if(dtb>=0.0 && dtb<4.0)
   {
      printf("Xep loai yeu");
   }
   else if(dtb>=4.0 && dtb<5.5)
   {
      printf("Xep loai trung binh yeu");
   }
   else if(dtb>=5.5 && dtb<7.0)
   {
      printf("Xep loai trung binh");
   }
   else if(dtb>=7.0 && dtb<8.5)
   {
      printf("Xep loai kha");
   }
   else if(dtb >10.0)
   {
      printf("Vui long nhap diem trung binh be hon 10.0");
   }
   else 
   {
      printf("Xep loai Gioi");
   }
   return 0;
}