//Pointer to Function
//2 - Pointer sebagai Keluaran Fungsi (return value)
#include <stdio.h>

char *nama_bulan(int n); //prototype function

int main()
{
    int bl;
    char *pch;

    printf("Masukkan Bulan 1..12 : ");
    scanf("%d", &bl);
    pch = nama_bulan(bl);
    printf("Bulan ke-%d adalah %s\n", bl, nama_bulan(bl));

    return 0;
}

char *nama_bulan(int n)
{
    static char *bulan[] = {
        "Kode bulan salah",
        "Januari",
        "Februari",
        "Maret",
        "April",
        "Mei",
        "Juni",
        "Juli",
        "Agustus",
        "September",
        "Oktober",
        "November",
        "Desember"
        };
    return ((n<1||n>12) ? bulan[0] : bulan[n]);
}


/*
//Pointer to Function
//1 - Pointer sebagai Parameter Fungsi
#include <stdio.h>

void naikkan_nilai(int *, int *);

int main()
{
    int a = 3, b = 7;

    printf("SEMULA : a = %d b = %d\n", a, b);
    naikkan_nilai(&a, &b);
    printf("KINI : a = %d b = %d\n", a, b);

    return 0;
}

void naikkan_nilai(int *x, int *y)
{
    *x = *x + 2;
    *y = *y + 2;
}
*/