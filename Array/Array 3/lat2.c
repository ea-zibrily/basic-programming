#include <stdbool.h>  //untuk memanggil tipe data boolean
#include <stdio.h>
#include <stdlib.h> //untuk memanggil fungsi rand/srand
#include <time.h> //untuk menentukan waktu
//menentukan nilai NUM_SUITS & NUM_RANKS
#define NUM_SUITS 4
#define NUM_RANKS 13

int main(){
    //deklarasi var tipe bool (boolean) untuk menentukan true false
    bool in_hand[NUM_SUITS][NUM_RANKS] = {false};
    int num_cards, rank, suit;
    const char rank_code[] = 
    {
        '2','3','4','5','6','7','8','9',
        't','j','q','k','a'
    };
    const char suit_code[] = {'c','d','h','s'};
    //menggunakan srand untuk mengatur titik awal pengacakan nilai
    srand ((unsigned) time (NULL));

    printf("Enter number of cards in hand: ");
    scanf("%d", &num_cards);

    printf("Your hand: ");
    //menggunakan loop while
    while (num_cards > 0)
    {
        suit = rand() % NUM_SUITS; //rank untuk mengacak nilai
        rank = rand() % NUM_RANKS;

        if (!in_hand[suit][rank])
        {
            in_hand[suit][rank] = true;
            num_cards--;
            printf(" %c%c", rank_code[rank], suit_code[suit]);
        }
    }
    
    printf("\n");
    return 0;
}