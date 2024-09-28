#include <ctype.h> //karena menggunakan toupper
#include <stdio.h>
#define max 255 //menentukan nilai max

int main()
{
    //deklarasi var char conver dengan parameter ukuran max
    char conversions[max], ch;
    int i;

    printf("== Zibril Yuan A - 02 - GTA-09 ==\n");
    // menggunakan loop for
    for (i = 0;  i < max;  ++i) {
        conversions[i] = (char)i;
    }
    
    //mengubah isi array conversion
    conversions['S'] = '5';
    conversions['O'] = '0';
    conversions['I'] = '1';
    conversions['E'] = '3';
    conversions['B'] = '8';
    conversions['A'] = '4';

    printf("Enter Message: ");
    ch = getchar();
    printf("In B1FF-Speak: ");
    //menggunakan while
    while ((ch = getchar()) != '\n') {
        //fungsi toupper untuk conversi huruf kecil ke besar
        printf("%c", conversions[toupper(ch)]);
    }

    printf("!!!!!");
    return 0;
}


/*#include <stdio.h>
#define max 100

int main(){
    char i, biff[max];

    for (i=0; i < max; ++i)
    {
       biff[i] = (char)i;
    }
    
    while (biff!="\n")
    {
        switch (biff)
        {
        case 'A':
            printf("4");
            break;
        case 'B':
            printf("8");
            break;
        case 'E':
            printf("3");
            break;
        case 'I':
            printf("1");
            break;
        case 'O':
            printf("0");
            break;
        case 's':
            printf("5");
            break;
        default:
            printf("%c", biff);
            break;
        }

        biff = getchar();
    }

    printf("!!!!!!");
    return 0;
}*/