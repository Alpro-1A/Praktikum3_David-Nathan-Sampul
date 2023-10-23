#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cout << "Masukkan tiga angka: ";
    cin >> a >> b >> c;
    int terbesar = a;
    if (b > terbesar) {
        terbesar = b;
    }
    if (c > terbesar) {
        terbesar = c;
    }
    cout << "Angka terbesarnya adalah " << terbesar << endl; // ngambil salah satu angka yang paling gede

    return 0;
}