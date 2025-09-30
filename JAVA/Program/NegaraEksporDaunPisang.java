// NegaraEksporDaunPisang.java

import java.util.List;

public class NegaraEksporDaunPisang {

    private String kodeNegara;
    private String nama;
    // Aggregation
    private List<KategoriStandarEkspor> listKategoriStandarEkspor;

    // Konstruktor
    public NegaraEksporDaunPisang(String kodeNegara, String nama, List<KategoriStandarEkspor> listKategoriStandarEkspor) {
        this.kodeNegara = kodeNegara;
        this.nama = nama;
        this.listKategoriStandarEkspor = listKategoriStandarEkspor;
    }

    // Getter dan Setter
    public String getKodeNegara() {
        return kodeNegara;
    }

    public String getNama() {
        return nama;
    }

    public List<KategoriStandarEkspor> getListKategoriStandarEkspor() {
        return listKategoriStandarEkspor;
    }

    public void setKodeNegara(String kodeNegara) {
        this.kodeNegara = kodeNegara;
    }

    public void setNama(String nama) {
        this.nama = nama;
    }

    public void setListKategoriStandarEkspor(List<KategoriStandarEkspor> listKategoriStandarEkspor) {
        this.listKategoriStandarEkspor = listKategoriStandarEkspor;
    }
}
