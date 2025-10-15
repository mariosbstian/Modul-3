#include <iostream>
#include "pelajaran.h"
using namespace std;

int main() {
    pelajaran pel = create_pelajaran("Struktur Data", "STRUKDAT0xx1");
    tampil_pelajaran(pel);
    return 0;
}
