//Array of Pointer
#include <stdio.h>

int main(){
 int i;
    static char *namahari[] = 
    {
    "Senin",
    "Selasa",
    "Rabu",
    "Kamis",
    "Jumat",
    "Sabtu",
    "Minggu"
    }; 
    printf("List nama hari: \n");
    for (i=0; i<7; i++)
    {
        printf("namahari[%d] berisi alamat yang menunjuk ke string %s.\n", i, namahari[i]);
    }

    return 0;
    /*int a[] = {1, 2, 3, 4, 5, 6};
    int len ;
    len = sizeof(a)/sizeof(a[0]);
    printf("Jumlah array: %d", len);
    */
}




