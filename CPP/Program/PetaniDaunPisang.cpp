#ifndef PETANI_CPP
#define PETANI_CPP

#include "Individu.cpp"   // Inheritance
#include "DaunPisang.cpp" // Aggregation
#include <vector>
#include <string>

class PetaniDaunPisang : public Individu
{
private:
    // Aggregation: Menyimpan pointer ke objek DaunPisang
    std::vector<DaunPisang *> _list_daun_pisang;

public:
    // Konstruktor Default
    PetaniDaunPisang() : Individu() {}

    // Konstruktor Berparameter (Implementasi dari Deklarasi di file asli)
    PetaniDaunPisang(std::string no_ktp, std::string nama, std::string alamat,
                     std::vector<DaunPisang *> list_daun_pisang)
        : Individu(no_ktp, nama, alamat), // Memanggil konstruktor Base Class
          _list_daun_pisang(list_daun_pisang)
    {
    }

    // Destructor
    ~PetaniDaunPisang() {}

    // Getter methods (Mengikuti pola Main.cpp)
    const std::vector<DaunPisang *> &get_list_daun_pisang() const
    {
        return _list_daun_pisang;
    }

    // Setter methods
    void set_list_daun_pisang(std::vector<DaunPisang *> list_daun_pisang)
    {
        _list_daun_pisang = list_daun_pisang;
    }
};
#endif // PETANI_CPP