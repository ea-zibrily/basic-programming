#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//menentukan nilai baris - nomor
#define BARIS 10
#define KOLOM 10
#define ATAS 0
#define KANAN 1
#define BAWAH 2
#define KIRI 3
#define NOMOR 4
//menentukan nilai gas_atas - gas_kiri
#define GAS_ATAS curr_BARIS - 1 >= 0 && a[curr_BARIS - 1][curr_KOLOM] == '.'
#define GAS_KANAN curr_KOLOM + 1 < KOLOM && a[curr_BARIS][curr_KOLOM + 1] == '.'
#define GAS_BAWAH curr_BARIS + 1 < BARIS && a[curr_BARIS + 1][curr_KOLOM] == '.'
#define GAS_KIRI curr_KOLOM - 1 >= 0 && a[curr_BARIS][curr_KOLOM - 1] == '.'


int main()
{
	//deklarasi variabel a dengan arrat BARIS dan KOLOM
	int a[BARIS][KOLOM], curr_BARIS = -1, curr_KOLOM = 0, no_posisi = 0;
	int i, j, dir;
	char huruf;
	bool posisi[4] = {false};
	//menggunakan srand untuk menentukan titik awal pengacakan nilai
	srand((unsigned) time(NULL));

	//menggunakan nested loop for
	for (i=0; i < BARIS; i++) 
	{
		for (j=0; j < KOLOM; j++) {
			a[i][j] = '.';
		}
	}
	//menggunakan nested loop for - while untuk menentukan pengacakan huruf
	for (huruf='A'; huruf <= 'Z'; huruf++)
	{
		while (no_posisi < NOMOR) {
			dir = rand() % NOMOR;

			if (dir == ATAS && !posisi[ATAS]) {
				if (GAS_ATAS) {
					a[--curr_BARIS][curr_KOLOM] = huruf;
					break;
				} else {
					posisi[ATAS] = true;
					no_posisi++;
				}
			} else if (dir == KANAN && !posisi[KANAN]) {
				if (GAS_KANAN) {
					a[curr_BARIS][++curr_KOLOM] = huruf;
					break;
				} else {
					posisi[KANAN] = true;
					no_posisi++;
				}
			} else if (dir == BAWAH && !posisi[BAWAH]) {
				if (GAS_BAWAH) {
					a[++curr_BARIS][curr_KOLOM] = huruf;
					break;
				} else {
					posisi[BAWAH] = true;
					no_posisi++;
				}
			} else if (dir == KIRI && !posisi[KIRI]) {
				if (GAS_KIRI) {
					a[curr_BARIS][--curr_KOLOM] = huruf;
					break;
				} else {
					posisi[KIRI] = true;
					no_posisi++;
				}
			}
		}

		for (i = 0; i < NOMOR; i++) {
			posisi[i] = false;
		}
		no_posisi = 0;
	}
	//menggunakan nested loop for untuk mencetak hasil pengacakan
	for (i=0; i < BARIS; i++) {
		for (j=0; j < KOLOM; j++) {
			printf("%c ", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}