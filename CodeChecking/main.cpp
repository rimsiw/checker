#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int x;
    string text;
    string y;
    string odp;

    cout << "Wybierz zadanie 1: ";
    cin >> x;

    if(x == 1) {
        ifstream wyciag("checking/cpp/cout/text.txt");
        ifstream wyciag2("checking/cpp/cout/cout.txt");

        while(getline (wyciag, text)) {
            cout << text;
        }
        cout << "Jesteś gotow* na rozpoczecie zadania? (t/n): ";
        cin >> y;

        wyciag.close();
        if(y == "t") {
            string w2;
            while (getline (wyciag2, w2)) {
                cin >> odp;
                if(odp == w2) {
                    cout << "Bardzo dobrze!";
                }
                else {
                    cout << "Ups! Poprawne rozwiazanie to: " << w2;
                }
            }
        }
        else if(y == "n") {
            cout << "Koncze.";
        }
        else {
            cout << "Koncze.";
        }
        wyciag2.close();
    }
    else {
        cout << "Koncze.";
    }
    return 0;
}
