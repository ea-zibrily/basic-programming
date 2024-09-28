/*#include <stdio.h>
#define player1 5

int main(){
    int player2;
    char mulai='y';
    char nama1 [60], nama2 [60];

    printf("Mini Games Menebak Angka\n");
    printf("=========================\n");
    do
    {
        printf("Ingin mulai game? (y/t): ");
        mulai=getchar();
    } while (mulai=='n');

    printf("=========================\n");
    printf("Nickname Player 1: ");
    scanf("%s", &nama1);
    printf("Nickname Player 2: ");
    scanf("%s", &nama2);

    //printf("Masukkan nilai (1-10): ");
    //scanf("%d", &player1);
    do
    {
    printf("Masukkan tebakan nilai (1-10): ");
    scanf("%d", &player2);

    if (player2 > player1)
    {
        printf("Angka yang anda masukkan kelebihan!");
    }
    else if (player2 < player1)
    {
        printf("Angka yang anda masukkan kekurangan!");
    }
    else if (player2 == player1)
    {
        printf("Tebakan anda benar!\nPlayer 2 memenangkan game!");
    }
        printf("\nIngin mengulangi game? (y/t): ");
        scanf(" %c", &mulai);
    } while (mulai=='y');

    printf("\nTerima kasih telah memainkan game sederhana ini :)");
    return 0;
}
*/

/*
Buat sebuah game menebak angka
Player 1 memberi satu angka dari range 1 - 10
Player 2 menebak
Jika tebakan player 2 > angka tebakan, kasi tau angka kelebihan
Jika tebakan player 2 < angka tebakan, kasi tau angka kurang
Jika tebakan player 2 == angka tebakan, player 2 menang

// 10
// input: 9
// system: jawaban kurang
// input: 11
// system: jawaban kelebihan
// input: 10
// system: benar
*/

#include <stdio.h>

int main()
{
    int a = 12, b = 2, c = 3, d = 4;
    float y, z;

    int x = a % d;
    y = a - c;
    z = a / b * c + a % d;

    printf("Hasil x adalah %d", x);
    printf("Hasil y adalah %.2f", y);
    printf("Hasil z adalah %.2f", z);

    return 0;
}