// Main.java

import java.util.ArrayList;
import java.util.List;

public class Main {

    // ====================================================================
    // FUNGSI UNTUK MENAMBAH DATA STATIS (ADD)
    // ====================================================================
    // Kelas utilitas untuk mengembalikan referensi objek yang dibuat
    private static class InitialDataReferences {

        DaunPisang dp1;
        DaunPisang dp2;
        KategoriStandarEkspor kse1;
        KategoriStandarEkspor kse2;
        PetaniDaunPisang p1;
        PetaniDaunPisang p2;
        NegaraEksporDaunPisang n1;
        EksportirDaunPisang e1;

        public InitialDataReferences(DaunPisang dp1, DaunPisang dp2, KategoriStandarEkspor kse1, KategoriStandarEkspor kse2,
                PetaniDaunPisang p1, PetaniDaunPisang p2, NegaraEksporDaunPisang n1, EksportirDaunPisang e1) {
            this.dp1 = dp1;
            this.dp2 = dp2;
            this.kse1 = kse1;
            this.kse2 = kse2;
            this.p1 = p1;
            this.p2 = p2;
            this.n1 = n1;
            this.e1 = e1;
        }
    }

    private static InitialDataReferences addDataStatis(
            List<DaunPisang> daunList,
            List<KategoriStandarEkspor> standarList,
            List<NegaraEksporDaunPisang> negaraList,
            List<PetaniDaunPisang> petaniList,
            List<EksportirDaunPisang> eksportirList) {

        System.out.println("\n--- [ADD] Menambahkan Data Awal Statis ---");

        // Daun Pisang
        DaunPisang dp1 = new DaunPisang("DP001", "Daun Pisang Raja");
        DaunPisang dp2 = new DaunPisang("DP002", "Daun Pisang Kepok");
        daunList.add(dp1);
        daunList.add(dp2);

        // Kategori Standar Ekspor
        KategoriStandarEkspor kse1 = new KategoriStandarEkspor("KSE001", "High", "10", "10", "10");
        KategoriStandarEkspor kse2 = new KategoriStandarEkspor("KSE002", "Medium", "8", "9", "9");
        standarList.add(kse1);
        standarList.add(kse2);

        // Petani (Inheritance + Aggregation: dp1, dp2)
        List<DaunPisang> daunP1 = new ArrayList<>();
        daunP1.add(dp1);
        PetaniDaunPisang p1 = new PetaniDaunPisang("320..125", "Ahmad Surya", "Bogor", daunP1);

        List<DaunPisang> daunP2 = new ArrayList<>();
        daunP2.add(dp2);
        PetaniDaunPisang p2 = new PetaniDaunPisang("320..126", "Ibu Mariam", "Sukabumi", daunP2);

        petaniList.add(p1);
        petaniList.add(p2);

        // Negara Ekspor (Aggregation: kse1)
        List<KategoriStandarEkspor> standarN1 = new ArrayList<>();
        standarN1.add(kse1);
        NegaraEksporDaunPisang n1 = new NegaraEksporDaunPisang("NEG001", "Jepang", standarN1);
        negaraList.add(n1);

        // Eksportir (Multiple Aggregation: n1, p1, p2)
        List<NegaraEksporDaunPisang> negaraE1 = new ArrayList<>();
        negaraE1.add(n1);

        List<PetaniDaunPisang> petaniE1 = new ArrayList<>();
        petaniE1.add(p1);
        petaniE1.add(p2);

        EksportirDaunPisang e1 = new EksportirDaunPisang("320..131", "PT. Daun Nusantara", "Jakarta", true, negaraE1, petaniE1);
        eksportirList.add(e1);

        System.out.println("✅ Penambahan data statis awal selesai.");

        // Mengembalikan referensi objek yang baru dibuat
        return new InitialDataReferences(dp1, dp2, kse1, kse2, p1, p2, n1, e1);
    }

