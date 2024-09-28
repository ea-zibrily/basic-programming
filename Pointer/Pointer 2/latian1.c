#include <stdio.h>

int main(){
    int x[4];
    int i;
    
    for (i=0; i<4; i++)
    {
        printf("&x[%d] = %u\n", i, &x[i]);
    }
    //u% = unsigned integer
    printf("Address of Array x: %u", x);
    return 0;
}