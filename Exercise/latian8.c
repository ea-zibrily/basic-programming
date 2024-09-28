#include <stdio.h>

void balik (int x[], int y); 
int main(){
    int arr[]={'c','s','c','2','6','1'};
    int isi_array, i;
    isi_array = sizeof(arr)/sizeof(arr[0]);

    printf("Array Awal: ");
    for (i = 0; i < isi_array; i++)
    {
        printf("%c ", arr[i]);
    }
    printf("\nArray Reverse: ");
    balik(arr,isi_array);
    return 0;

}

void balik(int x[], int y){    
    int i;
    for (i = y-1; i>=0; i--)
    {
       printf("%c ", x[i]);
    }  
}

/*Write a program which prints the letters in
a char array in reverse order. For example, if the array contains {'c', 's', 'c', '2', '6', '1'} 
the output (to the terminal) should be "162csc" void printReverse(const char car[], int len);*/