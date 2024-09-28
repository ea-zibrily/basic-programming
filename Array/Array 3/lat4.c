#include <stdio.h>
#include <math.h>
//menentukan nilai N
#define N 10

int main(){
    //deklarasi var float a dengan parameter array N
    float a[N] = {0.974742, 0.0982212, 0.578671, 0.717988, 0.881543,
    0.0771773, 0.910513, 0.576627, 0.506879, 0.629856};
    float sum=0, average, var=0, sd;
    int i;
    //menggunakan loop for
    for (i=0; i < N; i++)
    {
        sum+=a[i];
        average=sum/N;
    }
    for (i=0; i < N; i++)
    {
        var+=pow(a[i]-average, 2);
        sd=sqrt((var)/(N-1.0));
    }

    printf("Average = %f \nS.D. = %f\n", average, sd);
    return 0;
}