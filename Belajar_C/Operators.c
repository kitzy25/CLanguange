#include<stdio.h>

int main(){

    int a, b;
    a = 10;
    b = 15;

    // Arithmetic Operators
    // Addition / Penambahan -> +
    int sum = a + b;
    printf("%d\n", sum);

    // Subtraction / Pengurangan -> -
    int sub = b - a;
    printf("%d\n", sub);

    // Multiplication / Perkalian -> *
    int multi = a * b;
    printf("%d\n", multi);

    // Division / Pembagian -> /
    float div = b / a;
    printf("%f\n", div);

    // Modulus / Modulo -> %
    // Akan mengambil sisa dari hasil pembagian
    int mod = b % a;
    printf("%d\n", mod);

    // Increment -> menambah nilai sebanyak 1x
    printf("Inc : %d\n", ++a);
    // Decrement -> mengurangi nilai sebanyak 1x
    printf("Dec : %d\n", --a);
    
    // COMPARISION OPERATOR
    // Sama dengan / Equal to -> ==
    if (a == b){
        printf("SAMA\n");
    } else {
        printf("Tidak Sama\n");
    }

    // Not Equal / tidak sama dengan -> !=
    if (a != b){
        printf("Tidak sama\n");
    } else {
        printf("Sama\n");
    }

    // Greater Than / Lebih Besar dari -> >
    printf("%d\n", b > a);

    // Less than / Lebih kecil dari -> <
    printf("%d\n", b < a);

    // Greater than or equal to / Lebih besar sama dengan -> >=
    if (a >= 10){
        printf("Sama atau Lebih Besar\n");
    } else{
        printf("Lebih kecil\n");
    }

    // Less than or equal to / Lebih Kecil sama dengan -> >=
    if (b <= 10){
        printf("Sama atau Lebih Kecil\n");
    } else{
        printf("Lebih Besar\n");
    }

    // LOGICAL OPERATOR
    // && -> Dan
    if(a < b && a < 11){
        printf("KECIL\n");
    } else if (a > b && a >= 10)
    {
        printf("BESAR\n");
    }
    
    // || -> Atau
    // a = 10 b = 15
    if(a < b || a > 11){
        printf("KECIL\n");
    }

    // ! -> NOT
    printf("%d\n", !a);

    return 0;
}