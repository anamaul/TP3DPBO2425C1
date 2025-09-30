class DaunPisang:
    def __init__(self, kode, nama):
        # Konstruktor untuk inisialisasi objek daun pisang
        # Menggunakan private attributes (underscore prefix) untuk encapsulation
        self._kode = kode    # Kode unik identifikasi daun pisang
        self._nama = nama    # Nama jenis daun pisang

    # Getter dan Setter - Implementasi encapsulation untuk akses data yang terkontrol
    def get_kode(self):
        # Method untuk mengambil nilai kode daun pisang
        return self._kode
    
    def get_nama(self):
        # Method untuk mengambil nilai nama daun pisang
        return self._nama

    def set_kode(self, kode):
        # Method untuk mengubah nilai kode daun pisang
        self._kode = kode
    
    def set_nama(self, nama):
        # Method untuk mengubah nilai nama daun pisang
        self._nama = nama