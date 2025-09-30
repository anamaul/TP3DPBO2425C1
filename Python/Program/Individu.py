class Individu:
    def __init__(self, no_ktp, nama, alamat):
        # Konstruktor untuk inisialisasi data dasar individu
        # Data yang disimpan adalah informasi identitas umum
        self._no_ktp = no_ktp    # Nomor KTP sebagai identitas unik
        self._nama = nama        # Nama lengkap individu
        self._alamat = alamat    # Alamat tempat tinggal

    # Getter methods - untuk mengakses data private
    def get_no_ktp(self):
        return self._no_ktp
    
    def get_nama(self):
        return self._nama
    
    def get_alamat(self):
        return self._alamat

    # Setter methods - untuk mengubah data private dengan kontrol
    def set_no_ktp(self, no_ktp):
        self._no_ktp = no_ktp

    def set_nama(self, nama):
        self._nama = nama

    def set_alamat(self, alamat):
        self._alamat = alamat