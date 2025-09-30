// Individu.java

public class Individu {

    private String noKtp;
    private String nama;
    private String alamat;

    // Konstruktor
    public Individu(String noKtp, String nama, String alamat) {
        this.noKtp = noKtp;
        this.nama = nama;
        this.alamat = alamat;
    }

    // Getter dan Setter (Menggunakan konvensi camelCase Java)
    public String getNoKtp() {
        return noKtp;
    }

    public String getNama() {
        return nama;
    }

    public String getAlamat() {
        return alamat;
    }

    public void setNoKtp(String noKtp) {
        this.noKtp = noKtp;
    }

    public void setNama(String nama) {
        this.nama = nama;
    }

    public void setAlamat(String alamat) {
        this.alamat = alamat;
    }
}
