class NegaraEksporDaunPisang:
    def __init__(self, kode_negara, nama, list_kategori_standar_ekspor):
        # Konstruktor untuk inisialisasi data negara ekspor
        self._kode_negara = kode_negara  # Kode unik negara
        self._nama = nama                # Nama negara tujuan ekspor
        
        # Aggregation dengan KategoriStandarEkspor
        # Setiap negara bisa menerima beberapa kategori standar ekspor
        self._list_kategori_standar_ekspor = list_kategori_standar_ekspor

    # Getter methods untuk mengakses data negara ekspor
    def get_kode_negara(self):
        return self._kode_negara
    
    def get_nama(self):
        return self._nama
    
    def get_list_kategori_standar_ekspor(self):
        # Mengembalikan daftar standar ekspor yang diterima negara ini
        return self._list_kategori_standar_ekspor
    
    # Setter methods untuk mengubah data negara ekspor
    def set_kode_negara(self, kode_negara):
        self._kode_negara = kode_negara
    
    def set_nama(self, nama):
        self._nama = nama
    
    def set_list_kategori_standar_ekspor(self, list_kategori_standar_ekspor):
        self._list_kategori_standar_ekspor = list_kategori_standar_ekspor