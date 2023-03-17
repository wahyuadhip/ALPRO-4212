#include <iostream>

using namespace std;

int penjumlahan(int a, int b){
  return a+b;
}
int pengurangan(int a, int b){
  return a-b;
}
int totalnilaiarr(int arr[], int n){
  int total = 0;
  for (int i=1; i<=n; i++){
    total += arr[i];
  }
  return total;
}
float ratanilaiarr(int arr[], int n){
  int total = totalnilaiarr(arr, n);
  float rata = (float)total/n;
  return rata;
}
int main()
{
    int bill1, bill2;

    cout << "masukan bilangan perrtama : ";
    cin >> bill1;

    cout << "masukan bilangan kedua : ";
    cin >> bill2;

    int hasilpenjumlahan = penjumlahan(bill1, bill2);
    int hasilpengurangan = pengurangan(bill1, bill2);

    cout << "hasil penjumlahan adalah : "<<hasilpenjumlahan<<endl;
    cout << "hasil pengurangan adalah : "<<hasilpengurangan<<endl;

    int n;
    cout << "_______array_____"<<endl;
    cout << " berapa baris? ";
    cin >> n;
    int arr[n];
      for(int i=1; i<=n; i++){
        cout << "masukan angka ke-" <<i<< " : ";
        cin >> arr[i];
    }
    int total = totalnilaiarr(arr, n);
    cout << "3.Jumlah Total : "<<total<<endl;
    float rata = ratanilaiarr(arr, n);
      cout << "4.rata-rata : "<<rata<<endl;

    return 0;
}




