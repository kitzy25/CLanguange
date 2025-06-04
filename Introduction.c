#include<stdio.h>

int main(){

    printf("Hello World!\n"); // Printf -> Sistem akan ngeprint sesuai dengan data yang kita input
    printf("\tWelcome to the C\n");
    printf("Welcome to Coding \"JAVA\".");

    // \n -> untuk enter atau bikin line baru
    // \t -> untuk mengetab atau seperti membuat paragraf

    
    // int -> Angka %d
    int angka = 10;
    int angka1 = 20;
    printf("%d\n", angka);
    
    // float -> angka decimal %f
    float decimal = 5.99;
    printf("%f\n", decimal);

    // char (%c) -> huruf besar dan huruf kecil dalam bytes yang tertentu
    char huruf = 'D';
    printf("%c\n", huruf);

    // Contoh Kalimat Variable
    printf("Umur saya adalah %d dan %d dan Huruf nya dari %c.\n", angka, angka1, huruf);


    // MATHEMATICS
    // OPERATOR 
    // + -> tambah
    // - -> pengurangan
    // * -> Perkalian
    // / -> pembagian

    int x = 5;
    int y = 6;
    int sum = x + y;
    printf("%d", sum);

    return 0; // untuk ngereturn
}

