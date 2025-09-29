#include <iostream>
using namespace std;

class Zlomek {
    private:
    double citatel = 0;
    double jmenovatel = 0;

    public:
    void setCitatel(double citatelNum) {
        citatel = citatelNum;
    };
    void setJmenovatel(double jmenovatelNum) {
        jmenovatel = jmenovatelNum;
    };
    void vypocetZlomku() {
        cout << "Vysledek zlomku je: " << citatel/jmenovatel << endl;
    }
    void zobrazCitatel() {
        cout << "---Citatel je: " << citatel << endl;
    }
    void zobrazJmenovatel() {
        cout << "Jmenovatel je: " << jmenovatel << endl;
    }
};

int main() {
    Zlomek zlomek;

    double jmenovatel;
    double citatel;
    int volba;

    do {
        cout << "1. pro napsani zlomku, 2. pro konec programu" << endl;

        cin >> volba;

        switch (volba) {
            case 1:
                cout << "Zadej prosim hodnoty zlomku." << endl;
                cout << "Citatel: " << endl;
                cin >> citatel;
                cout << "Jmenovatel: " << endl;
                cin >> jmenovatel;

                zlomek.setCitatel(citatel);
                zlomek.setJmenovatel(jmenovatel);
                zlomek.zobrazCitatel();
                zlomek.zobrazJmenovatel();
                zlomek.vypocetZlomku();
                break;

            case 2:
                cout << "Konec Programu." << endl;
                break;

            default:
                cout << "Nedavej jinci cislo." << endl;
                break;

        }
    } while (volba != 2);

    return 0;
}