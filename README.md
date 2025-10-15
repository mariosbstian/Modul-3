
# <h1 align="center">Laporan Praktikum Modul Pengenalan Bahasa C++ (3)</h1>
<p align="center">Mario Sebastian Barus</p>

## Dasar Teori
Kode yang telah dibuat merepresentasikan penerapan konsep dasar pemrograman terstruktur dalam bahasa C++, yang mencakup penggunaan fungsi, struktur data (struct), array, serta pointer. Prinsip modularitas diterapkan untuk menjadikan program lebih efisien, terstruktur, dan mudah dipahami. Pemanfaatan struct berfungsi untuk mengelompokkan data secara sistematis, sementara array dan pointer digunakan untuk mempelajari pengelolaan memori serta manipulasi data.
## Guided 

### 1. [mahasiswa.cpp]

```C++
#include <iostream>
using namespace std;
#include "mahasiswa.h"

void inputMhs(mahasiswa &m){
    cout << "input nama = ";
    cin >> (m).nim;
    cout << "input nilai1 = ";
    cin >> (m).nilai1;
    cout << "input nilai 2 = ";
    cin >> (m).nilai2;
}

float rata2(mahasiswa m){
    return (m.nilai1 + m.nilai2) / 2.0;
}
```
Kode C++ tersebut digunakan untuk mengelola data dasar mahasiswa yang terbagi menjadi dua fungsi utama:
inputMhs Prosedur untuk mengambil input dari pengguna (NIM, Nilai 1, dan Nilai 2) dan menyimpannya ke dalam objek mahasiswa.
rata2: Fungsi untuk menghitung rata-rata dari Nilai 1 dan Nilai 2 dari objek mahasiswa.
### 2. [mahasiswa.h]

```C++
#ifndef MAHASISWA_H_INCLUDE
#define MAHASISWA_H_INCLUDE

struct mahasiswa
{
    char nim[10];
    int nilai1,nilai2;
};

void inputMhs(mahasiswa &m);
float rata2(mahasiswa m);
#endif


```
Kode di atas adalah header file dalam bahasa C++ biasanya diberi nama mahasiswa.h Yang Fungsinya adalah mendefinisikan struktur data dan deklarasi fungsi yang akan digunakan di file program lain biasanya file .cpp
### 3. [main.cpp]

```C++
#include <iostream>
#include "mahasiswa.h"
using namespace std;

int main (){
    mahasiswa mhs;
    inputMhs(mhs);
    cout << "rata rata = " << rata2(mhs);
    return 0;
}

```
Kode di atas digunakan untuk Menjalankan program utama yang membaca data seorang mahasiswa dan menampilkan rata-rata nilainya, dengan bantuan struktur dan fungsi yang didefinisikan di mahasiswa.h.

## Unguided 

### 1. [mahasiswa.cpp]

```C++
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

#endif
```
Kode di atas adalah isi file yang dimana diimplementasi (mahasiswa.cpp) dalam program C++. yang fungsinya untuk mengisi definisi  dari fungsi-fungsi yang sudah dideklarasikan di header file mahasiswa.h.
#### Full code Screenshot:
<img width="536" height="573" alt="image" src="https://github.com/user-attachments/assets/b096016e-1d5a-41a6-902a-c1b415c17d89" />

### [mahasiswa.h]

```C++
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
```

Kode herder ini adalah file header C++ yang biasanya diberi nama mahasiswa.h yang fungsinya adalah untuk mendefinisikan struktur data dan deklarasi fungsi yang akan digunakan di file lain
#### Full code Screenshot:
<img width="328" height="303" alt="image" src="https://github.com/user-attachments/assets/56c0db73-fd92-4a53-828a-40328c3b28e7" />


### [main_mahasiswa.cpp]

```C++
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

```
#### Output:
<img width="664" height="460" alt="image" src="https://github.com/user-attachments/assets/d8b955fd-9e70-4b15-b5f5-80b9cb54aec8" />

Kode di atas digunakan untuk Menjalankan program utama yang menginput beberapa data mahasiswa, menghitung nilai akhirnya, dan menampilkan hasilnya ke layar, secara satu persatu
#### Full code Screenshot:
<img width="547" height="359" alt="image" src="https://github.com/user-attachments/assets/6c722598-27db-4446-b921-6338bf41e38c" />

### 2.[pelajaran.cpp]

```C++
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

```

Kode di atas adalah file implementasi dalam bahasa C++ Fungsinya adalah untuk mendefinisikan dari fungsi-fungsi yang sudah dibuat di file header pelajaran.h.
#### Full code Screenshot:
<img width="450" height="283" alt="image" src="https://github.com/user-attachments/assets/5e374b15-7087-4a7d-9512-4ed40c8f47d7" />

