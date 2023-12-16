#include <stdio.h>

int main()
{
    float m,n;
    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &m);
    printf("Masukkan Nilai Kedua   : ");
    scanf("%f", &n);
    float o =m+n;
    printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"\n\n", m,n,o);
    return 0;
}