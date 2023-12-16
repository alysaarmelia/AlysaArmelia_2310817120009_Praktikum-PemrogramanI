#include <stdio.h>

int main() {
    int pilihan_program;
    char NAMAANDA[20] = "Alysa Armelia";
    float nilai1;
    float nilai2;
    float keseluruhan;

    while (1) 
    {
        printf("Pilihan program \n");
        printf("1. Penjumlahan \n");
        printf("2. Pengurangan \n");
        printf("3. Perkalian \n");
        printf("4. Pembagian \n");
        printf("5. exit \n");

        printf("Masukkan pilihan Anda: ");
        scanf("%d", & pilihan_program);
    
        if (pilihan_program == 5) {
            printf("Terimakasih, telah menggunakan kalkulator %s", NAMAANDA);
            break;

        }else if(pilihan_program > 5 || pilihan_program < 1) {
            printf("Pilihan Anda salah, silakan coba lagi.\n");
            printf("\n");
            continue;
        }
        printf("Masukkan nilai pertama: ");
        scanf("%f", &nilai1);
        printf("Masukkan bilangan kedua: ");
        scanf("%f", &nilai2);

        if (pilihan_program == 1) {
            keseluruhan = nilai1 + nilai2;
            printf("Hasil penjumlahan antara %.2f dan %.2f adalah %.2f\n", nilai1, nilai2, keseluruhan);

        } else if (pilihan_program == 2) {
            keseluruhan = nilai1 - nilai2;
            printf("Hasil pengurangan antara %.2f dan %.2f adalah %.2f\n", nilai1, nilai2, keseluruhan);

        } else if (pilihan_program == 3) {
            keseluruhan = nilai1 * nilai2;
            printf("Hasil perkalian antara %.2f dan %.2f adalah %.2f\n", nilai1, nilai2, keseluruhan);
            printf("\n");

        } else if (pilihan_program == 4) {

            if (nilai2 != 0) {
                keseluruhan = nilai1 / nilai2;
                printf("Hasil pembagian antara %.2f dan %.2f adalah %.2f\n", nilai1, nilai2, keseluruhan);

            } else {
                printf("Pembagian dengan nol tidak diizinkan.\n");
            }
        } 
    }
return 0;
}