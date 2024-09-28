#include<stdio.h>
//prototype fungsi PrintReverse dan PrintArray
void PrintReverse(char arr[], int len);
void PrintArray(char arr[], int len);

int main()
{
    //deklarasi variabel char arr dan int total
	char arr[] = {'c','s','c','2','6','1'};
    int total;

    printf("== Zibril Yuan A - 02 - GTA-09 ==\n");
    //menghitung ukuran parameter array
    total = sizeof (arr) / sizeof (arr[0]);
    //memanggil fungsi
    printf("Original array: \n");
	PrintArray(arr, total);
    printf("Reverse array: \n");
	PrintReverse(arr, total);

	return 0;
}
//membuat fungsi PrintReverse dengan parameter char arr dan int len
void PrintReverse(char arr[], int len){
    int i;
    for(i=len-1; i>=0; i--)
    {
        printf("%c ",arr[i]);
    }
}
//membuat fungsi PrintArray dengan parameter char arr dan int len
void PrintArray(char arr[], int len)
{
    int i;
    for (i=0; i < len; i++)
    {
        printf("%c ", arr[i]);
    }
    printf("\n");
}