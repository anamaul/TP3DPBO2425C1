#ifndef NEGARA_EKSPOR_CPP
#define NEGARA_EKSPOR_CPP

#include <string>
#include <vector>
#include "KategoriStandarEkspor.cpp" // Aggregation

class NegaraEksporDaunPisang
{
private:
    std::string _kode_negara;
    std::string _nama;
    // Aggregation: Menyimpan pointer
    std::vector<KategoriStandarEkspor *> _list_kategori_standar_ekspor;

public:
    // Konstruktor Default
    NegaraEksporDaunPisang() {}

    // Konstruktor Berparameter (Implementasi dari Deklarasi di file asli)
    NegaraEksporDaunPisang(std::string kode_negara, std::string nama,
                           std::vector<KategoriStandarEkspor *> list_kategori_standar_ekspor)
        : _kode_negara(kode_negara), _nama(nama),
          _list_kategori_standar_ekspor(list_kategori_standar_ekspor) {}

    // Destructor
    ~NegaraEksporDaunPisang() {}

    // Getter methods (Mengikuti pola Main.cpp)
    std::string get_kode_negara() const { return _kode_negara; }
    std::string get_nama() const { return _nama; }
    const std::vector<KategoriStandarEkspor *> &get_list_kategori_standar_ekspor() const
    {
        return _list_kategori_standar_ekspor;
    }

    // Setter methods
    void set_kode_negara(std::string kode_negara) { _kode_negara = kode_negara; }
    void set_nama(std::string nama) { _nama = nama; }
    void set_list_kategori_standar_ekspor(std::vector<KategoriStandarEkspor *> list_kategori_standar_ekspor)
    {
        _list_kategori_standar_ekspor = list_kategori_standar_ekspor;
    }
};
#endif // NEGARA_EKSPOR_CPP