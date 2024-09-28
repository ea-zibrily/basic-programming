#include <stdio.h>

int main(){//deklarasi variabel
    int a, n = 0, total = 0; 
    char pilih='y';

    printf("Program Mencari Total Angka\n");
    printf("============================\n");
    //menggunakan fungsi loop while
    while (pilih == 'y')
    {
        n+=1;//proses untuk bilangan ke-.. terus bertambah saat looping
        printf("Masukkan bilangan ke-%d: ", n);
        scanf("%d", &a);
        printf("Mau memasukkan data lagi? [y/n]: ");
        scanf(" %c", &pilih);

        total+=a;//menentukan nilai total
    }
    printf("============================\n");
    printf("Hasilnya adalah %d", total);
    return 0;
}

/*
Gunakan loop while untuk membuat program yang dapat mencari total angka yang
dimasukkan dengan tampilan sebagai berikut :
Masukkan bilangan ke-1 : 5
Mau memasukkan data lagi [y/t] ? y
Masukkan bilangan ke-2 : 3
Mau memasukkan data lagi [y/t] ? t
Total bilangan = 8
*/