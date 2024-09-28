#include <stdio.h>

float kuadrat (float x); //prototype function kuadrat

int main(){
    float n, x, kuad; //deklarasi varibael

    printf("=====================================\n");
    printf("Zibril Yuan Afrianto || 02 || GTA-09\n");
    printf("Program Fungsi 3\n");
    printf("=====================================\n");

    printf("Masukkan bilangan: ");
    scanf("%f", &n);

    kuad = kuadrat(n); //memanggil fungsi kuadrat
    printf("Hasil kuadratnya adalah %.2f", kuad);

return 0;
}
//membuat fungsi kuadra bertipe float dengan parameter input x
float kuadrat (float x){
    float kuad;
    kuad=x*x;
    return kuad;
}


/*
3. a. Buatlah sebuah fungsi untuk menghitung nilai bilangan kuadrat (misal nama
    fungsinya = kuadrat). Fungsi tersebut memiliki sebuah parameter bertipe float,
    yaitu bilangan yang akan dikuadratkan serta memiliki sebuah return value
    bertipe float, yaitu hasil kuadratnya
    b. Tulislah prototipe fungsi untuk fungsi tersebut.
    c. Buat function main untuk memanggil function kuadrat() tersebut dengan
    bilangan x yang akan dicari kuadratnya merupakan input dari user.
*/