#include <stdio.h>

int main(){
    int nomor, gaji, jumlah_lembur;
    char name [60];
    int gaji_pokok, tunjangan, uang_lembur, total;

    printf("DATA GAJI PEGAWAI\n");

        printf("Nomor Pegawai: ");
        scanf("%d", &nomor);
        printf("Nama Pegawai: ");
        scanf("%s", &name);
        printf("Gaji: ");
        scanf("%d", &gaji);
        printf("Jumlah Jam Lembur: ");
        scanf("%d", &jumlah_lembur);

        printf("Gaji Pokok: ");
        scanf("%d", &gaji_pokok);

        tunjangan = gaji_pokok * 15/100;
        uang_lembur = gaji_pokok * 3/100;
        total = gaji_pokok + tunjangan + uang_lembur;

        printf("\n---------------------\n");
        printf("Gaji Pokok: %d\n", gaji_pokok);
        printf("Tunjangan: %d\n", tunjangan);
        printf("Uang Lembur: %d\n", uang_lembur);
        printf("Total Gaji: %d\n", total);
        return 0;

}



/*


3. Gaji yang diterima pegawai terdiri dari gaji pokok, tunjangandan  upah  
lembur,besar  tunjangan  15%  dari  gaji  pokok,  besar upah lembur perjam 3% dari gaji pokok. 
Buatlah program untukmenghitung gaji yang diterima pegawai. 
Masukan (Input). nomorpegawai,  nama,gaji  pegawai,jumlah  jam  lembur.  
Keluaran(Output): Gaji pokok,tunjangan,uang lembur,total gaji
*/