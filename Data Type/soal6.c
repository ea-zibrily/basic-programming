#include <stdio.h>

int main(){
    int x; //deklarasi var. int x, karena menggunakan bil. bulat
    //deklarasi proses menghitung var. x
    x = (2 + 3) - 10*2;     printf("(1): %d\n", x); //menampilkan hasil hitungan var. x
    x = (2 + 3) - (10*2);   printf("(2): %d\n", x);
    x = 10 % 3 * 2 + 1;     printf("(3): %d\n", x);
    return 0;

}