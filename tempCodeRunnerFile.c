#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;

    // Meminta pengguna untuk memasukkan angka
    printf("Masukkan sebuah angka: ");
    
    // Memeriksa apakah input adalah angka
    if (scanf("%d", &num) != 1) {
        printf("Bukan Angka\n");
        return 1; // Keluar dari program jika input bukan angka
    }

    // Memeriksa apakah angka genap atau ganjil
    if (num % 2 == 0) 
        printf("Angka %d adalah Genap\n", num);
    else
        printf("Angka %d adalah Ganjil\n", num);

    return 0;
}
