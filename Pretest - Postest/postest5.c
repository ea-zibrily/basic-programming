#include<stdio.h>

int main(){
   int n, i, j, a, b, ct, x[200]; //deklarasi variabel

    printf("=====================================\n");
    printf("Zibril Yuan Afrianto || 02 || GTA-09\n");
    printf("Program Bilangan Sempurna!\n");
    printf("=====================================\n");

    printf("Masukkan range bilangan: ");
    scanf("%d", &n);
    //menggunakan nested loop for
    for (i=1; i<=n; i++)
    {
        for (j=1, a=0, b=0, ct=0; j<i/2+1; j++)
        {
            if (i%j==0)
            {
                b+=j;
                x[ct]=j;
                ct++;
            }
        }
        if (b==i)
        {
            while (a<ct)
            {
            printf("%d", x[a]);
            a++;
            if (a!=ct)
                printf(" + ");
             else
                printf(" "); 
            }
            printf("= %d", b); 
        }
    }
    
return 0;
}
