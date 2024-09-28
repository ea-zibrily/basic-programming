#include <stdio.h>
#define DIGITZY 10 //menentukan 

int main()
{   
    //deklarasi jumlah_digit dengan ukuran parameter DIGITZY
    int jumlah_digit[DIGITZY]={0}; //{0} karena untuk baris
    int digit, i;
    int n;

    printf("== Zibril Yuan A - 02 - GTA-09 ==\n");
    printf("\nEnter a number: ");
    scanf("%d", &n);

    //menggunakan nested loop while
   while (n>0) {

      //menghitung angka saat dicek
      while (n > 0) {
         digit = n % 10;                  
         jumlah_digit[digit]++;            
         n /= 10;                         
      } 

      //mencetak digit
      printf("Digit:      ");
      for (i = 0; i < DIGITZY; i++)
         printf("%3d", i);

      //mencetak occurrences
      printf("\nOccurrences:");
      for (i = 0; i < DIGITZY; i++)
        printf("%3d", jumlah_digit[i]);
      printf("\n");

      
      /* Clear the digit_counts array */
      for (i = 0; i < DIGITZY; i++)
        jumlah_digit[i] = 0;

   }

   return 0;
}