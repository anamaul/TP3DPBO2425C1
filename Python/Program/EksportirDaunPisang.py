from Individu import Individu

class EksportirDaunPisang(Individu):
    def __init__(self, no_ktp, nama, alamat, status_jual_lokal, list_negara_ekspor_daun_pisang, list_petani_daun_pisang):
        # Inheritance dari kelas Individu
        super().__init__(no_ktp, nama, alamat)
        
        # Atribut khusus eksportir
        self._status_jual_lokal = status_jual_lokal  # Boolean: apakah juga jual di pasar lokal
        
        # Multiple Aggregation relationships
        # Hubungan dengan negara tujuan ekspor
        self._list_negara_ekspor_daun_pisang = list_negara_ekspor_daun_pisang # List NegaraEksporDaunPisang
        
        # Hubungan dengan petani pemasok
        self._list_petani_daun_pisang = list_petani_daun_pisang # List PetaniDaunPisang

    # Getter dan Setter untuk semua atribut khusus eksportir
    def get_status_jual_lokal(self):
        return self._status_jual_lokal
    
    def get_list_negara_ekspor_daun_pisang(self):
        return self._list_negara_ekspor_daun_pisang
    
    def get_list_petani_daun_pisang(self):
        return self._list_petani_daun_pisang

    def set_status_jual_lokal(self, status_jual_lokal):
        self._status_jual_lokal = status_jual_lokal
    
    def set_list_negara_ekspor_daun_pisang(self, list_negara_ekspor_daun_pisang):
        self._list_negara_ekspor_daun_pisang = list_negara_ekspor_daun_pisang
    
    def set_list_petani_daun_pisang(self, list_petani_daun_pisang):
        self._list_petani_daun_pisang = list_petani_daun_pisang
