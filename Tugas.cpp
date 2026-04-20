#include <iostream>
using namespace std;

class Barang{
public :
    int jumlah;
    string nama;
    string kategori;
    string tanggalProduksi;

    void tampilkanSpesifikasi(){
        cout << "Nama           : " << nama << endl;
        cout << "Jumlah         : " << jumlah << endl;
        cout << "Kategori       : " << kategori << endl;
        cout << "Tanggal Produksi : " << tanggalProduksi << endl;
    }
}; //batas class

int main(){
    Barang elektronik; //object
    elektronik.nama = "Laptop Infinix xbook15";
    elektronik.jumlah = 5;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "2025-05-05";

    Barang nonElektronik; //object
    nonElektronik.nama = "Sepatu Kalcer";
    nonElektronik.jumlah = 8;
    nonElektronik.kategori = "Non-Elektronik";
    nonElektronik.tanggalProduksi = "2025-01-02";

    elektronik.tampilkanSpesifikasi(); //method tampilkanSpesifikasi
    cout << endl;
    nonElektronik.tampilkanSpesifikasi(); //method tampilkanSpesifikasi
}