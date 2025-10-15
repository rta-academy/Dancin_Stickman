# Dancing Stickman — Arduino + LCD I2C 16×2
> Animasi stickman menari di LCD 16×2 menggunakan 8 custom characters (CGRAM). Simple, fun, cocok untuk dicoba agar tidak bosan belajar arduino.
<p align="center">
  <img src="https://github.com/user-attachments/assets/09793728-185f-4eb9-b88b-b6abd37430c3"
       alt="Dancing Stickman demo" width="480" />
</p>

## Fitur
- ✅ Animasi stickman dengan **8 frame** custom (CGRAM 0–7).
- ✅ Berjalan di **Arduino Uno** + **LCD 16×2 I2C (PCF8574)**.
- ✅ Kecepatan animasi dapat diatur.
- ✅ Kode ringkas & mudah dimodifikasi (ubah frame/pola sesuka hati).

## Hardware
| Item | Qty | Catatan |
|---|---:|---|
| Arduino Uno | 1 | 5V |
| LCD 16×2 I2C  | 1 | Alamat umum `0x27`/`0x3F` |
| Kabel jumper | secukupnya | SDA/SCL + VCC/GND |
| Sumber daya 5V | 1 | USB/Adaptor |

## Wiring (I2C)
<img width="1566" height="661" alt="Image" src="https://github.com/user-attachments/assets/45196e44-c756-45c1-adf4-7e5a1fbcffe7" />

| LCD | Arduino Uno |
|---|---|
| VCC | 5V |
| GND | GND |
| SDA | SDA |
| SCL | SCL |

> Jika layar samar/blank, putar **potensiometer kontras** pada modul I2C.

## Library
- **LiquidCrystal_I2C** (install via *Arduino IDE → Tools → Manage Libraries…*)

## Character Frame 
1. Download file excel ini untuk membuat karakter anda sendiri  
   -> [⬇️ Download Spreadsheet (XLSX)](https://docs.google.com/spreadsheets/d/1TzfaSSMKRx0CfV-7Kuf7-wRJp1uCR0qe/export?format=xlsx)
2. Jika anda sudah masuk ke excel, ketik 1 untuk mengubah kotak dikanan jadi biru dan ketik 0 utuk mengubah kotak jadi putih
3. Lakukan sampai anda mendapatkan character yang anda inginkan
4. Salin angka biner di kotak kiri, lalu masukkan ke kode program anda

## Cara Menjalankan
1. Rakit sesuai tabel *Wiring* di atas.
2. Install library **LiquidCrystal_I2C**.
3. Buka `DancingStickman.ino`, sesuaikan alamat I2C (`0x27`/`0x3F`) jika perlu.
4. Upload ke Arduino Uno.
5. Stickman akan tampil menari di baris pertama LCD.
