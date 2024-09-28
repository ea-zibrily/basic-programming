//Program 3 - Pointer to String
//Menukarkan isi 2 string dengan pointer
#include <stdio.h>
#include <string.h>

char *nama1 = "JAMES BOND";
char *nama2 = "HERCULE POIROT";

int main()
{
    char *namax;

    puts("SEMULA : ");
    printf("nama1 --> %s\n", nama1);
    //nama1:pointer yg menunjuk ke string JAMES BOND
    printf("nama2 --> %s\n", nama2);
    //nama2:pointer yg menunjuk ke string HERCULE POIROT

    namax = nama1;
    nama1 = nama2;
    nama2 = namax;

    puts("KINI : ");
    printf("nama1 --> %s\n", nama1);
    printf("nama2 --> %s\n", nama2);

    return 0;
}


/*
//Program 1 - Pointer to String
#include <stdio.h>

int main()
{
    //pkota menunjuk konstanta string "SEMARANG"
    char *pkota = "SEMARANG";
    printf("String yang ditunjuk oleh pkota = ");
    //puts untuk mengambil value pkota
    puts(pkota); //printf("%s\n", pkota);

    return 0;
}
---------------------------------------------------
//Program 2 - Pointer to String
//Menukarkan isi 2 string tanpa pemakaian pointer
#include <stdio.h>
#include <string.h>

#define PANJANG 20

char nama1[PANJANG] = "JAMES BOND";
char nama2[PANJANG] = "HERCULE POIROT";

int main()
{
    char namax[PANJANG];

    puts("SEMULA : ");
    printf("nama1 --> %s\n", nama1);
    printf("nama2 --> %s\n", nama2);
    //fungsi strcpy berfungsi untuk menyalin string yang ditunjuk ke tujuan
    strcpy(namax, nama1);
    strcpy(nama1, nama2);
    strcpy(nama2, namax);

    puts("KINI : ");
    printf("nama1 --> %s\n", nama1);
    printf("nama2 --> %s\n", nama2);

    return 0;
}
*/


