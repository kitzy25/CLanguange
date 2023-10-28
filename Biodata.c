#include <stdio.h>
int main (){

    char nama[105];
    char alamat[400];
    int umur;
    float berat_badan, tinggi_badan;
    char jenis_kelamin[105];

    printf("Nama :\n");
    scanf("%[^\n]", nama);
    
    printf("Alamat :\n");
    scanf(" %[^\n]", alamat);
    
    printf("Umur :\n");
    scanf("%d", &umur);
    
    printf("Berat Badan :\n");
    scanf("%f", &berat_badan);
    
    printf("Tinggi Badan :\n");
    scanf("%f", &tinggi_badan);
    
    printf("Jenis Kelamin :\n");
    scanf(" %[^\n]", &jenis_kelamin);
    
    printf("===Data Yang Di Input===\n");
    printf("Nama          : %s\n", nama);
    printf("Alamat        : %s\n", alamat);
    printf("Umur          : %d\n", umur);
    printf("Berat Badan   : %.2f KG\n", berat_badan);
    printf("Tinggi Badan  : %.2f CM\n", tinggi_badan);
    printf("Jenis Kelamin : %s\n", jenis_kelamin);

    return 0;
}