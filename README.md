# Menampilkan Waktu Akurat Tanpa RTC Menggunakan Protokol NTP

![Nusabot Logo](https://nusabot.id/images/logo/logo-login.svg)

## Deskripsi Proyek

Proyek ini merupakan bagian dari kelas Nusabot yang bertujuan untuk menampilkan waktu yang akurat tanpa menggunakan Real Time Clock (RTC), melainkan menggunakan protokol NTP (Network Time Protocol). Dengan proyek ini, pengguna dapat menampilkan waktu yang tepat ke TM1637 (7-Segment Display) menggunakan koneksi internet dan protokol NTP.

## Fitur

- Menampilkan waktu yang akurat menggunakan protokol NTP
- Tampilan waktu yang jelas dan mudah dibaca pada TM1637
- Konfigurasi yang mudah dan ringkas

## Cara Kerja

1. Perangkat akan terhubung ke jaringan internet.
2. Perangkat akan mengirim permintaan waktu ke server NTP menggunakan protokol NTP.
3. Server NTP akan merespons dengan waktu yang tepat.
4. Perangkat akan menampilkan waktu yang diterima pada TM1637.

## Instalasi dan Penggunaan

1. Clone repositori ini ke perangkat lokal Anda.
2. Pastikan perangkat telah terhubung ke jaringan internet yang dapat mengakses server NTP.
3. Konfigurasikan perangkat untuk menggunakan koneksi internet.
4. Jalankan proyek di perangkat Anda.
5. Tunggu beberapa saat sampai waktu yang tepat diterima dan ditampilkan pada TM1637.

## Kontribusi

Kami mengundang kontribusi dari komunitas. Jika Anda memiliki saran, perbaikan, atau peningkatan, silakan buka *issue* baru atau kirimkan *pull request*.

## Lisensi

Proyek ini dilisensikan di bawah [MIT License](LICENSE).
