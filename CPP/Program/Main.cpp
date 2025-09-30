#include "DaunPisang.cpp"
#include "Individu.cpp"
#include "PetaniDaunPisang.cpp"
#include "KaryawanPemrosesanDaunPisang.cpp"
#include "EksportirDaunPisang.cpp"
#include "KategoriStandarEkspor.cpp"
#include "NegaraEksporDaunPisang.cpp"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>   // Untuk std::find
#include <sstream>     // Untuk std::stringstream
#include <type_traits> // Untuk std::is_same_v, std::is_base_of_v

// ====================================================================
// FUNGSI PEMBANTU UNTUK MENAMPILKAN DATA
// ====================================================================

/**
 * @brief Fungsi template untuk menampilkan detail koleksi objek.
 */
template <typename T>
void display_data_section(const std::string &title, const std::vector<T *> &data_list)
{
    std::cout << "\n"
              << title << " (" << data_list.size() << " Entitas)" << std::endl;
    std::cout << std::string(50, '-') << std::endl;
    if (data_list.empty())
    {
        std::cout << "     [KOSONG]" << std::endl;
        return;
    }

    for (size_t i = 0; i < data_list.size(); ++i)
    {
        // Asumsi semua objek punya salah satu dari getter berikut untuk nama utama
        std::string nama_utama;

        // C++ Type Checking untuk menentukan method getter yang dipanggil
        if constexpr (std::is_base_of_v<Individu, T>)
        {
            // Untuk Petani, Karyawan, Eksportir
            nama_utama = data_list[i]->get_nama();
        }
        else if constexpr (std::is_same_v<T, KategoriStandarEkspor>)
        {
            nama_utama = data_list[i]->get_nama_standar();
        }
        else if constexpr (std::is_same_v<T, DaunPisang>)
        {
            nama_utama = data_list[i]->get_nama();
        }
        else if constexpr (std::is_same_v<T, NegaraEksporDaunPisang>)
        {
            nama_utama = data_list[i]->get_nama();
        }
        else
        {
            // Fallback
            nama_utama = "[Nama Tidak Diketahui]";
        }

        std::cout << "[" << i + 1 << "] " << nama_utama << std::endl;

        // Detail Khusus
        if constexpr (std::is_same_v<T, DaunPisang>)
        {
            std::cout << "   Kode: " << data_list[i]->get_kode() << std::endl;
        }
        else if constexpr (std::is_same_v<T, KategoriStandarEkspor>)
        {
            std::cout << "   Kode: " << data_list[i]->get_kode_standar()
                      << ", Kualitas: " << data_list[i]->get_kualitas_daun()
                      << ", Packaging: " << data_list[i]->get_level_packaging() << std::endl;
        }
        else if constexpr (std::is_base_of_v<Individu, T>)
        {
            // Inheritance: Data dari Individu (Base Class)
            std::cout << "   KTP: " << data_list[i]->get_no_ktp()
                      << ", Alamat: " << data_list[i]->get_alamat() << std::endl;

            // Detail dan Aggregation (untuk Petani, Karyawan, Eksportir)
            if constexpr (std::is_same_v<T, PetaniDaunPisang>)
            {
                std::stringstream ss;
                const auto &list_daun = data_list[i]->get_list_daun_pisang();
                for (size_t j = 0; j < list_daun.size(); ++j)
                {
                    ss << list_daun[j]->get_nama() << (j < list_daun.size() - 1 ? ", " : "");
                }
                std::cout << "   Daun Dibudidayakan: " << ss.str() << std::endl;
            }
            else if constexpr (std::is_same_v<T, EksportirDaunPisang>)
            {
                std::cout << "   Jual Lokal: " << (data_list[i]->get_status_jual_lokal() ? "Ya" : "Tidak") << std::endl;

                std::stringstream ss_negara;
                const auto &list_negara = data_list[i]->get_list_negara_ekspor_daun_pisang();
                for (size_t j = 0; j < list_negara.size(); ++j)
                {
                    ss_negara << list_negara[j]->get_nama() << (j < list_negara.size() - 1 ? ", " : "");
                }
                std::cout << "   Tujuan Negara: " << ss_negara.str() << std::endl;

                std::stringstream ss_petani;
                const auto &list_petani = data_list[i]->get_list_petani_daun_pisang();
                for (size_t j = 0; j < list_petani.size(); ++j)
                {
                    ss_petani << list_petani[j]->get_nama() << (j < list_petani.size() - 1 ? ", " : "");
                }
                std::cout << "   Supplier Petani: " << ss_petani.str() << std::endl;
            }
            else if constexpr (std::is_same_v<T, KaryawanPemrosesanDaunPisang>)
            {
                std::cout << "   Jenis Pekerjaan: " << data_list[i]->get_jenis() << std::endl;

                std::stringstream ss_petani;
                const auto &list_petani = data_list[i]->get_list_petani_daun_pisang();
                for (size_t j = 0; j < list_petani.size(); ++j)
                {
                    ss_petani << list_petani[j]->get_nama() << (j < list_petani.size() - 1 ? ", " : "");
                }
                std::cout << "   Bekerja dengan Petani: " << ss_petani.str() << std::endl;
            }
        }
        else if constexpr (std::is_same_v<T, NegaraEksporDaunPisang>)
        {
            std::cout << "   Kode: " << data_list[i]->get_kode_negara() << std::endl;
            std::stringstream ss_standar;
            const auto &list_standar = data_list[i]->get_list_kategori_standar_ekspor();
            for (size_t j = 0; j < list_standar.size(); ++j)
            {
                ss_standar << list_standar[j]->get_nama_standar() << (j < list_standar.size() - 1 ? ", " : "");
            }
            std::cout << "   Standar Diterima: " << ss_standar.str() << std::endl;
        }
    }
}

