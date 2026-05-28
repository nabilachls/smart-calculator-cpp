#include <iostream>
#include <cmath>

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

double pangkat(double a, double b) {
    return pow(a, b);
}

double akar(double a) {
    return sqrt(a);
}

int main() {

    int pilihan;
    double a, b, hasil;

    cout << "===== SMART CALCULATOR =====" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << "5. Pangkat" << endl;
    cout << "6. Akar Kuadrat" << endl;

    cout << "Pilih menu : ";
    cin >> pilihan;

    switch(pilihan) {

        case 1:
            cout << "Masukkan angka pertama : ";
            cin >> a;
            cout << "Masukkan angka kedua : ";
            cin >> b;

            hasil = tambah(a, b);
            break;

        case 2:
            cout << "Masukkan angka pertama : ";
            cin >> a;
            cout << "Masukkan angka kedua : ";
            cin >> b;

            hasil = kurang(a, b);
            break;

        case 3:
            cout << "Masukkan angka pertama : ";
            cin >> a;
            cout << "Masukkan angka kedua : ";
            cin >> b;

            hasil = kali(a, b);
            break;

        case 4:
            cout << "Masukkan angka pertama : ";
            cin >> a;
            cout << "Masukkan angka kedua : ";
            cin >> b;

            hasil = bagi(a, b);
            break;

        case 5:
            cout << "Masukkan angka : ";
            cin >> a;

            cout << "Masukkan pangkat : ";
            cin >> b;

            hasil = pangkat(a, b);
            break;

        case 6:
            cout << "Masukkan angka : ";
            cin >> a;

            hasil = akar(a);
            break;

        default:
            cout << "Menu tidak valid";
            return 0;
    }

    cout << "Hasil = " << hasil;

    return 0;
}