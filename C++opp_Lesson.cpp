```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {

    // pointer ilk deneme

    /*
    int sayi = 25;

    int *ptr = &sayi;

    cout << "normal deger: " << sayi << endl;
    cout << "adres: " << ptr << endl;
    cout << "pointer ile deger: " << *ptr;
    */


    // pointer ile deger degistirme

    /*
    int number = 50;

    int *ptr = &number;

    *ptr = 100;

    cout << "yeni deger: " << number;
    */


    // dynamic memory mantigi

    /*
    int *ptr = new int;

    *ptr = 250;

    cout << *ptr;

    delete ptr;
    */


    // ilk class denemesi

    /*
    class Araba {

    public:

        string marka;
        int model;

    };

    Araba araba1;

    araba1.marka = "BMW";
    araba1.model = 2022;

    cout << araba1.marka << endl;
    cout << araba1.model;
    */


    // constructor konusu

    /*
    class Ogrenci {

    public:

        string isim;
        int yas;

        Ogrenci(string x, int y) {

            isim = x;
            yas = y;

        }
    };

    Ogrenci ogr1("Arda", 19);

    cout << ogr1.isim << endl;
    cout << ogr1.yas;
    */


    // encapsulation mantigi
    /*
    class Banka {

    private:

        int bakiye;

    public:

        void setBakiye(int x) {

            bakiye = x;

        }
        int getBakiye() {

            return bakiye;

        }
    };

    Banka hesap1;

    hesap1.setBakiye(7000);

    cout << hesap1.getBakiye();
    */


    // inheritance calismasi

    /*
    class Hayvan {

    public:

        void sesCikar() {

            cout << "hayvan ses cikardi" << endl;
        }
    };

    class Kedi : public Hayvan {

    public:

        void miyavla() {

            cout << "miyavv" << endl;

        }

    };

    Kedi k1;

    k1.sesCikar();
    k1.miyavla();
    */


    // polymorphism ilk mantik

    /*
    class Karakter {

    public:
        void saldir() {
            cout << "normal saldiri" << endl;
        }
    };

    class Savasci : public Karakter {

    public:
        void saldir() {

            cout << "kilic saldirisi" << endl;
        }
    };

    Savasci s1;

    s1.saldir();
    */


    // class icinde fonksiyon kullanimi

    /*
    class HesapMakinesi {

    public:
        int topla(int a, int b) {

            return a + b;
        }
        int carp(int a, int b) {

            return a * b;
        }
    };

    HesapMakinesi h1;

    cout << h1.topla(5, 7) << endl;
    cout << h1.carp(4, 3);
    */


    // kucuk inventory mantigi

    /*
    class Item {

    public:

        string isim;
        int damage;

        Item(string x, int y) {
            isim = x;
            damage = y;
        }
        void bilgiler() {

            cout << "item: " << isim << endl;
            cout << "damage: " << damage << endl;

        }

    };

    Item item1("AK47", 90);
    item1.bilgiler();
    */

    // final proje

    class Karakter {

    public:

        string isim;
        int can;
        int damage;
    
        Karakter(string x, int y, int z) {
            isim = x;
            can = y;
            damage = z;
        }
        void bilgiler() {
            cout << endl;
            cout << "karakter: " << isim << endl;
            cout << "can: " << can << endl;
            cout << "damage: " << damage << endl;
        }
        void saldir(Karakter &dusman) {
            dusman.can -= damage;
            cout << isim << " saldirdi!" << endl;
        }
    };
    string isim1, isim2;

    cout << "1. karakter ismi: ";
    cin >> isim1;

    cout << "2. karakter ismi: ";
    cin >> isim2;

    Karakter k1(isim1, 100, 20);
    Karakter k2(isim2, 100, 15);

    k1.saldir(k2);

    k1.bilgiler();
    k2.bilgiler();

    return 0;
}
```
