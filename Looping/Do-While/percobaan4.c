#include <stdio.h>

int main(){
    int n, a; //deklarasi variabel
    float nilai,rata=0, total=0, max=0, min=100;

    printf("Program Hitungan Nilai\n");
    printf("=======================\n");
    printf("Masukkan jumlah data: ");
    scanf("%d", &n);
    printf("\n");
    //menggunakan fungsi loop for
    for (a = 1; a<=n; a++)
    {
        printf("Masukkan nilai ke-%d: ", a);
        scanf("%f", &nilai);
        //menggunakan decision if untuk menentukan max/min
        if (max<nilai)
        {
            max=nilai;
        }
        if (min>nilai)
        {
            min=nilai;
        }
        
        total+=nilai;
        rata=nilai/2;
        max=max;
        min=min;
    }
    printf("\nNilai Total adalah %.2f\n", total);
    printf("Nilai Rata-Rata adalah %.2f\n", rata);
    printf("Nilai Max adalah %.2f\n", max);
    printf("Nilai Min adalah %.2f\n", min);

    return 0;
}
/*
Buatlah program untuk menerima daftar nilai mahasiswa sbb :
Input : - Jumlah data (n)
- Nilai ke-1 s/d Nilai ke-n
Output : - Nilai minimal
- Nilai maksimal
- Nilai rata-rata (rata-rata = nilai total / jumlah data)
(Petunjuk : Gunakan loop for dan seleksi kondisi dengan if)
*/