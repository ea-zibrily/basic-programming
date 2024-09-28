#include <stdio.h>

int main()
{
    //deklarasi var z,s,*pz,*ps
    int z = 20, s = 30;
    int *pz, *ps;
    pz = &z;
    ps = &s;
    *pz += *ps;
    //mencetak var z dan s
    printf("z = %d\n", z);
    printf("s = %d\n", s);

    return 0;
}