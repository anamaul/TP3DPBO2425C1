// KaryawanPemrosesanDaunPisang.java

import java.util.List;

// Inheritance
public class KaryawanPemrosesanDaunPisang extends Individu {

    private String jenis;
    // Aggregation
    private List<PetaniDaunPisang> listPetaniDaunPisang;

    // Konstruktor
    public KaryawanPemrosesanDaunPisang(String noKtp, String nama, String alamat, String jenis, List<PetaniDaunPisang> listPetaniDaunPisang) {
        // Memanggil konstruktor parent class
        super(noKtp, nama, alamat);
        this.jenis = jenis;
        this.listPetaniDaunPisang = listPetaniDaunPisang;
    }

    // Getter dan Setter
    public String getJenis() {
        return jenis;
    }

    public List<PetaniDaunPisang> getListPetaniDaunPisang() {
        return listPetaniDaunPisang;
    }

    public void setJenis(String jenis) {
        this.jenis = jenis;
    }

    public void setListPetaniDaunPisang(List<PetaniDaunPisang> listPetaniDaunPisang) {
        this.listPetaniDaunPisang = listPetaniDaunPisang;
    }
}
