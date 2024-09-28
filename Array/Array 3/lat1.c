#include <stdio.h>
//menentukan nilai parameter CITY dan WEEK
const int CITY = 2;
const int WEEK = 7;

int main(){
    //deklarasi vari temperature
    int temperature [CITY][WEEK];
    //menggunakan nested loop for karena array 2D
    for (int i=0; i < CITY; ++i)
    {
        for (int j=0; j < WEEK; ++j)
        {
            printf("City %d, Day %d: ", i+1,j+1);
            scanf("%d", &temperature[i][j]);
        }
    }
    
    printf("\nDisplaying values: \n");
    for (int i=0; i < CITY; ++i)
    {
        for (int j=0; j < WEEK; ++j)
        {
            printf("City %d, Day %d: %d\n", i+1, j+1, temperature[i][j]);
        }
    }

    return 0;
}