### [pelajaran.h]

```C++
#include <string>
using namespace std;

struct pelajaran {
    string namaMapel;
    string kodeMapel;
};

pelajaran create_pelajaran(string nama, string kode);
void tampil_pelajaran(pelajaran p);

```

Kode di atas adalah file header C++ yang fungsinya adalah untuk mendefinisikan struktur data dan penyataan fungsi yang berhubungan dengan data pelajaran mata pelajaran atau mata kuliah.
#### Full code Screenshot:
<img width="419" height="190" alt="image" src="https://github.com/user-attachments/assets/a723a0c1-7e00-421b-9bf4-979a764d5586" />

### [main_pelajaran.cpp]

```C++
#include <iostream>
#include "pelajaran.h"
using namespace std;

int main() {
    pelajaran pel = create_pelajaran("Struktur Data", "STRUKDAT0xx1");
    tampil_pelajaran(pel);
    return 0;
}

```
#### Output:
<img width="794" height="119" alt="image" src="https://github.com/user-attachments/assets/f8273963-4fac-40e8-aca2-6677495b35a4" />

Program di atas berfungsi untuk membuat dan menampilkan data satu mata pelajaran menggunakan struktur dan fungsi yang telah didefinisikan di file pelajaran.h dan pelajaran.cpp
#### Full code Screenshot:
<img width="579" height="189" alt="image" src="https://github.com/user-attachments/assets/dbaa88d1-0964-4bbf-bf9a-9f42ccfa0736" />

### 3.[arraypointer.cpp]

```C++
#include <iostream>
using namespace std;

void tampilArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void tukarPosisi(int arr1[3][3], int arr2[3][3], int baris, int kolom) {
    int temp = arr1[baris][kolom];
    arr1[baris][kolom] = arr2[baris][kolom];
    arr2[baris][kolom] = temp;
}

int main() {
    int A[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
    int B[3][3] = { {9,8,7}, {6,5,4}, {3,2,1} };

    int *p1, *p2;
    p1 = &A[0][0];
    p2 = &B[0][0];

    cout << "Array A sebelum ditukar:\n";
    tampilArray(A);
    cout << "\nArray B sebelum ditukar:\n";
    tampilArray(B);

    tukarPosisi(A, B, 1, 1);

    cout << "\nArray A setelah ditukar:\n";
    tampilArray(A);
    cout << "\nArray B setelah ditukar:\n";
    tampilArray(B);

    cout << "Nilai Pointer setelah proses selesai:\n";
    cout << "Nilai yang ditunjuk *p1 (A[0][0]) = " << *p1 << endl;
    cout << "Nilai yang ditunjuk *p2 (B[0][0]) = " << *p2 << endl;

    return 0;
}

```
#### Output:
<img width="705" height="370" alt="image" src="https://github.com/user-attachments/assets/21769ebb-9858-447e-9b8b-4908c784a456" />

Fungsi program ini Untuk menampilkan dua array 3×3 menukar satu elemen antar keduanya, dan menunjukkan efeknya terhadap pointer yang menunjuk ke elemen pertama
#### Full code Screenshot:
<img width="583" height="727" alt="image" src="https://github.com/user-attachments/assets/b86fcf73-8489-4266-a6e0-2a8865253903" />




## Kesimpulan
Kode program yang sudah dibuat kita bisa melihat gambaran  penerapan konsep dasar pemrograman terstruktur menggunakan bahasa C++. Program tersebut menunjukkan bagaimana berbagai elemen penting dalam pemrograman seperti fungsi, struktur data (struct), array, pointer, dan modularisasi kode  dapat diintegrasikan untuk membentuk sistem yang rapi, efisien, serta mudah dipahami.
Melalui penggunaan struct, data yang memiliki keterkaitan, seperti data mahasiswa dan pelajaran, dapat dikelompokkan dengan teratur.
## Referensi
[1] Budiarto, A., & Hidayat, R. (2021). Penerapan Konsep Modular dan Struktur Data dalam Pembelajaran Pemrograman. Jurnal Teknologi dan Sistem Komputer, 9(2), 123–130.
[2] Setiawan, D., & Pramono, H. (2020). Penerapan Bahasa Pemrograman C++ untuk Penguatan Konsep Algoritma dan Struktur Data. Jurnal Ilmu Komputer dan Informatika, 6(1), 45–52.
[3] Sukamto, A., & Shalahuddin, M. (2018). Rekayasa Perangkat Lunak: Terstruktur dan Berorientasi Objek. Informatika Bandung.
[4] Deitel, P. J., & Deitel, H. M. (2017). C++ How to Program (10th Edition). Pearson Education.
