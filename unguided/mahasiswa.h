#ifndef MAHASISWA_H
#define MAHASISWA_H

#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float uts, uas, tugas, nilaiAkhir;
};

void inputData(Mahasiswa &m);
float hitungNilaiAkhir(Mahasiswa m);
void tampilData(Mahasiswa m[], int n);

#endif
