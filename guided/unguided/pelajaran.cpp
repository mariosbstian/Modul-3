#include <iostream>
#include "pelajaran.h"
using namespace std;

pelajaran create_pelajaran(string nama, string kode) {
    pelajaran p;
    p.namaMapel = nama;
    p.kodeMapel = kode;
    return p;
}

void tampil_pelajaran(pelajaran p) {
    cout << "Nama Mapel : " << p.namaMapel << endl;
    cout << "Kode Mapel : " << p.kodeMapel << endl;
}
