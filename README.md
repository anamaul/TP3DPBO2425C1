<h1>Janji</h1>
Saya Muhammad Maulana Adrian dengan NIM 2408647 mengerjakan Tugas Praktikum 3
dalam mata kuliah Desain Pemrograman Berbasis Objek untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

<h2>Diagram</h2>

<img width="988" height="541" alt="image" src="https://github.com/user-attachments/assets/95d8d6e6-fd38-4e5e-899e-35197ef2ef50" />

<h3>Penjelasan</h3>

* Dari diagram tersebut terdapat Hierarchical inheritance, Dimana class Individu mewarisi ke 3 class yaitu class KaryawanPemrosesanDaunPisang, PetaniDaunPisang, EksportirDaunPisang, karena dari ke-3 class tersebut juga memakai atribut yang ada di individu yaitu, noktp, nama, dan alamat.
* KaryawanPemrosesanDaunPisang use ke PetaniDaunPisang, karena seorang karyawan memproses daun pisang yang berasal dari petani tertentu. Karyawan dan petani dapat eksis tanpa satu sama lain.(Agregasi)
* EksportirDaunPisang use ke PetaniDaunPisang, karena eksportir memiliki atau berasosiasi dengan petani, tetapi petani tersebut dapat menjual hasil panennya ke entitas lain.(Agregasi)
* EksportirDaunPisang use ke NegaraEksportirDaunPisang, karena eksportir berhubungan dengan banyak negara ekspor, dan negara tersebut tetap ada meskipun eksportir tidak lagi beroperasi.(Agregasi)
* NegaraEksporDaunPisang use ke KategoriStandarEkspor, karena sebuah negara memiliki satu atau lebih standar, tetapi standar tersebut bisa diterapkan pada negara lain juga.(Agregasi)
* PetaniDaunPisang use ke DaunPisang, karena Jika petani berhenti bekerja, daun pisang yang sudah dipanen tetap ada dan dapat dijual.(Agregasi)

* Atribut NoKtp, Nama, Alamat, pada kelas Individu, itu dipakai di 3 kelas yang diwariskan.
* KaryawanPemrosesanDaunPisang, memiliki atribut Jenis, yang menjelaskan kalau karyawan tersebut karyawan lepas
atau karyawan tetap, dan atribut ListPetaniDaunPisang itu use dari kelas PetaniDaunPisang untuk mengetahui petani-petaninya dan list daun pisang yang dipanen oleh para petani.
* ListDaunPisang pada kelas PetaniDaunPisang, dipakai untuk mengetahui bahwa dari petani memanen daun pisang apa saja.
* StatusJualLokal pada kelas EksportirDaunPisang, digunakan untuk megnetahui kalau status jualnya lokal saja atau ke luar negeri saja(true/false).
* ListNegaraEksportirDaunPisang use ke kelas NegaraEksporDaunPisang, untuk mengetahui kalau dari suatu negara itu kategori standarnya itu apa. Untuk mengetahui negaranya, setiap negara memiliki KodeNegara yang berbeda. Lalu kategori standar ekspor ini didapat datanya dari kelas KategoriStandarEkspor.
* Kelas KategoriStandarEkspor, memiliki atribut, KodeStandar, digunakan jika mau searching kategori tertentu, maka yang dicari dari KodeStandarnya. Atribut NamaStandar menjelaskan kalau standar tersebut low, low medium, medium, medium high, high.
* Atribut LevelKebersihan(1-10) menjelaskan berapa tingkat kebersihannya dari 1-10, begitu pula dengan LevelKualitasDaun dan LevelPackaging dijelaskannya berdasarkan 1-10 tingkatannya itu seperti apa.
* Atribut Kode pada kelas DaunPisang digunakan untuk kelas PetaniDaunPisang mencari ke kelas DaunPisang, agar mengetahui kalau dari petani A memanen daun pisang apa saja, karena di kelas DaunPisang terdapat atribut Nama, yaitu nama daun pisangnya.
* Getter setter, pada setiap kelas berfungsi untuk mengambil dan menyimpan data yang diambil sebelumnya.

<h3>Tampilan awal ketika masih kosong</h3>

<img width="541" height="426" alt="image" src="https://github.com/user-attachments/assets/a3b18a48-8991-4a42-8388-1cfb045d24da" />
