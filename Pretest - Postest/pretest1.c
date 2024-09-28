#include <stdio.h>

int main() {
   int i, j, n, jumlah=1;

   printf("Program Bilangan Nested Loop\n");
   printf("=============================\n");
   printf("Masukkan bilangan: ");
   scanf("%d", &n);

   for (i = 1; i <= n; ++i) {

      for (j = 1; j <= n - i; ++j) {
         printf("  ");
         jumlah++;
      }
   }

   return 0;
}