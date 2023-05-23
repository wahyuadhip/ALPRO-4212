#include <iostream>

using namespace std;
bool isOdd(int num){
if (num %2!=0) return true;
else return false;
}

void smallestEven(int A[],int size){
  int min = INT_MAX;
  int index = -1;
  for (int i=0;i<size;i++){
    if(A[i] < min && A[i]%2==0){
        min = A[i];
        index = i+1;
    }
  }
  std::cout << "nilai genap terkecil adalah : " << min << "pada index : "<< index;
}
int main()
{
    int arr[] ={7,5,2,1,4};
    int size = sizeof(arr)/sizeof(int);

    smallestEven(arr,size);
    return 0;
}
