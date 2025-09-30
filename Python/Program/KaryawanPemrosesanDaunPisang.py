from Individu import Individu

class KaryawanPemrosesanDaunPisang(Individu):
    def __init__(self, no_ktp, nama, alamat, jenis, list_petani_daun_pisang):
        # Inheritance - mewarisi properties dari kelas Individu
        super().__init__(no_ktp, nama, alamat)
        
        # Atribut khusus untuk karyawan pemrosesan
        self._jenis = jenis  # Jenis pekerjaan (contoh: Pembersihan, Packaging, Quality Control)
        
        # Aggregation dengan PetaniDaunPisang
        # Satu karyawan bisa bekerja dengan beberapa petani
        self._list_petani_daun_pisang = list_petani_daun_pisang

    # Getter dan Setter untuk atribut khusus karyawan
    def get_jenis(self):
        # Mengembalikan jenis pekerjaan karyawan
        return self._jenis
    
    def get_list_petani_daun_pisang(self):
        # Mengembalikan daftar petani yang bekerja sama dengan karyawan
        return self._list_petani_daun_pisang

    def set_jenis(self, jenis):
        # Mengubah jenis pekerjaan karyawan
        self._jenis = jenis
    
    def set_list_petani_daun_pisang(self, list_petani_daun_pisang):
        # Mengubah daftar petani yang bekerja sama
        self._list_petani_daun_pisang = list_petani_daun_pisang