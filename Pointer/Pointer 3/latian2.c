#include <stdio.h>

int main()
{
    //deklarasi var char c dan *char_pointer
    char c = 'Q';
    char *char_pointer = &c;

    printf("%c %c\n", c, *char_pointer);
    c = '/'; //mengubah value c
    printf("%c %c\n", c, *char_pointer);
    *char_pointer = '('; //mengubah value *char_pointer
    printf("%c %c\n", c, *char_pointer);

    return 0;
}