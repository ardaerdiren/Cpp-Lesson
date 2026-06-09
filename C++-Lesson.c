#include <stdio.h>

int main() {

    // ilk deðiþken denemeleri

    /*
    int yas = 19;
    float ortalama = 3.14;
    char harf = 'A';

    printf("Yas: %d\n", yas);
    printf("Ortalama: %.2f\n", ortalama);
    printf("Harf: %c\n", harf);
    */


    // kullanýcýdan veri alma

    /*
    int sayi;

    printf("Bir sayi gir: ");
    scanf("%d", &sayi);

    printf("Girdigin sayi: %d", sayi);
    */


    // if else çalýþmasý

    /*
    int sayi;

    printf("Sayi giriniz: ");
    scanf("%d", &sayi);

    if(sayi > 0) {

        printf("Pozitif sayi");

    }
    else if(sayi < 0) {

        printf("Negatif sayi");

    }
    else {

        printf("Sayi sifir");

    }
    */


    // çift tek sayi kontrol

    /*
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    if(number % 2 == 0) {

        printf("Cift sayi");

    }
    else {

        printf("Tek sayi");

    }
    */


    // not hesaplama

    /*
    int notDegeri;

    printf("Not gir: ");
    scanf("%d", &notDegeri);

    if(notDegeri >= 90) {

        printf("AA");

    }
    else if(notDegeri >= 80) {

        printf("BB");

    }
    else if(notDegeri >= 70) {

        printf("CC");

    }
    else {

        printf("Kaldin");

    }
    */


    // switch case çalýþma

    /*
    int gun;

    printf("Gun numarasi gir: ");
    scanf("%d", &gun);

    switch(gun) {

        case 1:
            printf("Pazartesi");
            break;

        case 2:
            printf("Sali");
            break;

        case 3:
            printf("Carsamba");
            break;

        default:
            printf("Hatali giris");
    }
    */


    // for döngüsü

    /*
    int i;

    for(i = 1; i <= 10; i++) {

        printf("%d\n", i);

    }
    */


    // while döngü

    /*
    int i = 0;

    while(i < 5) {

        printf("Hello\n");

        i++;
    }
    */


    // 1 den 100e kadar çift sayýlar

    /*
    int i;

    for(i = 1; i <= 100; i++) {

        if(i % 2 == 0) {

            printf("%d\n", i);

        }

    }
    */


    // çarpým tablosu

    /*
    int sayi;
    int i;

    printf("Bir sayi gir: ");
    scanf("%d", &sayi);

    for(i = 1; i <= 10; i++) {

        printf("%d x %d = %d\n", sayi, i, sayi * i);

    }
    */


    // fonksiyon mantýðý

    /*
    int toplam(int a, int b) {

        return a + b;

    }

    int sonuc;

    sonuc = toplam(5, 8);

    printf("Sonuc: %d", sonuc);
    */


    // array

    /*
    int sayilar[5] = {10,20,30,40,50};

    int i;

    for(i = 0; i < 5; i++) {

        printf("%d\n", sayilar[i]);

    }
    */


    // array ortalama hesaplama

    /*
    int notlar[5] = {60,70,80,90,100};

    int toplam = 0;
    int i;

    for(i = 0; i < 5; i++) {

        toplam = toplam + notlar[i];

    }

    printf("Ortalama: %d", toplam / 5);
    */


    // string denemeleri

    /*
    char isim[20];

    printf("Isim gir: ");
    scanf("%s", isim);

    printf("Merhaba %s", isim);
    */

    // pointer deneme

    /*
    int sayi = 25;

    int *ptr;

    ptr = &sayi;

    printf("Sayi degeri: %d\n", sayi);
    printf("Adres: %p\n", ptr);
    printf("Pointer ile deger: %d", *ptr);
    */


    // struct konusu

    /*
    struct Ogrenci {

        char isim[20];
        int yas;
        float ortalama;

    };

    struct Ogrenci ogr1 = {"Arda", 19, 3.20};

    printf("Isim: %s\n", ogr1.isim);
    printf("Yas: %d\n", ogr1.yas);
    printf("Ortalama: %.2f\n", ogr1.ortalama);
    */


    // dosya iþlemleri denemesi

    /*
    FILE *dosya;

    dosya = fopen("notlar.txt", "w");

    fprintf(dosya, "Merhaba dosya islemleri");

    fclose(dosya);

    printf("Dosya olusturuldu");
    */


    // mini project - basit hesap makinesi

    int secim;
    float sayi1, sayi2;

    printf("1-Toplama\n");
    printf("2-Cikarma\n");
    printf("3-Carpma\n");
    printf("4-Bolme\n");

    printf("Secim yap: ");
    scanf("%d", &secim);

    printf("Birinci sayi: ");
    scanf("%f", &sayi1);

    printf("Ikinci sayi: ");
    scanf("%f", &sayi2);

    if(secim == 1) {
        printf("Sonuc: %.2f", sayi1 + sayi2);
    }
    else if(secim == 2) {
        printf("Sonuc: %.2f", sayi1 - sayi2);
    }
    else if(secim == 3) {
        printf("Sonuc: %.2f", sayi1 * sayi2);
    }
    else if(secim == 4) {
        if(sayi2 == 0) {
            printf("0'a bolunemez");
        }
        else {
            printf("Sonuc: %.2f", sayi1 / sayi2);
        }
    }
    else {
        printf("Hatali secim");
    }

    return 0;
}

