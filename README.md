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

<h3>Untuk inputan di programnya seperti ini</h3>

<img width="599" height="515" alt="image" src="https://github.com/user-attachments/assets/75eaca06-d784-4959-87ab-2999595ccf85" />

<h3>Outputnya seperti ini</h3>

<img width="571" height="646" alt="image" src="https://github.com/user-attachments/assets/fb5130f2-7c1c-4a09-829a-7200200ee729" />

<h3>Ketika mau ditambah lagi di hardcodenya seperti ini</h3>

<img width="697" height="501" alt="image" src="https://github.com/user-attachments/assets/b98d2030-fdfc-466b-990a-e8f4afdb19ac" />

<h3>Ini Outputnya</h3>

<img width="579" height="966" alt="image" src="https://github.com/user-attachments/assets/73ce3a95-f010-46d0-9d3a-c56c79ac6703" />

CPP:

<img width="333" height="1034" alt="image" src="https://github.com/user-attachments/assets/6b1da98e-0594-47ce-b280-22e6feb8ed93" />

Python:

<img width="338" height="1008" alt="image" src="https://github.com/user-attachments/assets/e2afc197-2587-4b5b-925a-813961640280" />

Java:

<img width="330" height="1037" alt="image" src="https://github.com/user-attachments/assets/1f70407f-b165-4e12-bafb-a12e1ae80b22" />
