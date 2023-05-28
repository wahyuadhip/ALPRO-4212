#include <iostream>

using namespace std;
int penjumlahanRekursif(int n) {
  if (n == 1) {
    return 1;
  } else {
    return n + penjumlahanRekursif(n - 1);
  }
}

int penguranganrek (int a,int b){
    if (b==0){
        return a;
    }
    else{
        return penguranganrek (a-1,b-1);
    }
}

int perkalianrekursif (int a,int b){
    if (b==0){
        return 0;
    }
    else{
        return a + perkalianrekursif (a,b-1);
    }
}

int pembagianrek (int a,int b){
    if (a < b){
        return 0;
    }
    else{
        return 1 + pembagianrek (a-b,b);
    }
}

int pangkatrekursif (int bas,int pang){
    if (pang==0){
        return 1;
    }
    else{
        return bas * pangkatrekursif (bas,pang-1);
    }
}

int main()
{
    int n;
  cout << "Masukkan nilai n: ";
  cin >> n;

  int hasil = penjumlahanRekursif(n);
  cout << "Hasil penjumlahan dari 1 hingga" << n << " adalah: " << hasil << endl;

// PENGURANGAN
    int nilai1,nilai2;
    cout << "Masukkan nilai pengurangan : " << endl;
    cin >> nilai1;
    cout << "Masukkan nilai pengurangan : " << endl;
    cin >> nilai2;

    int hasilnilai = penguranganrek (nilai1,nilai2);
    cout << "Hasil Pengurangan : " << hasilnilai << endl;

//PERKALIAN
    int angka1,angka2;
    cout << "Masukkan angka perkalian :" << endl;
    cin >> angka1;
    cout << "Masukkan angka perkalian :" << endl;
    cin >> angka2;

    int kalirek = perkalianrekursif (angka1,angka2);
    cout << "hasil perkalian : " << kalirek << endl;

//PEMBAGIAN
    int bagi1,bagi2;
    cout << "Masukkan bilangan pembagian :" << endl;
    cin >> bagi1;
    cout << "Masukkan bilangan pembagian :" << endl;
    cin >> bagi2;

    int hasilbagi = pembagianrek (bagi1,bagi2);
    cout << "hasil pembagian : " << hasilbagi << endl;

//PANGKAT
    int bilangan1,pangkat2;
    cout << "masukkan bilangan : " << endl;
    cin >> bilangan1;
    cout << "masukkan pangkat  : " << endl;
    cin >> pangkat2;

    int hasilpangkat = pangkatrekursif (bilangan1,pangkat2);
    cout << "hasil pangkat :" << hasilpangkat << endl;



    return 0;
}
