#include <stdio.h>

int main(){
    //deklarasi variabel
    char huruf;
    int a = 0, b = 0;

    printf("Masukkan kalimat yang diinginkan:\n");
    //menggunakan fungsi loop while
    /*menggunakan getchar agar dapat diproses saat di enter
    jika menggunakan scanf("%c", &huruf), data yang masuk tidak
    akan diproses dan langsung false*/ 
    while ((huruf=getchar())!='\n')
    {
     if(huruf==' ')
       b++;
    else
       a++;
    }
    printf("=========================\n");
    printf("Jumlah karakter adalah %d\n", a);
    printf("Jumlah spasi adalah %d", b);
    return 0;
}