void display_all_data(const std::vector<DaunPisang *> &daun_list,
                      const std::vector<KategoriStandarEkspor *> &standar_list,
                      const std::vector<NegaraEksporDaunPisang *> &negara_list,
                      const std::vector<PetaniDaunPisang *> &petani_list,
                      const std::vector<EksportirDaunPisang *> &eksportir_list)
{
    display_data_section("DATA DAUN PISANG", daun_list);
    display_data_section("DATA KATEGORI STANDAR EKSPOR", standar_list);
    display_data_section("DATA PETANI DAUN PISANG", petani_list);
    display_data_section("DATA NEGARA EKSPOR DAUN PISANG", negara_list);
    display_data_section("DATA EKSPORTIR DAUN PISANG", eksportir_list);
}

// ====================================================================
// FUNGSI UNTUK MENAMBAH DATA STATIS (ADD)
// ====================================================================

// Struktur untuk mengembalikan banyak pointer, seperti tuple di Python
struct InitialDataRefs
{
    DaunPisang *dp1, *dp2;
    KategoriStandarEkspor *kse1, *kse2;
    PetaniDaunPisang *p1, *p2;
    NegaraEksporDaunPisang *n1;
    EksportirDaunPisang *e1;
};

InitialDataRefs add_data_statis(std::vector<DaunPisang *> &daun_list,
                                std::vector<KategoriStandarEkspor *> &standar_list,
                                std::vector<NegaraEksporDaunPisang *> &negara_list,
                                std::vector<PetaniDaunPisang *> &petani_list,
                                std::vector<EksportirDaunPisang *> &eksportir_list)
{

    std::cout << "\n--- [ADD] Menambahkan Data Awal Statis ---" << std::endl;

    // Daun Pisang (Dibuat di heap)
    DaunPisang *dp1 = new DaunPisang("DP001", "Daun Pisang Raja");
    DaunPisang *dp2 = new DaunPisang("DP002", "Daun Pisang Kepok");
    daun_list.push_back(dp1);
    daun_list.push_back(dp2);

    // Kategori Standar Ekspor
    KategoriStandarEkspor *kse1 = new KategoriStandarEkspor("KSE001", "High", "10", "10", "10");
    KategoriStandarEkspor *kse2 = new KategoriStandarEkspor("KSE002", "Medium", "8", "9", "9");
    standar_list.push_back(kse1);
    standar_list.push_back(kse2);

    // Petani (Inheritance + Aggregation: dp1, dp2)
    PetaniDaunPisang *p1 = new PetaniDaunPisang("320..125", "Ahmad Surya", "Bogor", {dp1});
    PetaniDaunPisang *p2 = new PetaniDaunPisang("320..126", "Ibu Mariam", "Sukabumi", {dp2});
    petani_list.push_back(p1);
    petani_list.push_back(p2);

    // Negara Ekspor (Aggregation: kse1)
    NegaraEksporDaunPisang *n1 = new NegaraEksporDaunPisang("NEG001", "Jepang", {kse1});
    negara_list.push_back(n1);

    // Eksportir (Multiple Aggregation: n1, p1, p2)
    EksportirDaunPisang *e1 = new EksportirDaunPisang("320..131", "PT. Daun Nusantara", "Jakarta", true, {n1}, {p1, p2});
    eksportir_list.push_back(e1);

    std::cout << "Penambahan data statis awal selesai." << std::endl;

    return {dp1, dp2, kse1, kse2, p1, p2, n1, e1};
}

