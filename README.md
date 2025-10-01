<h1>Janji</h1>
Saya Muhammad Maulana Adrian dengan NIM 2408647 mengerjakan Tugas Praktikum 3
dalam mata kuliah Desain Pemrograman Berbasis Objek untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

<h2>Diagram</h2>

<img width="988" height="541" alt="image" src="https://github.com/user-attachments/assets/95d8d6e6-fd38-4e5e-899e-35197ef2ef50" />

<h3>Penjelasan</h3>

Dari diagram tersebut terdapat Hierarchical inheritance, Dimana class Individu mewarisi ke 3 class yaitu class KaryawanPemrosesanDaunPisang, PetaniDaunPisang, EksportirDaunPisang, karena dari ke-3 class tersebut juga memakai atribut yang ada di individu yaitu, noktp, nama, dan alamat.
KaryawanPemrosesanDaunPisang use ke PetaniDaunPisang, karena seorang karyawan memproses daun pisang yang berasal dari petani tertentu. Karyawan dan petani dapat eksis tanpa satu sama lain.(Agregasi)
EksportirDaunPisang use ke PetaniDaunPisang, karena eksportir memiliki atau berasosiasi dengan petani, tetapi petani tersebut dapat menjual hasil panennya ke entitas lain.(Agregasi)
EksportirDaunPisang use ke NegaraEksportirDaunPisang, karena eksportir berhubungan dengan banyak negara ekspor, dan negara tersebut tetap ada meskipun eksportir tidak lagi beroperasi.(Agregasi)
NegaraEksporDaunPisang use ke KategoriStandarEkspor, karena sebuah negara memiliki satu atau lebih standar, tetapi standar tersebut bisa diterapkan pada negara lain juga.(Agregasi)
PetaniDaunPisang use ke DaunPisang, karena Jika petani berhenti bekerja, daun pisang yang sudah dipanen tetap ada dan dapat dijual.(Agregasi)

