// DaunPisang.cpp - Sudah Ada
#ifndef DAUNPISANG_CPP // <-- Include Guard
#define DAUNPISANG_CPP // <-- Include Guard

#include <iostream>
#include <string>

using namespace std;

class DaunPisang
{
private:
    string kode;
    string nama;

public:
    // Konstruktor Default
    DaunPisang() {}

    // Konstruktor Berparameter (Tambahan untuk mendukung Main.cpp)
    DaunPisang(string kode, string nama) : kode(kode), nama(nama) {}

    // Getter methods
    string get_kode() const { return this->kode; } // Diubah ke get_kode() dan const
    string get_nama() const { return this->nama; } // Diubah ke get_nama() dan const

    // Setter methods
    void setKode(string kode) { this->kode = kode; }
    void setNama(string nama) { this->nama = nama; }
    ~DaunPisang() {}
};
#endif // DAUNPISANG_CPP