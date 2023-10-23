#include <iostream>

using namespace std;

int main() {
    int pilihan;
    float panjang, lebar, alas, tinggi;

    // pilihan - pilihannya

    cout << "1. Persegi" << endl;
    cout << "2. Persegi Panjang" << endl;
    cout << "3. Segitiga" << endl;
    cout << "Pilih yang ingin dihitung luasnya: ";
    cin >> pilihan;

    switch (pilihan) {  // nyari pilihan diantara 3 case dibawah ini
        case 1:
            cout << "Masukkan panjang sisi persegi: "; 
            cin >> panjang; // diinput panjang sisi persegi nya berapa
            cout << "Luasnya adalah: " << panjang * panjang << endl;    // diitung luasnya make rumus persegi
            break;
        case 2:
            cout << "Masukkan panjang: ";
            cin >> panjang; // diitung panjang persegi panjangnya berapa
            cout << "Masukkan lebar: ";
            cin >> lebar; // diitung lebar persegi panjangnya berapa
            cout << "Luasnya adalah " << panjang * lebar << endl; // diitung luasnya make rumus persegi panjang
            break;
        case 3:
            cout << "Masukkan alas: ";
            cin >> alas;  // diitung alas segitiganya berapa
            cout << "Masukkan tinggi: ";
            cin >> tinggi;  // diitung tinggi segitiganya berapa
            cout << "Luasnya adalah: " << 0.5 * alas * tinggi << endl;  // diitung luasnya make rumus segitiga 
            break;
        default:
            cout << "Tidak valid." << endl; // kalo nge milih case diluar 1, 2, ama 3 ya nga bakal valid
    }

    return 0;
}