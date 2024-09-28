//Program 1
#include <stdio.h>

int main(){
    int val[7] = {11,22,33,44,55,66,77};
    int i, *p;

    p=val;
    for (i=0; i<7; i++)
    {
        printf("val[%d]: value is %d and address is %p\n", i,*p, p);
        p++
    }
    return 0;
}