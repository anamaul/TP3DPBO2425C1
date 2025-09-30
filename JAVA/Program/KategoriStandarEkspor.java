// KategoriStandarEkspor.java

public class KategoriStandarEkspor {

    private String kodeStandar;
    private String namaStandar;
    private String levelKebersihan;
    private String kualitasDaun;
    private String levelPackaging;

    // Konstruktor
    public KategoriStandarEkspor(String kodeStandar, String namaStandar, String levelKebersihan, String kualitasDaun, String levelPackaging) {
        this.kodeStandar = kodeStandar;
        this.namaStandar = namaStandar;
        this.levelKebersihan = levelKebersihan;
        this.kualitasDaun = kualitasDaun;
        this.levelPackaging = levelPackaging;
    }

    // Getter dan Setter
    public String getKodeStandar() {
        return kodeStandar;
    }

    public String getNamaStandar() {
        return namaStandar;
    }

    public String getLevelKebersihan() {
        return levelKebersihan;
    }

    public String getKualitasDaun() {
        return kualitasDaun;
    }

    public String getLevelPackaging() {
        return levelPackaging;
    }

    public void setKodeStandar(String kodeStandar) {
        this.kodeStandar = kodeStandar;
    }

    public void setNamaStandar(String namaStandar) {
        this.namaStandar = namaStandar;
    }

    public void setLevelKebersihan(String levelKebersihan) {
        this.levelKebersihan = levelKebersihan;
    }

    public void setKualitasDaun(String kualitasDaun) {
        this.kualitasDaun = kualitasDaun;
    }

    public void setLevelPackaging(String levelPackaging) {
        this.levelPackaging = levelPackaging;
    }
}
