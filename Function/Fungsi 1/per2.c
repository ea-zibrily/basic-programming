#include <stdio.h>

void triangular(int bil);
  int bil;

int main()
{
  printf("FUNGSI UNTUK MENAMPILKAN BILANGAN TRIANGULAR");

  printf("\nMasukkan bilangan : ");
  scanf("%d",&bil);

  triangular(bil);
}

void triangular(int bil)
{
  int i,sum = 0;
  printf("\nHasil Penjumlahan Tringular: ");

  for(i=bil;i>0;i--)
  {
  printf("%d ",i);
  sum += i;
  if (i != 1)
  printf("+ ");
  }

  printf("= %d \n",sum);
}




/*#include <stdio.h>

void triangular(int n); //prototype function triangular
  int n; //deklarasi var n karena nanti dipakai dalam fungsi triangular

int main(){
  int tri;

  printf("=====================================\n");
  printf("Zibril Yuan Afrianto || 02 || GTA-09\n");
  printf("Program Fungsi 2\n");
  printf("=====================================\n");

  printf("Masukkan bilangan: ");
  scanf("%d",&n);

  triangular(n); //memanggil fungsi triangular

return 0;
}
//membuat fungsi triangular dengan parameter input n
void triangular (int n){
  int m=n, i, tri=0; 
  for (i=m; i>=0; i--){
    tri += m;
    m--;
  }
  printf("Hasilnya adalah %d", tri);
}*/

/*
2. a. Buatlah sebuah fungsi untuk menghitung jumlah triangular n (misal nama
    fungsinya = triangular). Fungsi tersebut memiliki sebuah parameter berupa
    bilangan int (n) yang akan dicari triangularnya serta tidak memiliki nilai
    kembalian (return value)
    b. Tulislah prototipe fungsi untuk fungsi tersebut.
    c. Buat function main untuk memanggil function triangular() tersebut dengan
    nilai n yang merupakan input dari user.
*/