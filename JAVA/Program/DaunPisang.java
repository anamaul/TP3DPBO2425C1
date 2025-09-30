// DaunPisang.java

public class DaunPisang {

    private String kode;
    private String nama;

    // Konstruktor
    public DaunPisang(String kode, String nama) {
        this.kode = kode;
        this.nama = nama;
    }

    // Getter dan Setter
    public String getKode() {
        return kode;
    }

    public String getNama() {
        return nama;
    }

    public void setKode(String kode) {
        this.kode = kode;
    }

    public void setNama(String nama) {
        this.nama = nama;
    }
}