void add_new_data_contoh(std::vector<DaunPisang *> &daun_list,
                         std::vector<KategoriStandarEkspor *> &standar_list,
                         std::vector<NegaraEksporDaunPisang *> &negara_list,
                         std::vector<PetaniDaunPisang *> &petani_list,
                         std::vector<EksportirDaunPisang *> &eksportir_list,
                         DaunPisang *dp_ref, KategoriStandarEkspor *kse_ref,
                         PetaniDaunPisang *p_ref, NegaraEksporDaunPisang *n_ref)
{

    std::cout << "\n--- [ADD] Menambahkan SATU Data Baru untuk Demo ---" << std::endl;

    // 1. Daun Pisang Baru
    DaunPisang *dp_new = new DaunPisang("DP004", "Daun Pisang Tanduk");
    daun_list.push_back(dp_new);
    std::cout << "    + Daun Pisang: " << dp_new->get_nama() << std::endl;

    // 2. Petani Baru (Aggregation: dp_new, dp_ref)
    PetaniDaunPisang *p_new = new PetaniDaunPisang("320..127", "Pak Joko", "Cianjur", {dp_new, dp_ref});
    petani_list.push_back(p_new);
    std::cout << "    + Petani: " << p_new->get_nama() << std::endl;

    // 3. Negara Baru (Aggregation: kse_ref)
    NegaraEksporDaunPisang *n_new = new NegaraEksporDaunPisang("NEG003", "Malaysia", {kse_ref});
    negara_list.push_back(n_new);
    std::cout << "    + Negara: " << n_new->get_nama() << std::endl;

    // 4. Eksportir Baru (Multiple Aggregation: n_new, n_ref, p_new, p_ref)
    EksportirDaunPisang *e_new = new EksportirDaunPisang("320..132", "CV. Global Leaf", "Surabaya", false, {n_new, n_ref}, {p_new, p_ref});
    eksportir_list.push_back(e_new);
    std::cout << "    + Eksportir: " << e_new->get_nama() << std::endl;
}

// ====================================================================
// FUNGSI UNTUK MENGHAPUS SEMUA OBJEK (DEALLOCATION)
// ====================================================================

/**
 * @brief Fungsi untuk membersihkan memori heap yang dialokasikan.
 */
template <typename T>
void clear_list(std::vector<T *> &data_list)
{
    for (T *ptr : data_list)
    {
        delete ptr;
    }
    data_list.clear();
}

// ====================================================================
// FUNGSI UTAMA (MAIN)
// ====================================================================

int main()
{
    std::cout << std::string(60, '=') << std::endl;
    std::cout << "SISTEM MANAJEMEN DAUN PISANG (C++) - DEMO ADD & DISPLAY" << std::endl;
    std::cout << std::string(60, '=') << std::endl;

    // Inisialisasi daftar vektor pointer
    std::vector<DaunPisang *> daun_pisang_list;
    std::vector<KategoriStandarEkspor *> kategori_standar_list;
    std::vector<NegaraEksporDaunPisang *> negara_ekspor_list;
    std::vector<PetaniDaunPisang *> petani_list;
    std::vector<EksportirDaunPisang *> eksportir_list;

    // Bagian 1: Tampilkan data sebelum penambahan (Semua kosong)
    std::cout << "\n"
              << std::string(20, '#') << " FASE 1: DATA SEBELUM DITAMBAHKAN " << std::string(20, '#') << std::endl;
    display_all_data(daun_pisang_list, kategori_standar_list, negara_ekspor_list, petani_list, eksportir_list);

    // Bagian 2: Penambahan data statis awal
    // Mendapatkan referensi objek yang dibuat untuk agregasi selanjutnya
    InitialDataRefs refs = add_data_statis(
        daun_pisang_list, kategori_standar_list, negara_ekspor_list, petani_list, eksportir_list);

    // Bagian 3: Tampilkan data setelah penambahan awal
    std::cout << "\n"
              << std::string(20, '#') << " FASE 2: DATA SETELAH PENAMBAHAN AWAL " << std::string(20, '#') << std::endl;
    display_all_data(daun_pisang_list, kategori_standar_list, negara_ekspor_list, petani_list, eksportir_list);

    // Bagian 4: Penambahan data baru (untuk demo perubahan)
    add_new_data_contoh(daun_pisang_list, kategori_standar_list, negara_ekspor_list, petani_list, eksportir_list,
                        refs.dp1, refs.kse2, refs.p1, refs.n1);

    // Bagian 5: Tampilkan data setelah penambahan final
    std::cout << "\n"
              << std::string(20, '#') << " FASE 3: DATA SETELAH PENAMBAHAN FINAL " << std::string(20, '#') << std::endl;
    display_all_data(daun_pisang_list, kategori_standar_list, negara_ekspor_list, petani_list, eksportir_list);

    // Pembersihan memori (Penting di C++!)
    std::cout << "\n--- Membersihkan Memori (Penting!) ---" << std::endl;
    clear_list(eksportir_list);
    clear_list(petani_list);
    clear_list(negara_ekspor_list);
    clear_list(kategori_standar_list);
    clear_list(daun_pisang_list);
    std::cout << "Semua memori telah dibebaskan." << std::endl;

    std::cout << "\n"
              << std::string(60, '=') << std::endl;
    std::cout << "PROGRAM SELESAI." << std::endl;

    return 0;
}