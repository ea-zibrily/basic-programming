#include <stdio.h>

int func (int x, int y); //protoype fungsi

int main(){
    int x;

    printf("Percobaan");
    x = func(2, 2);
    return 0;
}
//fungsi
int func (int x, int y){
    int jumlah;
    jumlah=x+y;
    printf("Hasil: %d", jumlah);
    return jumlah;
}