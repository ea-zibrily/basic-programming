#include <stdio.h>

int main(){
    int a, b, c, d, n, i, j; //deklarasi variabel
    int A, B, C, D;

    printf("=====================================\n");
    printf("Zibril Yuan Afrianto || 02 || GTA-09\n");
    printf("Program Pemindah Angka!\n");
    printf("=====================================\n");

    printf("Masukkan nilai a: ");
    scanf("%d", &a);
    printf("Masukkan nilai b: ");
    scanf("%d", &b);
    printf("Masukkan nilai c: ");
    scanf("%d", &c);
    printf("Masukkan nilai d: ");
    scanf("%d", &d);

    printf("Angka yang anda masukkan adalah: \n");
    printf(" a = %d, b = %d, c = %d, d = %d", a,b,c,d);

    printf("\nMau geser ke kiri berapa kali? ");
    scanf("%d", &n);
    //menentukan var A-D
    A=a, B=b, C=c, D=d;
    //menggunakan nested loop for
    for (i=n; i>0; i--)
    {
        for (j=i; j>0; j--)
        {
            a=B, b=C, c=D, d=A;
        }
        A=a, B=b, C=c, D=d;
    }
    printf("================================\n");
    printf("Hasil setelah proses pergeseran: \n");
    printf(" a = %d, b = %d, c = %d, d = %d", a,b,c,d);

return 0;
}