#include <stdio.h>

int main(){
    int z=20, s=30, *pz, *ps;
    pz=&z;
    ps=&s;
    *pz+=*ps;

    printf("Nilai z adalah: %d\n", z);
    printf("Nilai s adalah: %d\n", s);

    return 0;
}