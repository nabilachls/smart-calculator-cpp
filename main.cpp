#include <iostream>
using namespace std;

int main() {

    int pilihan;
    double a, b, hasil;

    cout << "===== SMART CALCULATOR =====" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;

    cout << "Pilih menu : ";
    cin >> pilihan;

    cout << "Masukkan angka pertama : ";
    cin >> a;

    cout << "Masukkan angka kedua : ";
    cin >> b;

    switch(pilihan) {

        case 1:
            hasil = a + b;
            cout << "Hasil = " << hasil;
            break;

        case 2:
            hasil = a - b;
            cout << "Hasil = " << hasil;
            break;

        case 3:
            hasil = a * b;
            cout << "Hasil = " << hasil;
            break;

        case 4:
            hasil = a / b;
            cout << "Hasil = " << hasil;
            break;

        default:
            cout << "Menu tidak valid";
    }

    return 0;
}