    private static void addNewDataContoh(
            List<DaunPisang> daunList,
            List<KategoriStandarEkspor> standarList,
            List<NegaraEksporDaunPisang> negaraList,
            List<PetaniDaunPisang> petaniList,
            List<EksportirDaunPisang> eksportirList,
            DaunPisang dpRef, KategoriStandarEkspor kseRef, PetaniDaunPisang pRef, NegaraEksporDaunPisang nRef) {

        System.out.println("\n--- [ADD] Menambahkan SATU Data Baru untuk Demo ---");

        // 1. Daun Pisang Baru
        DaunPisang dpNew = new DaunPisang("DP004", "Daun Pisang Tanduk");
        daunList.add(dpNew);
        System.out.println("    + Daun Pisang: " + dpNew.getNama());

        // 2. Petani Baru (Aggregation: dpNew, dpRef)
        List<DaunPisang> daunPNew = new ArrayList<>();
        daunPNew.add(dpNew);
        daunPNew.add(dpRef);
        PetaniDaunPisang pNew = new PetaniDaunPisang("320..127", "Pak Joko", "Cianjur", daunPNew);
        petaniList.add(pNew);
        System.out.println("    + Petani: " + pNew.getNama());

        // 3. Negara Baru (Aggregation: kseRef)
        List<KategoriStandarEkspor> standarNNew = new ArrayList<>();
        standarNNew.add(kseRef);
        NegaraEksporDaunPisang nNew = new NegaraEksporDaunPisang("NEG003", "Malaysia", standarNNew);
        negaraList.add(nNew);
        System.out.println("    + Negara: " + nNew.getNama());

        // 4. Eksportir Baru (Multiple Aggregation: nNew, nRef, pNew, pRef)
        List<NegaraEksporDaunPisang> negaraENew = new ArrayList<>();
        negaraENew.add(nNew);
        negaraENew.add(nRef);

        List<PetaniDaunPisang> petaniENew = new ArrayList<>();
        petaniENew.add(pNew);
        petaniENew.add(pRef);

        EksportirDaunPisang eNew = new EksportirDaunPisang("320..132", "CV. Global Leaf", "Surabaya", false, negaraENew, petaniENew);
        eksportirList.add(eNew);
        System.out.println("    + Eksportir: " + eNew.getNama());
    }

    // ====================================================================
    // FUNGSI UNTUK MENAMPILKAN DATA LENGKAP (DISPLAY)
    // ====================================================================
    private static <T> void displayDataSection(String title, List<T> dataList) {
        System.out.printf("\n%s (%d Entitas)\n", title, dataList.size());
        System.out.println("--------------------------------------------------");
        if (dataList.isEmpty()) {
            System.out.println("     [KOSONG]");
            return;
        }

        for (int i = 0; i < dataList.size(); i++) {
            T obj = dataList.get(i);
            String namaUtama = "";

            // Mencari nama utama
            if (obj instanceof DaunPisang) {
                namaUtama = ((DaunPisang) obj).getNama();
            } else if (obj instanceof KategoriStandarEkspor) {
                namaUtama = ((KategoriStandarEkspor) obj).getNamaStandar();
            } else if (obj instanceof Individu) { // PetaniDaunPisang, KaryawanPemrosesanDaunPisang, EksportirDaunPisang
                namaUtama = ((Individu) obj).getNama();
            } else if (obj instanceof NegaraEksporDaunPisang) {
                namaUtama = ((NegaraEksporDaunPisang) obj).getNama();
            }

            System.out.printf("[%d] %s\n", i + 1, namaUtama);

            // Detail Daun Pisang
            if (obj instanceof DaunPisang) {
                DaunPisang dp = (DaunPisang) obj;
                System.out.printf("   Kode: %s\n", dp.getKode());

                // Detail Kategori Standar
            } else if (obj instanceof KategoriStandarEkspor) {
                KategoriStandarEkspor kse = (KategoriStandarEkspor) obj;
                System.out.printf("   Kode: %s, Kualitas: %s, Packaging: %s\n",
                        kse.getKodeStandar(), kse.getKualitasDaun(), kse.getLevelPackaging());

                // Detail Petani (Inheritance + Aggregation)
            } else if (obj instanceof PetaniDaunPisang) {
                PetaniDaunPisang p = (PetaniDaunPisang) obj;
                System.out.printf("   KTP: %s, Alamat: %s\n", p.getNoKtp(), p.getAlamat());
                String daunNames = "";
                for (DaunPisang d : p.getListDaunPisang()) {
                    daunNames += d.getNama() + ", ";
                }
                if (!daunNames.isEmpty()) {
                    daunNames = daunNames.substring(0, daunNames.length() - 2); // Menghapus koma terakhir
                }
                System.out.printf("   Daun Dibudidayakan: %s\n", daunNames);

                // Detail Negara Ekspor (Aggregation)
            } else if (obj instanceof NegaraEksporDaunPisang) {
                NegaraEksporDaunPisang n = (NegaraEksporDaunPisang) obj;
                System.out.printf("   Kode: %s\n", n.getKodeNegara());
                String standarNames = "";
                for (KategoriStandarEkspor k : n.getListKategoriStandarEkspor()) {
                    standarNames += k.getNamaStandar() + ", ";
                }
                if (!standarNames.isEmpty()) {
                    standarNames = standarNames.substring(0, standarNames.length() - 2);
                }
                System.out.printf("   Standar Diterima: %s\n", standarNames);

                // Detail Eksportir (Multiple Aggregation)
            } else if (obj instanceof EksportirDaunPisang) {
                EksportirDaunPisang e = (EksportirDaunPisang) obj;
                System.out.printf("   Jual Lokal: %s\n", e.isStatusJualLokal() ? "Ya" : "Tidak");

                String negaraNames = "";
                for (NegaraEksporDaunPisang n : e.getListNegaraEksporDaunPisang()) {
                    negaraNames += n.getNama() + ", ";
                }
                if (!negaraNames.isEmpty()) {
                    negaraNames = negaraNames.substring(0, negaraNames.length() - 2);
                }

                String petaniNames = "";
                for (PetaniDaunPisang p : e.getListPetaniDaunPisang()) {
                    petaniNames += p.getNama() + ", ";
                }
                if (!petaniNames.isEmpty()) {
                    petaniNames = petaniNames.substring(0, petaniNames.length() - 2);
                }

                System.out.printf("   Tujuan Negara: %s\n", negaraNames);
                System.out.printf("   Supplier Petani: %s\n", petaniNames);
            }
        }
    }

