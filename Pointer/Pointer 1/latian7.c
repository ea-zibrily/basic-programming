#include <stdio.h>

int main(){
    int count=13, sum=9, *x, *y;
    x=&count;
    *x=27;
    y=x;
    x=&sum;
    *x=count;
    sum=*x/2*3;

    printf("%d %d %d %d", count, sum, *x, *y);
    return 0;
}