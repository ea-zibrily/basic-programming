#include <stdio.h>

int main(){
    int count=10, sum=7, *temp;
    temp=&count;
    *temp=32;
    temp=&sum;
    *temp=count;
    sum=*temp*4;

    printf("count = %d, sum = %d, *temp = %d", count, sum, *temp);
    return 0;
}