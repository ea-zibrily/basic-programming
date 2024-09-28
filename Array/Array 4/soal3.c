#include <stdio.h>
//memanggil library stdbool.h karena menggunakan tipe data boolean
#include <stdbool.h>
//prototype fungsi
bool equalIgnoreCase(char str1[], char str2[20]);
void hasilequalIgnoreCase(char str1[], char str2[20]);

int main()
{
  //deklarasi variabel
	char kat1[50], kat2[50];

  printf("Masukkan kalimat 1: ");
  scanf("%s", &kat1);
  printf("Masukkan kalimat 2: ");
  scanf("%s", &kat2);

	hasilequalIgnoreCase(kat1, kat2);

	return 0;
}

//membuat fungsi equalIgnoreCase
bool equalIgnoreCase(char str1[], char str2[20])
{
	int i = 0;
	int len1 = sizeof (str1) / sizeof (str1[0]);
	int len2 = sizeof (str2) / sizeof (str2[0]);

	if (len1 != len2){
    return false;
  }
//menggunakan while untuk menentukan persamaan kata
	while (i < len1) {

		if (str1[i] == str2[i]) {
			i++;
		}
		else if (!((str1[i] >= 'a' && str1[i] <= 'z')
				|| (str1[i] >= 'A' && str1[i] <= 'Z'))) {
			return false;
		}
		else if (!((str2[i] >= 'a' && str2[i] <= 'z')
				|| (str2[i] >= 'A' && str2[i] <= 'Z'))) {
			return false;
		}
		else {
			if (str1[i] >= 'a' && str1[i] <= 'z') {
				if (str1[i] - 32 != str2[i])
					return false;
			}
			else if (str1[i] >= 'A' && str1[i] <= 'Z') {
				if (str1[i] + 32 != str2[i])
					return false;
			}
			i++;

		}
	}
	return true;
}
//membuat fungsi hasilequalIgnoreCase
void hasilequalIgnoreCase(char str1[], char str2[20])
{
	bool res = equalIgnoreCase(str1, str2);

	if (res == true){
    printf("2 Kata/Kalimat Sama\n");
  }
	else{
    printf("2 Kata/Kalimat Tidak Sama\n");
  }
}