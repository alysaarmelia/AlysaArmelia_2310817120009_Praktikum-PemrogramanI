#include <stdio.h>

int main()
{
    char nama[50];
    char nim[50];
    char paralel[50];
    char tempat_tanggal_lahir[50];
    char alamat[99];
    char hobby[50];
    char nohp[50];

    printf("Nama                   :");
    gets(nama);
    printf("NIM                    :");
    gets(nim);
    printf("Kelas Paralel          :");
    gets(paralel);
    printf("Tempat/Tanggal lahir   :");
    gets(tempat_tanggal_lahir);
    printf("Alamat                 :");
    gets(alamat);
    printf("Hobby                  :");
    gets(hobby);
    printf("No.Hp                  :");
    gets(nohp);
    printf("\n");

    
    printf("Nama                   :%s\n", nama);
    printf("NIM                    :%s\n", nim);
    printf("Kelas Paralel          :%s\n", paralel);
    printf("Tempat/Tanggal Lahir   :%s\n", tempat_tanggal_lahir);
    printf("Alamat                 :%s\n", alamat);
    printf("Hobby                  :%s\n", hobby);
    printf("No.Hp                  :%s\n", nohp);
}