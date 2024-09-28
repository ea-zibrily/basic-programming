#include<stdio.h>

int main(){
    int i, n, hasil = 0; //deklarasi variabel

    printf("Menghitung Bilangan Triangular\n");
    printf("===============================\n");
    printf("Masukkan bilangan: ");
    scanf("%d", &n);

    //menggunakan fungsi loop for
    for (i=n; i>=1; i--) //eksp1,eksp2,eksp3
    {
        printf("%d",i);
        //menggunakan if untuk menampilkan "+"
        if(i!=1) printf("+");
        hasil += i; //proses hasil
    }
    printf("\nHasilnya adalah %d", hasil); //menampilkan hasil
    return 0;
}

/*

int main(){
    int i, bilangan, hasil =0;

    printf("Menghitung bilangan Triangular\n");
    printf("===============================\n");
    printf("Masukkan bilangan: ");
    scanf("%d", &bilangan);

    for (i=1; i<=bilangan; i++);
    {
        printf("%d",i);
        if(i!=1)printf("+");
        hasil += i;
    }
    printf("Hasilnya adalah %d", hasil);
    return 0;
}

2. Hitunglah bilangan triangular dari masukan pengguna, yang dibaca dari keyboard dengan menggunakan
scanf(). Bilangan triangular adalah penjumlahan dari bilangan masukan dengan seluruh bilangan sebelumnya,
sehingga bilangan triangular dari 7 adalah : 7 + 6 + 5 + 4 + 3 + 2 + 1
*/