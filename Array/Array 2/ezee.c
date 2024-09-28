#include <ctype.h>
#include <stdio.h>
#define max 255

int main(void)
{
    char conversions[max];
    int i;
    /* identity mapping for most chars */
    for (i = 0;  i < max;  ++i) {
        conversions[i] = (char)i;
    }
    /* exceptions */
    conversions['S'] = '5';
    conversions['O'] = '0';
    conversions['I'] = '1';
    conversions['E'] = '3';
    conversions['B'] = '8';
    conversions['A'] = '4';


    printf("Enter a messange: ");

    int ch;
    while ((ch = getchar()) != '\n' && ch != -1) {
        putchar(conversions[toupper(ch)]);
    }

    // Finish the sentence
    puts("!!!!!!!!!");
    return 0;
}
 
 
 /*#include <stdio.h>
 #define max 70

 int main(){
   char nama[max], biff[max];
   int i;

   i=0;
   printf("Masukkan nama: ");
   while (nama[i-1]!='\n')
   {
      scanf("%s", &nama[i]);
      i++;
   }
   i=0;

   while (nama[i]!='\n')
   {
      switch (nama[i])
      {
      case 'A' || 'a':
         biff[i] = '4';
         break;
      case 'B' || 'b':
         biff[i] = '8';
         break;
      case 'E' || 'e':
         biff[i] = '3';
         break;
      case 'I' || 'i':
         biff[i] = '1';
         break;
       case 'O' || 'o':
         biff[i] = '0';
         break;
       case 'S' || 's':
         biff[i] = '5';
         break;
      default:
         biff[i] = nama[i]-32;
         break;
      }
   }
   

return 0;

 }*/
 
 
 /*#include<stdio.h>

    int main()
     {
        char arr[50]={0},ch[50]={0};
        int i=0;
        printf("\nenter the sentence : ");

        while(arr[i-1]!='\n')
        {
         scanf("%c",&arr[i]);
         i++;
        }

       i=0;

       while(arr[i]!='\n')
       {
        if(arr[i]=='E' ||arr[i]=='e')
        ch[i]='3';
        if(arr[i]=='A'||arr[i]=='a')
        ch[i]='4';
        if(arr[i]=='B'||arr[i]=='b')
        ch[i]='8';
        if(arr[i]=='I'||arr[i]=='i')
        ch[i]='1';
        if(arr[i]=='O'||arr[i]=='o')
        ch[i]='0';
        if(arr[i]=='S'||arr[i]=='s')
        ch[i]='5';

       else ch[i]=arr[i]-32;
       i++;

     }

   ch[i]='\n';
   i=0;
   printf("\nIn B1FF-SPEAK : ");

   while(ch[i]!='\n')
   {
    printf("%c",ch[i]);
    i++;
   }

   printf("\n");
   return 0;
}*/