#include <iostream>

using namespace std;
//no.1
int max(int a, int b);
//no.2
int min(int a, int b);
//no.3
int max(int arr[], int size);
//no.4
int min(int arr[], int size);
//no.5
bool is_even(int num1);
//no.6
bool is_odd(int num2);
//no.7
bool is_factor(int num3, int factor);
//no.8
int searchArray(int arr[], int size, int target);
//no.9
bool isFound(int arrY[], int size, int num);









int main() {
  int num1, num2;

  cout << "Masukkan dua bilangan: ";
  cin >> num1 >> num2;

  cout << "Bilangan maksimum adalah: " << max(num1, num2) << endl;
  cout << "Bilangan minimum adalah: " << min(num1, num2) << endl;


  int arr[5] = {4, 6, 2, 8, 1};

  cout << "Bilangan maksimum adalah: " << max(arr, 5) << endl;
  cout << "Bilangan minimum adalah: " << min(arr, 5) << endl;


  int num;

  cout << "Masukkan sebuah bilangan: ";
  cin >> num;

  if (is_even(num)) {
    cout << num << " adalah bilangan genap." << endl;
  } else {
    cout << num << " adalah bilangan ganjil." << endl;
  }

  int num3 = 10;
  int factor = 2;

  if (is_factor(num3, factor)) {
    cout << factor << " adalah faktor dari " << num << endl;
  } else {
    cout << factor << " bukan faktor dari " << num << endl;
  }


  const int size = 5;
  int array[size] = {3,4,5,6,7};
  int target, index;

  cout << "masukan bilangan yang ingin dicari : ";
  cin >> target;

  index = searchArray(array, size, target);

  if(index == -1){
    cout << "bilangan tidak ditemukan dalam array" <<endl;
  } else{
    cout << "bilangan ditemukan pada indeks ke-" << index <<endl;
  }


  int arrY[size] = {3,4,5,6,7};

  cout << "masukan bilangan yang ingin dicari : ";
  cin >> num;

  if (isFound(arrY, size, num)){
    cout << "bilangan" << num << "ditemukan dalam array" << endl;
  } else {
      cout << "bilangan" << num << "tidak ditemukan dalam array" << endl;
  }









  return 0;
}






//no.1
int min(int a, int b) {
  if (a < b) {
    return a;
  } else {
    return b;
  }
}
//no.2
int max(int a, int b) {
  if (a > b) {
    return a;
  } else {
    return b;
  }
}
//no.3
int max(int arr[], int size){
  int max_val = arr[0];

  for (int i = 1; i < size; i++) {
    if (arr[i] > max_val) {
      max_val = arr[i];
    }
  }

  return max_val;
}
//no.4
int min(int arr[], int size){
int min_val = arr[0];

  for (int i = 1; i < size; i++) {
    if (arr[i] < min_val) {
      min_val = arr[i];
    }
  }

  return min_val;
}
//no.5
bool is_even(int num1) {
  return num1 % 2 == 0;
}
//no.6
bool is_odd(int num2) {
  return num2 % 2 != 0;
}
//no.7
bool is_factor(int num3, int factor) {
  return num3 % factor == 0;
}
//no.8
int searchArray(int arr[], int size, int target){
  for(int i=0; i<size; i++){
    if(arr[i] == target){
        return i;
    }
  }
}
//no.9
bool isFound(int arrY[], int size, int num){
  for (int i=0; i<size; i++){
    if(arrY[i] == num){
        return true;
    }
  }
  return false;
}

