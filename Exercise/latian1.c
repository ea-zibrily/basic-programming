#include <stdio.h>

int main(){
    char nama_lengkap[100];
    char nickname [60];
    char role[45];
    
        printf("DATA DIRI PLAYER\n");

        printf("\nNama Lengkap: ");
        scanf("%[^\n]s", &nama_lengkap);

        printf("Nickname: ");
        scanf("%s", &nickname);

        printf("Role: ");
        scanf("%s", &role);

        printf("\n------------------\n");
        printf("Nama Lengkap Player: %s\n", nama_lengkap);
        printf("Nickname Player: %s\n", nickname);
        printf("Role Player: %s\n", role);
        printf("Welcome to the Beach!");
        return 0;
}