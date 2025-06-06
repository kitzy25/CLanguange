#include<stdio.h>

int main(){
    
    int umur;
    char name[100];
    char domisili[50];

    // Scanf -> Untuk mengscan input dari user
    // Apabila ingin mengprint 1 kalimat dari scanf gunakan format specifier "%[^\n]"
    // dan jika sebuah text ingin ada spasi " %[^\n]"
    
    printf("Input your name: ");
    scanf("%s", name);
    printf("Input your Domisili: ");
    scanf("%s", domisili);
    printf("Input your age: ");
    scanf("%d", &umur);
    
    printf("Nama : %s\n", name);
    printf("Domisili : %s\n", domisili);
    printf("Usia : %d\n", umur);
    
    return 0;
}
