#include <stdio.h>
#include <math.h>

int main() {
   float a, b, c, delta, x_1, x_2;

   printf("Nhap 3 he so a b c cho bieu thuc:\n");
   printf("a = "); 
   scanf("%f", &a);
   printf("b = "); 
   scanf("%f", &b);
   printf("c = "); 
   scanf("%f", &c);

   if(a==0)
   {
      if(b==0)
      {
         if(c==0)
         {
            printf("Phuong trinh co vo so nghiem ");
         }
         else 
         {
            printf("Phuong trinh vo nghiem");
         }
      }
      else 
      {
         printf("Phuong trinh co mot nghiem x = %.2f", -c/b);
      }
   }
   else 
   {
      delta = b*b - 4*a*c ;
      if(delta>0)
      {
         x_1 = (-b+sqrt(delta))/(2*a);
         x_2 = (-b-sqrt(delta))/(2*a);
         printf("Phuong trinh co hai nghiem phan biet x1= %.2f, x2 = %.2f", x_1, x_2);
      }
      else if(delta ==0)
      {
         x_1 = x_2 = -b/(2*a);
         printf("Phuong trinh co mot nghiem kep x1 = x2 = %.2f", x_1);
      }
      else
      {
         printf ("Phuong trinh vo nghiem");
      }
   }
   return 0;
}
