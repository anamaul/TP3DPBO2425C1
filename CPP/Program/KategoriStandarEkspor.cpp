#ifndef KATEGORISTANDAREKSPOR_CPP
#define KATEGORISTANDAREKSPOR_CPP

#include <string>

class KategoriStandarEkspor
{
private:
    std::string _kode_standar;
    std::string _nama_standar;
    std::string _level_kebersihan;
    std::string _kualitas_daun;
    std::string _level_packaging;

public:
    // Konstruktor Default
    KategoriStandarEkspor() {}

    // Konstruktor Berparameter (Implementasi dari Deklarasi di file asli)
    KategoriStandarEkspor(std::string kode_standar, std::string nama_standar,
                          std::string level_kebersihan, std::string kualitas_daun,
                          std::string level_packaging)
        : _kode_standar(kode_standar), _nama_standar(nama_standar),
          _level_kebersihan(level_kebersihan), _kualitas_daun(kualitas_daun),
          _level_packaging(level_packaging) {}

    // Destructor
    ~KategoriStandarEkspor() {}

    // Getter methods (Mengikuti pola Main.cpp)
    std::string get_kode_standar() const { return _kode_standar; }
    std::string get_nama_standar() const { return _nama_standar; }
    std::string get_level_kebersihan() const { return _level_kebersihan; }
    std::string get_kualitas_daun() const { return _kualitas_daun; }
    std::string get_level_packaging() const { return _level_packaging; }

    // Setter methods (Mengikuti pola file Individu.cpp)
    void set_kode_standar(std::string kode_standar) { _kode_standar = kode_standar; }
    void set_nama_standar(std::string nama_standar) { _nama_standar = nama_standar; }
    void set_level_kebersihan(std::string level_kebersihan) { _level_kebersihan = level_kebersihan; }
    void set_kualitas_daun(std::string kualitas_daun) { _kualitas_daun = kualitas_daun; }
    void set_level_packaging(std::string level_packaging) { _level_packaging = level_packaging; }
};
#endif // KATEGORISTANDAREKSPOR_CPP