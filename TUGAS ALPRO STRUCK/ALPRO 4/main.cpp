#include <iostream>

using namespace std;

enum Cuaca {
    Cerah,
    Mendung,
    Hujan,
    Berawan,
    Badai
};


int main()
{
    Cuaca kondisiCuaca = Mendung;

    switch (kondisiCuaca) {
        case Cerah:
            cout << "Cuaca saat ini cerah." << endl;
            break;
        case Mendung:
            cout << "Cuaca saat ini mendung." << endl;
            break;
        case Hujan:
            cout << "Cuaca saat ini hujan." << endl;
            break;
        case Berawan:
            cout << "Cuaca saat ini berawan." << endl;
            break;
        case Badai:
            cout << "Cuaca saat ini badai." << endl;
            break;
        default:
            cout << "Tidak diketahui kondisi cuaca saat ini." << endl;
    }

    return 0;
}
