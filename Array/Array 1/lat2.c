#include <stdio.h>
main()
{
int i;
int values[] = {1,2,3,4,5,6,7,8,9};
char word[] = {'H','e','l','l','o'};
for(i = 0; i < 9; ++i )
printf("values[%d] is %d\n", i, values[i]);
printf("\n");
for(i = 0; i < 6; ++i )
printf("word[%d] is %c\n", i, word[i]);
}

/*#include<stdio.h>
#define max 999 //menentukan nilai max

void judul();

int main()
    //deklarasi var int deret dengan array ukuran 5 data{
    int u, fibo[max]={0,1}, i;

    printf("Masukkan batas deret fibonanci: ");
    scanf("%d",&u);

    for (i=1; fibo[i]<=u; i++)
    {
        printf("%d ", fibo[i]);
        fibo[i+1]=fibo[i]+fibo[i-1];
    }

    return 0;
}

void judul (){
    printf("=====================================\n");
    printf("Zibril Yuan Afrianto || 02 || GTA-09\n");
    printf("Program Array 1 - Soal Latihan 1\n");
    printf("=====================================\n"); 
}*/