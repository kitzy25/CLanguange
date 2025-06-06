#include <stdio.h>

int main(){

    int age; // Buat integer variabel
    age = 25; // Untuk mengdeklarasi sebuah variabel dengan label atau nama
    int score = 100; // Bisa langsung di deklarasi

    //  TIPE - TIPE DATA DALAM ALGORITMA

    // INTEGER / INT
    // Tipe data ini menyimpan semua jenis angka

    int age; // untuk mengdeklarasi atau label
    int score = 100; // mengdeklarsi dan menginisialisasi
    score = 90; // memodifikasi
    printf("%d", score); // Format specifier int -> %d 

    // FLOAT
    // Tipe data ini dapat menyimpan angka pecahan ataupun
    // desimal dengan batasan hanya bisa menyimpan maksimal 
    // 6-7 digit desimal

    float price;
    price = 10.3;
    printf("Price: %f\n", price); // Format specifier float -> %f
    /* Dalam float kita dapat memanipulasi mau berapa angka di belakang koma dengan menggunakan format %2f(2 angka di belakang koma), %4f (4 angka di belakang koma)*/

    // DOUBLE
    // Tipe data ini dapat menyimpan angka pecahan ataupun
    // desimal yang lebih banyak daripada float

    double pi = 3.14159;
    printf("Pi value: %lf\n", pi); // Format Specifier double -> %lf / %llf

    // CHAR
    // Tipe data ini hanya dapat menyimpan 1 karakter huruf,
    // angka atau angka ASCII

    char grade = 'A';
    printf("Grade: %c\n", grade); // Format Specifier char -> %c

    // ASCII -> Nilai numerik yang mewakili sebuah huruf
    // Contoh menggunakan ASCII
    // Penggunaan ASCII biasanya dapat dilihat di Tabel ASCII
    char myChar = 65; // Karena nilai ASCII dari A adalah 65
    printf("Character with ASCII 65 is %c\n", myChar);

    /* 
    Untuk Penggunaan tipe data ada dua yaitu tipe Implicit Conversion (otomatis) dan Explicit Conversion (manual),
    
    Contoh Implicit Conversion: 
    jika kamu memberikan sebuah tipe data dalam nilai angka (int) dan diberikan ke tipe data float, 
    maka nilai tersebut secara otomatis akan menjadi desimal.
    
    Contoh Explicit Conversion:
    float sum = (float) 5 / 2 -> secara manual kita mengubah niali int ke desimal atau float
    printf("%f", sum) -> otomatis format specifiernya menggunakan %f
    */
      
    // CONTOH PENGGUNAAN TIPE DATA
    int americano, caffelatte, macchiato;
    float aCost, cCost, mCost;

    americano = caffelatte = macchiato = 1;
    int total_items = americano + caffelatte + macchiato;

    aCost = 5.99;
    cCost = 10.50;
    mCost = 12.00;

    float total_cost_a, total_cost_c, total_cost_m;
    total_cost_a = americano * aCost;
    total_cost_c = caffelatte * cCost;
    total_cost_m = macchiato * mCost;

    float total_payment = total_cost_a + total_cost_a + total_cost_m;

    char currency = '$';

    printf("====== SBACKS Payment ======\n");
    printf("|| 1. Americano %d %.2f     ||\n", americano, total_cost_a);
    printf("|| 2. Caffe Latte %d %.2f  ||\n", caffelatte, total_cost_c);
    printf("|| 3. Macchiato %d %.2f    ||\n", macchiato, total_cost_m);
    printf("|| Total Items: %d          ||\n", total_items);
    printf("|| Total Payment: %c %.2f  ||\n", currency, total_payment);
    printf("========= Thank You =========\n");

    // OUTPUT
    /*
    ====== SBACKS Payment ======
    || 1. Americano 1 5.99     ||
    || 2. Caffe Latte 1 10.50  ||
    || 3. Macchiato 1 12.00    ||
    || Total Items: 3          ||
    || Total Payment: $ 23.98  ||
    ========= Thank You =========
    */

    // STRING
    char str[] = "Hello World!"; // [] -> untuk menyimpan bytes
    printf("%s", str); // Format Specifier untuk string -> %s

    return 0;
}
