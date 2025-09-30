#ifndef EKSPORTIR_CPP
#define EKSPORTIR_CPP

#include <iostream>
#include "Individu.cpp"               // Inheritance
#include "NegaraEksporDaunPisang.cpp" // Aggregation
#include "PetaniDaunPisang.cpp"       // Aggregation
#include <vector>
#include <string>

using namespace std;

class EksportirDaunPisang : public Individu
{
private:
    bool _status_jual_lokal;
    // Multiple Aggregation: Menyimpan pointer
    std::vector<NegaraEksporDaunPisang *> _list_negara_ekspor_daun_pisang;
    std::vector<PetaniDaunPisang *> _list_petani_daun_pisang;

public:
    // Konstruktor Default
    EksportirDaunPisang() : Individu() {}

    // Konstruktor Berparameter (Implementasi dari Deklarasi di file asli)
    EksportirDaunPisang(std::string no_ktp, std::string nama, std::string alamat,
                        bool status_jual_lokal,
                        std::vector<NegaraEksporDaunPisang *> list_negara_ekspor_daun_pisang,
                        std::vector<PetaniDaunPisang *> list_petani_daun_pisang)
        : Individu(no_ktp, nama, alamat), // Memanggil konstruktor Base Class
          _status_jual_lokal(status_jual_lokal),
          _list_negara_ekspor_daun_pisang(list_negara_ekspor_daun_pisang),
          _list_petani_daun_pisang(list_petani_daun_pisang)
    {
    }

    // Destructor
    ~EksportirDaunPisang() {}

    // Getter methods (Mengikuti pola Main.cpp)
    bool get_status_jual_lokal() const { return _status_jual_lokal; }
    const std::vector<NegaraEksporDaunPisang *> &get_list_negara_ekspor_daun_pisang() const
    {
        return _list_negara_ekspor_daun_pisang;
    }
    const std::vector<PetaniDaunPisang *> &get_list_petani_daun_pisang() const
    {
        return _list_petani_daun_pisang;
    }

    // Setter methods
    void set_status_jual_lokal(bool status_jual_lokal) { _status_jual_lokal = status_jual_lokal; }
    void set_list_negara_ekspor_daun_pisang(std::vector<NegaraEksporDaunPisang *> list_negara_ekspor_daun_pisang)
    {
        _list_negara_ekspor_daun_pisang = list_negara_ekspor_daun_pisang;
    }
    void set_list_petani_daun_pisang(std::vector<PetaniDaunPisang *> list_petani_daun_pisang)
    {
        _list_petani_daun_pisang = list_petani_daun_pisang;
    }
};
#endif // EKSPORTIR_CPP