#include <iostream>

using namespace std;

int main() {
    int nilai;
    cout << "Masukkan nilai: "; 
    cin >> nilai;   // nilainya di input

    if (nilai >= 90) {
    cout << "Selamat! Anda mendapatkan nilai A." << endl;   // Kalo dapet nilai 100 ato 90 bakal dapet nilai A.
    } else if (nilai >= 80 && nilai < 90) {
    cout << "Anda mendapatkan nilai B." << endl;    // Kalo dapet nilai dibawah 90 ato 80 bakal dapet nilai B.
    } else if (nilai >= 70 && nilai < 80) {
    cout << "Anda mendapatkan nilai C." << endl;    // Kalo dapet nilai dibawah 80 ato 70 bakal dapet nilai C.
    } else if (nilai >= 60 && nilai < 70) {
    cout << "Anda mendapatkan nilai D." << endl;    // Kalo dapet nilai dibawah 70 ATO 60 bakal dapet nilai D.
    } else {
    cout << "Anda mendapatkan nilai E." << endl;    // Kalo dapet nilai dibawah 60 bakal dapet nilai E.
    }

    return 0;
}