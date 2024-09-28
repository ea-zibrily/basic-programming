#include <stdio.h>

int main(){
    int i, n, kali;

    printf("===========================\n");
    printf("Zibrilyy || Latihan 6 || C\n");
    printf("Program Looping Aritmatika!\n");
    printf("===========================\n");

    printf("Masukkan angka: ");
    scanf("%d", &n);

    for (i=1; i<=10; i++)
    {
        kali=i*n;
        printf("%d * %d = %d\n", i, n, kali);
    }

return 0;
}