#include <iostream>

using namespace std;

struct BangunDatar {
    float panjang;
    float lebar;
};

struct Lingkaran {
    float radius;
};

struct Kerucut {
    float radius;
    float tinggi;
};

struct Bola {
    float radius;
};

float hitungLuasPersegiPanjang(BangunDatar persegiPanjang) {
    return persegiPanjang.panjang * persegiPanjang.lebar;
}

float hitungLuasLingkaran(Lingkaran lingkaran) {
    return 22.0 / 7.0 * lingkaran.radius * lingkaran.radius;
}

float hitungVolumeKerucut(Kerucut kerucut) {
    return 1.0 / 3.0 * 3.1415 * kerucut.radius * kerucut.radius * kerucut.tinggi;
}

float hitungVolumeBola(Bola bola) {
    return 4.0 / 3.0 * 3.1415 * bola.radius * bola.radius * bola.radius;
}

int main()
{
    BangunDatar persegiPanjang;
    Lingkaran lingkaran;
    Kerucut kerucut;
    Bola bola;

    // Input untuk persegi panjang
    cout << "Masukkan panjang persegi panjang: ";
    cin >> persegiPanjang.panjang;
    cout << "Masukkan lebar persegi panjang: ";
    cin >> persegiPanjang.lebar;

    // Input untuk lingkaran
    cout << "Masukkan radius lingkaran: ";
    cin >> lingkaran.radius;

    // Input untuk kerucut
    cout << "Masukkan radius kerucut: ";
    cin >> kerucut.radius;
    cout << "Masukkan tinggi kerucut: ";
    cin >> kerucut.tinggi;

    // Input untuk bola
    cout << "Masukkan radius bola: ";
    cin >> bola.radius;

    // Luas Persegi panjang
    cout << "Luas Persegi Panjang: " << hitungLuasPersegiPanjang(persegiPanjang) << endl;

    // Luas lingkaran
    cout << "Luas Lingkaran: " << hitungLuasLingkaran(lingkaran) << endl;

    // Volume kerucut
    cout << "Volume Kerucut: " << hitungVolumeKerucut(kerucut) << endl;

    // Volume bola
    cout << "Volume Bola: " << hitungVolumeBola(bola) << endl;

    return 0;
}
