#include <iostream>
using namespace std;

double tambah(double a, double b) {
    return a + b;
}

double kurang(double a, double b) {
    return a - b;
}

double kali(double a, double b) {
    return a * b;
}

double bagi(double a, double b) {
    return a / b;
}

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
            hasil = tambah(a, b);
            break;

        case 2:
            hasil = kurang(a, b);
            break;

        case 3:
            hasil = kali(a, b);
            break;

        case 4:
            hasil = bagi(a, b);
            break;

        default:
            cout << "Menu tidak valid";
            return 0;
    }

    cout << "Hasil = " << hasil;

    return 0;
}