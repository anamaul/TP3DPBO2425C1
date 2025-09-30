// PetaniDaunPisang.java

import java.util.List;

// Inheritance
public class PetaniDaunPisang extends Individu {

    // Aggregation
    private List<DaunPisang> listDaunPisang;

    // Konstruktor
    public PetaniDaunPisang(String noKtp, String nama, String alamat, List<DaunPisang> listDaunPisang) {
        // Memanggil konstruktor parent class
        super(noKtp, nama, alamat);
        this.listDaunPisang = listDaunPisang;
    }

    // Getter dan Setter
    public List<DaunPisang> getListDaunPisang() {
        return listDaunPisang;
    }

    public void setListDaunPisang(List<DaunPisang> listDaunPisang) {
        this.listDaunPisang = listDaunPisang;
    }
}
