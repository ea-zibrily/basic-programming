#include <stdio.h>

void menu(); //prototype function menu

int main(){
    int n, i; //deklarasi variabel

    printf("=====================================\n");
    printf("Zibril Yuan Afrianto || 02 || GTA-09\n");
    printf("Program Fungsi 1\n");
    printf("=====================================\n");

    printf("Masukkan bilangan ke-n: ");
    scanf("%d", &n);

    for (i=1; i<=n; i++) //menggunakan loop for
    {
        menu(); //memanggil fungsi menu
    }
    
return 0;
}
//membuat fungsi menu tanpa parameter (void/kosong)
void menu(){
    printf("Pilihan Menu\n");
}


/*
1.  a. Buatlah sebuah fungsi yang berfungsi untuk menampilkan sebuah string (di
    layar) = “Pilihan Menu” (misalkan nama fungsinya = menu). Fungsi
    tersebut tidak memiliki nilai kembalian (return value) dan juga tidak menerima
    parameter masukan apapun.
    b. Tulislah prototipe fungsi untuk fungsi tersebut.
    c. Buat function main untuk memanggil function menu() secara berulang-ulang,
    dengan jumlah perulangan yang merupakan input dari user.
*/