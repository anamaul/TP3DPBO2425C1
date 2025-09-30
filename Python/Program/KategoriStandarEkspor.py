class KategoriStandarEkspor:
    def __init__(self, kode_standar, nama_standar, level_kebersihan, kualitas_daun, level_packaging):
        # Konstruktor untuk inisialisasi standar ekspor
        # Setiap standar memiliki kriteria kualitas yang berbeda
        self._kode_standar = kode_standar          # Kode unik standar ekspor
        self._nama_standar = nama_standar          # Nama kategori standar
        self._level_kebersihan = level_kebersihan  # Tingkat kebersihan yang diperlukan
        self._kualitas_daun = kualitas_daun        # Grade kualitas daun (A, B, C)
        self._level_packaging = level_packaging    # Standar kemasan yang diperlukan

    # Getter methods untuk semua atribut standar ekspor
    def get_kode_standar(self):
        return self._kode_standar
    
    def get_nama_standar(self):
        return self._nama_standar
    
    def get_level_kebersihan(self):
        return self._level_kebersihan
    
    def get_kualitas_daun(self):
        return self._kualitas_daun
    
    def get_level_packaging(self):
        return self._level_packaging

    # Setter methods untuk mengubah standar ekspor jika diperlukan
    def set_kode_standar(self, kode_standar):
        self._kode_standar = kode_standar
    
    def set_nama_standar(self, nama_standar):
        self._nama_standar = nama_standar

    def set_level_kebersihan(self, level_kebersihan):
        self._level_kebersihan = level_kebersihan
    
    def set_kualitas_daun(self, kualitas_daun):
        self._kualitas_daun = kualitas_daun
    
    def set_level_packaging(self, level_packaging):
        self._level_packaging = level_packaging