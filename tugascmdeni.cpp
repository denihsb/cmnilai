#include <iostream>
using namespace std;

int main() {
    int nilai[7];

    cout << "Masukkan 7 nilai ujian:\n";
    for (int i = 0; i < 7; i++) {
        cout << "Nilai ke-" << i + 1 << ": ";
        cin >> nilai[i];
    }

    cout << "\nNilai yang diinput:\n";
    for (int i = 0; i < 7; i++) {
        cout << "Nilai ke-" << i + 1 << ": " << nilai[i] << endl;
    }

    nilai[3] = 100;

    cout << "\nNilai setelah perubahan:\n";
    for (int i = 0; i < 7; i++) {
        cout << "Nilai ke-" << i + 1 << ": " << nilai[i] << endl;
    }

    return 0;
}
