#include <stdio.h>

void PrintReverse(const char car[], int len){
  printf("REVERSE ORDER: ");
  for(int i = len - 1; i >= 0; i--)
    printf("%c",car[i]);

  printf("\n");
}

int main(){
    char nilai[] = {'c','s','c','2','6','1'};
    int n = sizeof (nilai) / sizeof (nilai[0]);
    PrintReverse(nilai,n);
    return 0;

}