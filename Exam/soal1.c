#include <stdio.h>

int main()
{
 int a,b,c,d=0,e=1;
 printf("Enter a number: ");
 scanf("%d",&b);
 for(a=2;e<=b;a++)
 {
 c=1;d=0;
 for(c=1;c<=a;c++)
 {
 if(a%c==0)
 d++;
 }
 if(d==2)
 {
 printf("%d",a);
 e++;
 }

 }
 return 0;
}

/*#include <stdio.h>

int main(){
    int n, i, a=0, c=0, j=2;

    printf("Bilangan Prima\n");
    printf("Masukkan bilangan: ");
    scanf("%d", &n);

    while (a<n)
    {
        for (i=2; i<=j; i++)
        {
            if (j%i==0)
            {
                c++;
            }
            
        }
        if (c==1)
        {
            printf("%d", j);
        }
        if (a<n-1){
            printf(", ");
        }
        else{
            printf(".");
        }
        i++;
    }
    j++;
    
    return 0;
}
*/