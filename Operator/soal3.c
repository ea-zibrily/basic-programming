#include <stdio.h>//directives include untuk memanggil file

int main(){
    int x=10, y=6; //deklarasi var. int x dan y karena menggunakan bil. bulat

    x *= 5 + y; //'x *=' merupakan operator aritmatika, jika dijabarkan 'x = x*(5+y)'
    y += y &= x; //'y +=' merupakan operator aritmatika, jika dijabarkan 'y = y+(&=x)'
    printf("x = %d\ny = %d",x,y);
    return(0);
}