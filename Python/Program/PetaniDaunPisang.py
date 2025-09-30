from Individu import Individu

class PetaniDaunPisang(Individu):
    def __init__(self, no_ktp, nama, alamat, list_daun_pisang):
        # Memanggil konstruktor parent class menggunakan super()
        # Ini adalah implementasi inheritance yang benar
        super().__init__(no_ktp, nama, alamat)
        
        # Aggregation relationship dengan DaunPisang
        # Satu petani bisa membudidayakan berbagai jenis daun pisang
        self._list_daun_pisang = list_daun_pisang  # List objek DaunPisang

    # Getter dan Setter untuk list daun pisang
    def get_list_daun_pisang(self):
        # Mengembalikan daftar jenis daun pisang yang dibudidayakan
        return self._list_daun_pisang
    
    def set_list_daun_pisang(self, list_daun_pisang):
        # Mengubah daftar jenis daun pisang yang dibudidayakan
        self._list_daun_pisang = list_daun_pisang