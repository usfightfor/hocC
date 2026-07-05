#include <stdio.h>
#include <math.h>

int main() {
   int n, gt, sum = 0, base = 1;
   printf("Nhap vao 1 so thap phan: \n");
   scanf("%d", &n);
   while(n>0)
   {
      gt = n % 2;
      n = n / 2;
      sum = sum + gt *base;
      base = base * 10;
   }
     printf(" doi sang nhi phan la: %d", sum);
   return 0; 
}