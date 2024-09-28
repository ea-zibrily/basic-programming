#include <stdio.h>

int main(){
    int i, a=11;

    printf("Mencetak bilangan bulat antara 10 s/d 50!\n");

    for (i=10; i<=50; i++)
    {   
        if (a%3!=0)
        {
            printf("%d ", a);
        }
        a++;
    }
return 0;

}

/*
9. Buat program dan mencetak bilangan bulat antara 10 s/d 50
berkut outputnya:
10 12 14 16 18 20 22 24 26 28 30 32 34 46 38 40 42 44 46 48 50
Jumlah Bilangan ada: 21

 for (i=10; i<=50; i+=2)
    {   
        printf("%d ", i);
        a++;
    }
    printf("Jumlah bilangan ada %d", a);
*/