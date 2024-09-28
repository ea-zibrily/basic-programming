#include <stdio.h>

int main(){
    int x[5] = {1,2,3,4,5};
    int *ptr;

    ptr=&x[2];
    printf("*ptr = %d\n", *ptr);
    printf("*ptr + 1 = %d\n", *ptr+1);
    printf("*ptr - 1 = %d\n", *ptr-1);
    //nilai yang muncul = penjumlahan dan pengurangan nilai dari x[2]

    return 0;
}