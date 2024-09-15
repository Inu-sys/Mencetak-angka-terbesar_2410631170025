#include <iostream>
using namespace std;

int main () {
    int angka1, angka2, angka3  ;
    cout << "Masukan Angka pertama:";
    cin >> angka1;
    cout << "Masukan Angka kedua:";
    cin >> angka2;
    cout << "Masukan angka ketiga:";;
    cin >> angka3;

    int terbesar = angka1;
    if (angka2>terbesar) {
        terbesar=angka2;
    }
    if (angka3>terbesar) {
        terbesar=angka3;
    }

    cout << "Angka terbesar adalah:"<< terbesar<< endl;
    return 0;
}
