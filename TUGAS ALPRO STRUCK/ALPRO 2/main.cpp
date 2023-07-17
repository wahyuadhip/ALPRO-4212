#include <iostream>
#include <string>
using namespace std;

struct Sepeda {
    string merk;
    string type;
    int tahun;
    string harga;
};

int main()
{
    Sepeda sepeda;

    sepeda.merk = "BMX FREESTYLE 12T";
    sepeda.type = "Sepeda BMX";
    sepeda.tahun = 2023;
    sepeda.harga = "2.350.800";

    cout << "Merk: " << sepeda.merk << endl;
    cout << "Type: " << sepeda.type << endl;
    cout << "Tahun: " << sepeda.tahun << endl;
    cout << "Harga: " << sepeda.harga << endl;

    return 0;
}
