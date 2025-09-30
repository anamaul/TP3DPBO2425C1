# Main.py (Final Cleaned Version)
from DaunPisang import DaunPisang
from Individu import Individu
from PetaniDaunPisang import PetaniDaunPisang
from KaryawanPemrosesanDaunPisang import KaryawanPemrosesanDaunPisang
from EksportirDaunPisang import EksportirDaunPisang
from KategoriStandarEkspor import KategoriStandarEkspor
from NegaraEksporDaunPisang import NegaraEksporDaunPisang

# ====================================================================
# FUNGSI UNTUK MENAMBAH DATA STATIS (ADD)
# ====================================================================

def add_data_statis(daun_list, standar_list, negara_list, petani_list, eksportir_list):
    """Menambahkan data awal statis ke semua list."""
    
    print("\n--- [ADD] Menambahkan Data Awal Statis ---")
    
    # Daun Pisang
    dp1 = DaunPisang("DP001", "Daun Pisang Raja")
    dp2 = DaunPisang("DP002", "Daun Pisang Kepok")
    daun_list.extend([dp1, dp2])

    # Kategori Standar Ekspor
    kse1 = KategoriStandarEkspor("KSE001", "High", "10", "10", "10")
    kse2 = KategoriStandarEkspor("KSE002", "Medium", "8", "9", "9")
    standar_list.extend([kse1, kse2])
    
    # Petani (Inheritance + Aggregation: dp1, dp2)
    p1 = PetaniDaunPisang("320..125", "Ahmad Surya", "Bogor", [dp1])
    p2 = PetaniDaunPisang("320..126", "Ibu Mariam", "Sukabumi", [dp2])
    petani_list.extend([p1, p2])

    # Negara Ekspor (Aggregation: kse1)
    n1 = NegaraEksporDaunPisang("NEG001", "Jepang", [kse1])
    negara_list.append(n1)
    
    # Eksportir (Multiple Aggregation: n1, p1, p2)
    e1 = EksportirDaunPisang("320..131", "PT. Daun Nusantara", "Jakarta", True, [n1], [p1, p2])
    eksportir_list.append(e1)
    
    print("✅ Penambahan data statis awal selesai.")
    # Mengembalikan referensi objek yang baru dibuat untuk digunakan dalam agregasi selanjutnya
    return dp1, dp2, kse1, kse2, p1, p2, n1, e1

def add_new_data_contoh(daun_list, standar_list, negara_list, petani_list, eksportir_list, dp_ref, kse_ref, p_ref, n_ref):
    """Menambahkan satu data baru untuk demonstrasi 'sesudah ditambahkan'."""
    print("\n--- [ADD] Menambahkan SATU Data Baru untuk Demo ---")
    
    # 1. Daun Pisang Baru
    dp_new = DaunPisang("DP004", "Daun Pisang Tanduk")
    daun_list.append(dp_new)
    print(f"    + Daun Pisang: {dp_new.get_nama()}")
    
    # 2. Petani Baru (Aggregation: dp_new)
    p_new = PetaniDaunPisang("320..127", "Pak Joko", "Cianjur", [dp_new, dp_ref])
    petani_list.append(p_new)
    print(f"    + Petani: {p_new.get_nama()}")

    # 3. Negara Baru (Aggregation: kse_ref)
    n_new = NegaraEksporDaunPisang("NEG003", "Malaysia", [kse_ref])
    negara_list.append(n_new)
    print(f"    + Negara: {n_new.get_nama()}")

    # 4. Eksportir Baru (Multiple Aggregation: n_new, p_new, p_ref)
    e_new = EksportirDaunPisang("320..132", "CV. Global Leaf", "Surabaya", False, [n_new, n_ref], [p_new, p_ref])
    eksportir_list.append(e_new)
    print(f"    + Eksportir: {e_new.get_nama()}")


# ====================================================================
# FUNGSI UNTUK MENAMPILKAN DATA LENGKAP (DISPLAY)
# ====================================================================
    
