#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Kalkulator Sederhana\n";
    cout << "Masukkan dua angka: ";
    cin >> num1 >> num2;

    cout << "Pilih operator (+, -, *, /): ";
    cin >> op;

    switch (op) {
        case '+':
            cout << "Hasil penambahan adalah " << (num1 + num2) << endl;
            break;
        case '-':
            cout << "Hasil: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Hasil: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "Hasil: " << num1 / num2 << endl;
            else
                cout << "Error: Pembagian dengan nol!" << endl;
            break;
        default:
            cout << "Operator tidak valid!" << endl;
    }

    return 0;
}
