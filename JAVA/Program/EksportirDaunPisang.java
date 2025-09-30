// EksportirDaunPisang.java

import java.util.List;

// Inheritance
public class EksportirDaunPisang extends Individu {

    private boolean statusJualLokal;
    // Multiple Aggregation
    private List<NegaraEksporDaunPisang> listNegaraEksporDaunPisang;
    private List<PetaniDaunPisang> listPetaniDaunPisang;

    // Konstruktor
    public EksportirDaunPisang(String noKtp, String nama, String alamat, boolean statusJualLokal, List<NegaraEksporDaunPisang> listNegaraEksporDaunPisang, List<PetaniDaunPisang> listPetaniDaunPisang) {
        // Memanggil konstruktor parent class
        super(noKtp, nama, alamat);
        this.statusJualLokal = statusJualLokal;
        this.listNegaraEksporDaunPisang = listNegaraEksporDaunPisang;
        this.listPetaniDaunPisang = listPetaniDaunPisang;
    }

    // Getter dan Setter
    public boolean isStatusJualLokal() {
        return statusJualLokal;
    }

    public List<NegaraEksporDaunPisang> getListNegaraEksporDaunPisang() {
        return listNegaraEksporDaunPisang;
    }

    public List<PetaniDaunPisang> getListPetaniDaunPisang() {
        return listPetaniDaunPisang;
    }

    public void setStatusJualLokal(boolean statusJualLokal) {
        this.statusJualLokal = statusJualLokal;
    }

    public void setListNegaraEksporDaunPisang(List<NegaraEksporDaunPisang> listNegaraEksporDaunPisang) {
        this.listNegaraEksporDaunPisang = listNegaraEksporDaunPisang;
    }

    public void setListPetaniDaunPisang(List<PetaniDaunPisang> listPetaniDaunPisang) {
        this.listPetaniDaunPisang = listPetaniDaunPisang;
    }
}
