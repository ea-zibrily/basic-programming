#include <stdio.h>

int main(){
    int a, n, i;

    printf("Program Bilangan Nested Loop\n");
    printf("=============================\n");
    printf("Masukkan bilangan: ");
    scanf("%d", &n);

    for (i=1; i<=n; i++)
      {
            for (a=i; a>=1; a--)
            {
                  printf("%d", a);
            }
            printf("\n");
      }
      for (i=n-1; i>=1; i--)
      {
            for (a=i; a>=1; a--)
            {
                   printf("%d", a);
            }
            printf("\n");
      }
      
    return 0;
}