    private static void displayAllData(
            List<DaunPisang> daunList,
            List<KategoriStandarEkspor> standarList,
            List<NegaraEksporDaunPisang> negaraList,
            List<PetaniDaunPisang> petaniList,
            List<EksportirDaunPisang> eksportirList) {

        displayDataSection("DATA DAUN PISANG", daunList);
        displayDataSection("DATA KATEGORI STANDAR EKSPOR", standarList);
        displayDataSection("DATA PETANI DAUN PISANG", petaniList);
        displayDataSection("DATA NEGARA EKSPOR DAUN PISANG", negaraList);
        displayDataSection("DATA EKSPORTIR DAUN PISANG", eksportirList);
    }

    // ====================================================================
    // FUNGSI UTAMA (MAIN)
    // ====================================================================
    public static void main(String[] args) {
        System.out.println("============================================================");
        System.out.println("SISTEM MANAJEMEN DAUN PISANG (JAVA) - DEMO ADD & DISPLAY");
        System.out.println("============================================================");

        // Inisialisasi daftar
        List<DaunPisang> daunPisangList = new ArrayList<>();
        List<KategoriStandarEkspor> kategoriStandarList = new ArrayList<>();
        List<NegaraEksporDaunPisang> negaraEksporList = new ArrayList<>();
        List<PetaniDaunPisang> petaniList = new ArrayList<>();
        List<EksportirDaunPisang> eksportirList = new ArrayList<>();

        // Bagian 1: Tampilkan data sebelum penambahan
        System.out.println("\n#################### FASE 1: DATA SEBELUM DITAMBAHKAN ####################");
        displayAllData(daunPisangList, kategoriStandarList, negaraEksporList, petaniList, eksportirList);

        // Bagian 2: Penambahan data statis awal
        // Mendapatkan referensi objek yang dibuat
        InitialDataReferences refs = addDataStatis(
                daunPisangList, kategoriStandarList, negaraEksporList, petaniList, eksportirList
        );

        // Bagian 3: Tampilkan data setelah penambahan awal
        System.out.println("\n#################### FASE 2: DATA SETELAH PENAMBAHAN AWAL ####################");
        displayAllData(daunPisangList, kategoriStandarList, negaraEksporList, petaniList, eksportirList);

        // Bagian 4: Penambahan data baru (untuk demo perubahan)
        addNewDataContoh(daunPisangList, kategoriStandarList, negaraEksporList, petaniList, eksportirList,
                refs.dp1, refs.kse2, refs.p1, refs.n1);

        // Bagian 5: Tampilkan data setelah penambahan final
        System.out.println("\n#################### FASE 3: DATA SETELAH PENAMBAHAN FINAL ####################");
        displayAllData(daunPisangList, kategoriStandarList, negaraEksporList, petaniList, eksportirList);

        System.out.println("\n============================================================");
        System.out.println("PROGRAM SELESAI.");
    }
}
