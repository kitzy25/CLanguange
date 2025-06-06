#include<stdio.h>

int main(){
    
    int umur;
    char name[100];
    char domisili[50];

    // Scanf -> Untuk mengscan input dari user
    
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
