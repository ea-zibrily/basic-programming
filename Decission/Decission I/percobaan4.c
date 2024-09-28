#include <stdio.h>

int main(){
    int x, y=1, z, r=0;

    printf("Mencari bilangan prima\n");
    printf("=======================\n");

    printf("Masukkan bilangan: ");
    scanf("%d", &x);

    if(x<=1)
    {
        printf("Angka yang anda masukkan salah.\nMasukkan angka lebih dari satu");
    }
    for (y; y<=x; y++) {
                z = x%y;
                r++;
        }
        if (r==2)
        {
            printf("%d adalah bilangan prima.\n", x);
        }
        else{
            printf("%d bukan bilangan prima.\n", x);
        }
    return 0;

}
/*
Gunakan pernyaaan if…else untuk menentukan sebuah bilangan masukan adalah bilangan
prima atau bukan.
 Input : x
 Output : x adalah bilangan prima / bukan bilangan prima
5. Gunakan pernyataan if…else untuk membuat program yang menerima 2 buah bilangan
bulat masukan. Tampilkan hasil dari pembagian bilangan pertama dengan bilangan
kedua, dengan ketelitian 3 desimal.
 Input : bil1 dan bil2
 Output : hasil bagi bil1 dengan bil2
*/