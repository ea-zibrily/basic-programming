#include <stdio.h>

int main(){
    int pilih_game, total;
    char nama [50], nickname[50], quest;

    printf("Welcome to Hana Game Store!\n");
    printf("Silahkan mengisi data diri anda\n");

    printf("Nama: ");
    scanf(" %s", &nama);
    printf("Nickname: ");
    scanf(" %s", &nickname);
    printf("\n================================\n");

    printf("Silahkan memilih game kami (1-4)\n");
    printf("1. Run Astronout - IDR 50K\n");
    printf("2. Run Mushroom - IDR 40K\n");
    printf("3. Battle Gun - IDR 100K\n");
    do
    {
        printf("\nJadi mau yang mana? ");
        scanf("%d", &pilih_game);

        printf("Apa ada pilihan lain? (y/t): ");
        scanf(" %c", &quest);
    } while (quest=='y'||'Y');
    

    if (pilih_game == 1)
    {
       printf("Game pilihan anda adalah Run Atronout.\n Harga yang anda dapatkan sebesar IDR 50K");
    }
    else if (pilih_game == 1 & 2)
    {
        printf("Game pilihan anda adalah Run Atronout dan Run Mushroom.\n");
        total= 50+40;
        printf("Harga yang anda dapatkan sebesar IDR %dK", total);
    }
    else if (pilih_game == 1 & 3)
    {
        printf("Game pilihan anda adalah Run Atronout dan Battle Gun.\n");
        total= 50+100;
        printf("Harga yang anda dapatkan sebesar IDR %dK", total);
    }
    else if (pilih_game == 2)
    {
       printf("Game pilihan anda adalah Run Mushroom.\n Harga yang anda dapatkan sebesar IDR 40K");
    }
    else if (pilih_game == 2 & 1)
    {
        printf("Game pilihan anda adalah Run Mushroom dan Run Atronout.\n");
        total= 50+40;
        printf("Harga yang anda dapatkan sebesar IDR %dK", total);;
    }
    else if (pilih_game == 2 & 3)
    {
        printf("Game pilihan anda adalah Run Mushroom dan Battle Gun.\n");
        total= 40+100;
        printf("Harga yang anda dapatkan sebesar IDR %dK", total);
    }
    else if (pilih_game == 3)
    {
       printf("Game pilihan anda adalah Run Mushroom.\n Harga yang anda dapatkan sebesar IDR 100K");
    }
    else if (pilih_game == 3 & 1)
    {
        printf("Game pilihan anda adalah Battle Gun dan Run Atronout.\n");
        total= 50+100;
        printf("Harga yang anda dapatkan sebesar IDR %dK", total);
    }
    else if (pilih_game == 3 & 2)
    {
        printf("Game pilihan anda adalah Battle Gun dan Run Mushroom.\n");
        total= 40+100;
        printf("Harga yang anda dapatkan sebesar IDR %dK", total);
    }
    
    return 0;
}