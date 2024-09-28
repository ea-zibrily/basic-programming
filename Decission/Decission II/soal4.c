#include <stdio.h>

int main(){ //deklarasi variabel
    char letter;

    printf("Masukkan Tipe Karakter\n");
    printf("=========================\n");

    printf("(1) A\n(2) X\n(3) Z\n");
    printf("Pilih tipe karakter: ");
    scanf("%c", &letter);

    switch (toupper(letter))//menggunakan fungsi switch dengan ekspresi "letter"
    //toupper berfungsi membuat semua input menjadi huruf besar
    {
    case 'X':
        printf(" Sum = 0");
        break;
    case 'Z':
        printf("Valid Flag = 1");
        break;
    case 'A':
        printf("Sum = 1");
        break;
    default://hasil akhir jika data "letter" tidak sesuai case X,Z,A
        printf("Unknown Letter -> %c\n", letter);
    }
    return 0;
}


/*
TULISLAH KEMBALI PERNYATAAN-PERNYATAAN DI BAWAH INI DENGAN MENGGUNAKAN
PERNYATAAN SWITCH
IF( LETTER == 'X' )
SUM = 0;
ELSE IF ( LETTER == 'Z' )
VALID_FLAG = 1;
ELSE IF( LETTER == 'A' )
SUM = 1;
ELSE
PRINTF("UNKNOWN LETTER -->%C\N", LETTER );
*/