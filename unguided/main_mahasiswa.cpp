#include <iostream>
#include "mahasiswa.h"
using namespace std;

int main() {
    Mahasiswa mhs[10];
    int n;

    cout << "Masukkan jumlah mahasiswa (maks 10): ";
    cin >> n;
    if (n > 10) n = 10;

    for (int i = 0; i < n; i++) {
        cout << "\nData Mahasiswa ke-" << i + 1 << endl;
        inputData(mhs[i]);
    }

    tampilData(mhs, n);

    return 0;
}
