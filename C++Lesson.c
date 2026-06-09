#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>


struct Transaction {
    std::string description;
    double amount;
    std::string category;

    Transaction() : description(""), amount(0.0), category("") {}
    Transaction(std::string desc, double amt, std::string cat)
        : description(desc), amount(amt), category(cat) {}
};

void printSeparator() {
    std::cout << "-------------------------------------------\n";
}

void showMenu() {
    std::cout << "\n===== PERSONAL BUDGET TRACKER =====\n";
    std::cout << "1. Harcama/Gelir Ekle\n";
    std::cout << "2. Tum Islemleri Goruntule\n";
    std::cout << "3. Toplam Bakiyeyi Hesapla ve Analiz Et\n";
    std::cout << "4. Kategoriye Gore Filtrele\n";
    std::cout << "5. Sistemden Cik\n";
    std::cout << "Secenek: ";
}

int main() {
    /*
    // TOPIC 1: BASIC INPUT/OUTPUT AND NAMESPACES
    // C'deki printf ve scanf'i birakip modern C++ stream yapısına geciyoruz.
    // printf("%d", x) yerine cout kullanmak cok daha clean.

    std::cout << "C++ learning journey started!" << std::endl;

    int age;
    std::string fullName;

    std::cout << "Enter your age: ";
    std::cin >> age;

    // cin'den sonra getline kullaninca bufferda kalan '\n' sikinti cikariyor, ignore eklemek sart.
    // i spend 30 minutes to debug this buffer issue lol
    std::cin.ignore();

    std::cout << "Enter your full name: ";
    std::getline(std::cin, fullName);

    std::cout << "Hello " << fullName << ", you are " << age << " years old." << std::endl;
    */

    /*
    // TOPIC 2: VARIABLES, CONSTANTS AND TYPE CASTING
    // C++ style casting explicit ve daha g�venli. static_cast kullanmak �neriliyor.

    const double TAX_RATE = 0.18; // read-only variable
    int rawPrice = 250;

    // C-style: double finalPrice = (double)rawPrice * (1 + TAX_RATE);
    // C++ style is much better and safe:
    double finalPrice = static_cast<double>(rawPrice) * (1.0 + TAX_RATE);

    std::cout << "Raw input: " << rawPrice << " | Taxed price: " << finalPrice << std::endl;


    auto myInferredVariable = 42.5; // resolved as double
    std::cout << "Auto dynamic type logic test: " << myInferredVariable << std::endl;
    */

    /*
    // TOPIC 3: CONTROL FLOW AND RANGE-BASED FOR LOOPS
     
    int scores[] = {85, 92, 78, 95, 88};
    int totalScore = 0;

    // Modern syntax look clean: for (int score : scores)
    // C'deki gibi index takibi yapmaya gerek kalmadi unless you need index
    for (const int& score : scores) {
        totalScore += score;
        if (score >= 90) {
            std::cout << "High performance detected: " << score << std::endl;
        }
    }
    std::cout << "Average loop score: " << totalScore / 5.0 << std::endl;
    */

    /*
    // TOPIC 4: FUNCTION OVERLOADING AND DEFAULT PARAMETERS
    // C'de ayni isimde fonksiyon yazamazdik, C++ signature'a bakip ayirt edebiliyor. Huge improvement.
    // local testing inline functions

    struct LocalLogger {
        static void logMessage(std::string msg) {
            std::cout << "[LOG]: " << msg << std::endl;
        }
        static void logMessage(std::string msg, int errorCode) { // overloaded function
            std::cout << "[ERROR LOG - CODE " << errorCode << "]: " << msg << std::endl;
        }
        static void printConfig(std::string theme = "Dark", bool isElegant = true) { // default arguments
            std::cout << "Config -> Theme: " << theme << ", CyberElegantMode: " << (isElegant ? "ON" : "OFF") << std::endl;
        }
    };

    LocalLogger::logMessage("System initialized successfully.");
    LocalLogger::logMessage("Database connection failed", 503);
    LocalLogger::printConfig(); // uses default values
    LocalLogger::printConfig("Slate", false); // overrides defaults
    */

    /*
    // TOPIC 5: VECTOR CONTAINER & ALGORITHM LIBRARY
    // C++'in en guclu yanlar�ndan biri: STL. C'deki dinamik array yonetimi (malloc/realloc) tam bir memory leak yuvas�yd�.
    // std::vector boyutu dinamik olarak kendi y�netiyor.

    std::vector<int> numbers;
    numbers.push_back(45);
    numbers.push_back(12);
    numbers.push_back(89);
    numbers.push_back(23);

    std::cout << "Initial vector size: " << numbers.size() << std::endl;

    // Sorting vector using <algorithm> library.
    std::sort(numbers.begin(), numbers.end());

    std::cout << "Sorted elements: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    numbers.pop_back(); // removes the last element
    std::cout << "Size after pop: " << numbers.size() << std::endl;
    */



    // Butce ve Harcama Analiz Sistemi


    std::vector<Transaction> budgetBook;
    int choice = 0;

    budgetBook.push_back(Transaction("Sunucu Barindirma Ucreti", -450.0, "Infrastructure"));
    budgetBook.push_back(Transaction("Serbest Calisan ın UI Kullanici Arayuzu ", 3500.0, "Income"));
    budgetBook.push_back(Transaction("Siber Guvenlik Kursu", -200.0, "Education"));
    budgetBook.push_back(Transaction("Kahve ve Kodlama Atistirmalik", -85.5, "Food"));
    while (true) {
        showMenu();
        if (!(std::cin >> choice)) {
            std::cout << "Gecersiz giris! Lutfen sayi girin.\n";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            continue;
        }

        if (choice == 5) {
            std::cout << "Butce takip uygulamasindan cikiliyor. Gule gule!\n";
            break;
        }

        if (choice == 1) {
            Transaction t;
            std::cin.ignore();
            std::cout << "Aciklama Giriniz: ";
            std::getline(std::cin, t.description);

            std::cout << "Gelir icin pozitif, Gider icin negatif deger: ";
            while (!(std::cin >> t.amount)) {
                std::cout << "Gecersiz miktar, tekrar dene: ";
                std::cin.clear();
                std::cin.ignore(10000, '\n');
            }

            std::cin.ignore();
            std::cout << "Kategori girin (Gida, Gelir, Altyapi, Egitim vb.): ";
            std::getline(std::cin, t.category);

            budgetBook.push_back(t);
            std::cout << "Islem basariyla eklendi.\n";

        } else if (choice == 2) {
            printSeparator();
            std::cout << std::left << std::setw(25) << "Tanim"
                      << std::setw(12) << "Miktar"
                      << "Kategori" << "\n";
            printSeparator();

            for (size_t i = 0; i < budgetBook.size(); ++i) {
                std::cout << std::left << std::setw(25) << budgetBook[i].description
                          << "$" << std::setw(11) << budgetBook[i].amount
                          << budgetBook[i].category << "\n";
            }
            printSeparator();

        } else if (choice == 3) {
            double totalIncome = 0;
            double totalExpense = 0;

            for (size_t i = 0; i < budgetBook.size(); ++i) {
                if (budgetBook[i].amount > 0) totalIncome += budgetBook[i].amount;
                else totalExpense += budgetBook[i].amount;
            }

            double netBalance = totalIncome + totalExpense;

            printSeparator();
            std::cout << "MALI RAPOR:n";
            std::cout << "Toplam Gelir:  $" << totalIncome << "\n";
            std::cout << "Toplam Gider: $" << totalExpense << "\n";
            std::cout << "Net Durum:       $" << netBalance << "\n";

            if (netBalance < 0) {
                std::cout << "Uyari: Butceniz acik! Harcama aliskanliklarinizi kontrol altina alin.n";
            } else {
                std::cout << "Durum: Saglikli denge. Devam edin.\n";
            }
            printSeparator();

        } else if (choice == 4) {
            std::cin.ignore();
            std::string filterCat;
            std::cout << "Filtrelemek icin kategori adini girin:";
            std::getline(std::cin, filterCat);

            printSeparator();
            std::cout << "Kategoriye gore filtrelenmis sonuular: " << filterCat << "\n";
            bool found = false;

            for (size_t i = 0; i < budgetBook.size(); ++i) {
                if (budgetBook[i].category == filterCat) {
                    std::cout << "- " << budgetBook[i].description << ": $" << budgetBook[i].amount << "\n";
                    found = true;
                }
            }
            if (!found) std::cout << "Bu kategoride hicbir oge bulunamadi.n";
            printSeparator();
        } else {
            std::cout << "Bilinmeyen secim mantigi. Tekrar deneyin.\n";
        }
    }
    return 0;
}
