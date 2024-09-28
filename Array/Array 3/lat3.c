#include <stdio.h>
//menentukan nilai ROW dan COL
#define ROW 2
#define COL 5

int main(){
    int i, j;
    //deklarasi var float mat dengan parameter array ROW dan COL
    float mat[ROW][COL] = {{1.0,2.0,3.0,4.0,5.0},{6.0,7.0,8.0,9.0,10.0}};
    //menggunakan nested loop for
    for (i=0; i < ROW; i++)
    {
        for (j=0; j < COL; j++)
        {
            printf("%.1f ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}