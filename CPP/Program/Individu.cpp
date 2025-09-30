#ifndef INDIVIDU_CPP // <-- Include Guard
#define INDIVIDU_CPP // <-- Include Guard

#include <iostream>
#include <string>

using namespace std;
class Individu
{
private:
    string no_ktp;
    string nama;
    string alamat;

public:
    // Konstruktor Default
    Individu() {}

    // Konstruktor Berparameter (Tambahan)
    Individu(string no_ktp, string nama, string alamat) : no_ktp(no_ktp), nama(nama), alamat(alamat) {}

    // Getter methods
    string get_no_ktp() const { return this->no_ktp; } // Diubah ke get_no_ktp() dan const
    string get_nama() const { return this->nama; }     // Diubah ke get_nama() dan const
    string get_alamat() const { return this->alamat; } // Diubah ke get_alamat() dan const

    // Setter methods
    void setNoKtp(string no_ktp) { this->no_ktp = no_ktp; }
    void setNama(string nama) { this->nama = nama; }
    void setAlamat(string alamat) { this->alamat = alamat; }
    ~Individu() {}
};
#endif // INDIVIDU_CPP // <-- Akhir Include Guard