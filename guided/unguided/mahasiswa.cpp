#include <iostream>
#include "mahasiswa.h"
using namespace std;

void inputData(Mahasiswa &m) {
    cin.ignore();
    cout << "Nama   : ";
    getline(cin, m.nama);
    cout << "NIM    : ";
    getline(cin, m.nim);
    cout << "Nilai UTS   : ";
    cin >> m.uts;
    cout << "Nilai UAS   : ";
    cin >> m.uas;
    cout << "Nilai Tugas : ";
    cin >> m.tugas;

    m.nilaiAkhir = hitungNilaiAkhir(m);
}

float hitungNilaiAkhir(Mahasiswa m) {
    return (0.3 * m.uts) + (0.4 * m.uas) + (0.3 * m.tugas);
}

void tampilData(Mahasiswa m[], int n) {
    cout << "\nNo  Nama\tNIM\t\tNilai Akhir\n";
    cout << "-------------------------------------\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ".  " << m[i].nama << "\t" 
             << m[i].nim << "\t" 
             << m[i].nilaiAkhir << endl;
    }
}