def display_data_section(title, data_list):
    """Fungsi pembantu untuk menampilkan list data dengan header dan detail lengkap."""
    print(f"\n{title} ({len(data_list)} Entitas)")
    print("-" * 50)
    if not data_list:
        print("     [KOSONG]")
        return
        
    for i, obj in enumerate(data_list):
        # Menggunakan get_nama() atau get_nama_standar() yang tersedia di semua objek agregasi
        nama_utama = obj.get_nama() if hasattr(obj, 'get_nama') else obj.get_nama_standar()
        print(f"[{i+1}] {nama_utama}")
        
        # Detail Daun Pisang
        if isinstance(obj, DaunPisang):
            print(f"   Kode: {obj.get_kode()}")
            
        # Detail Kategori Standar
        elif isinstance(obj, KategoriStandarEkspor):
            print(f"   Kode: {obj.get_kode_standar()}, Kualitas: {obj.get_kualitas_daun()}, Packaging: {obj.get_level_packaging()}")

        # Detail Petani (Inheritance + Aggregation)
        elif isinstance(obj, PetaniDaunPisang):
            print(f"   KTP: {obj.get_no_ktp()}, Alamat: {obj.get_alamat()}")
            daun_names = [d.get_nama() for d in obj.get_list_daun_pisang()]
            print(f"   Daun Dibudidayakan: {', '.join(daun_names)}")
            
        # Detail Negara Ekspor (Aggregation)
        elif isinstance(obj, NegaraEksporDaunPisang):
            print(f"   Kode: {obj.get_kode_negara()}")
            standar_names = [k.get_nama_standar() for k in obj.get_list_kategori_standar_ekspor()]
            print(f"   Standar Diterima: {', '.join(standar_names)}")
            
        # Detail Eksportir (Multiple Aggregation)
        elif isinstance(obj, EksportirDaunPisang):
            print(f"   Jual Lokal: {'Ya' if obj.get_status_jual_lokal() else 'Tidak'}")
            negara_names = [n.get_nama() for n in obj.get_list_negara_ekspor_daun_pisang()]
            petani_names = [p.get_nama() for p in obj.get_list_petani_daun_pisang()]
            print(f"   Tujuan Negara: {', '.join(negara_names)}")
            print(f"   Supplier Petani: {', '.join(petani_names)}")
            
def display_all_data(daun_list, standar_list, negara_list, petani_list, eksportir_list):
    """Menampilkan semua data dari semua list."""
    display_data_section("DATA DAUN PISANG", daun_list)
    display_data_section("DATA KATEGORI STANDAR EKSPOR", standar_list)
    display_data_section("DATA PETANI DAUN PISANG", petani_list)
    display_data_section("DATA NEGARA EKSPOR DAUN PISANG", negara_list)
    display_data_section("DATA EKSPORTIR DAUN PISANG", eksportir_list)


# ====================================================================
# FUNGSI UTAMA (MAIN)
# ====================================================================

def main():
    print("=" * 60)
    print("SISTEM MANAJEMEN DAUN PISANG (PYTHON) - DEMO ADD & DISPLAY")
    print("=" * 60)
    
    # Inisialisasi daftar
    daun_pisang_list = []
    kategori_standar_list = []
    negara_ekspor_list = []
    petani_list = []
    eksportir_list = []
    
    # Bagian 1: Tampilkan data sebelum penambahan
    print("\n" + "#" * 20 + " FASE 1: DATA SEBELUM DITAMBAHKAN " + "#" * 20)
    display_all_data(daun_pisang_list, kategori_standar_list, negara_ekspor_list, petani_list, eksportir_list)
    
    # Bagian 2: Penambahan data statis awal
    # Mendapatkan referensi objek yang dibuat di FASE 2
    dp1, dp2, kse1, kse2, p1, p2, n1, e1 = add_data_statis(
        daun_pisang_list, kategori_standar_list, negara_ekspor_list, petani_list, eksportir_list
    )

    # Bagian 3: Tampilkan data setelah penambahan awal
    print("\n" + "#" * 20 + " FASE 2: DATA SETELAH PENAMBAHAN AWAL " + "#" * 20)
    display_all_data(daun_pisang_list, kategori_standar_list, negara_ekspor_list, petani_list, eksportir_list)
    
    # Bagian 4: Penambahan data baru (untuk demo perubahan)
    add_new_data_contoh(daun_pisang_list, kategori_standar_list, negara_ekspor_list, petani_list, eksportir_list, 
                        dp1, kse2, p1, n1)
    
    # Bagian 5: Tampilkan data setelah penambahan final
    print("\n" + "#" * 20 + " FASE 3: DATA SETELAH PENAMBAHAN FINAL " + "#" * 20)
    display_all_data(daun_pisang_list, kategori_standar_list, negara_ekspor_list, petani_list, eksportir_list)
    
    print("\n" + "=" * 60)
    print("PROGRAM SELESAI.")

if __name__ == "__main__":
    main()