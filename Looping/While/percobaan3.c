#include <stdio.h>

int main(){//dkelarasi variabel
    int a, max=0, min=100, n = 0, total = 0;
    float rata = 0;
    char pilih='y';

    printf("Program Mencari Total Angka\n");
    printf("============================\n");
    //menggunakan fungsi loop while
    while (pilih == 'y')
    {
        n+=1; //proses untuk bilangan ke-.. terus bertambah saat looping
        printf("Masukkan bilangan ke-%d: ", n);
        scanf("%d", &a);
        printf("Mau memasukkan data lagi? [y/n]: ");
        scanf(" %c", &pilih);
        //menggunakan if untuk menentukan max min
        if (a>max)
        {
            max=a;
        }
        else if (a<min)
        {
            min=a;
        } 
        //proses menghitung
        total+=a;
        rata+=(float)a/2;
        max=max;
        min=min;
    }
    printf("============================\n");
    printf("Hasilnya adalah %d\n", total);
    printf("Rata-ratanya adalah %.2f\n", rata);
    printf("Nilai Maxnya adalah %d\n", max);
    printf("Nilai Minnya adalah %d", min);

    return 0;
}