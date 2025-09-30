#ifndef KARYAWAN_CPP
#define KARYAWAN_CPP

#include "Individu.cpp"         // Inheritance
#include "PetaniDaunPisang.cpp" // Aggregation
#include <vector>
#include <string>

class KaryawanPemrosesanDaunPisang : public Individu
{
private:
    std::string _jenis;
    // Aggregation: Menyimpan pointer ke objek PetaniDaunPisang
    std::vector<PetaniDaunPisang *> _list_petani_daun_pisang;

public:
    // Konstruktor Default
    KaryawanPemrosesanDaunPisang() : Individu() {}

    // Konstruktor Berparameter (Implementasi dari Deklarasi di file asli)
    KaryawanPemrosesanDaunPisang(std::string no_ktp, std::string nama, std::string alamat,
                                 std::string jenis,
                                 std::vector<PetaniDaunPisang *> list_petani_daun_pisang)
        : Individu(no_ktp, nama, alamat), // Memanggil konstruktor Base Class
          _jenis(jenis),
          _list_petani_daun_pisang(list_petani_daun_pisang)
    {
    }

    // Destructor
    ~KaryawanPemrosesanDaunPisang() {}

    // Getter methods (Mengikuti pola Main.cpp)
    std::string get_jenis() const { return _jenis; }
    const std::vector<PetaniDaunPisang *> &get_list_petani_daun_pisang() const
    {
        return _list_petani_daun_pisang;
    }

    // Setter methods
    void set_jenis(std::string jenis) { _jenis = jenis; }
    void set_list_petani_daun_pisang(std::vector<PetaniDaunPisang *> list_petani_daun_pisang)
    {
        _list_petani_daun_pisang = list_petani_daun_pisang;
    }
};
#endif // KARYAWAN_CPP