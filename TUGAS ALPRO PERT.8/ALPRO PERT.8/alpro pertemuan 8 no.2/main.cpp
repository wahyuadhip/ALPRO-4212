#include <iostream>

using namespace std;

int main()
{
    //bubble sort
    // input array
    int arr[5] = {3,1,5,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    //output array sebelum di sort
    cout << "sebelum di sort : ";
    for (int i=0; i<5; i++){
        cout <<arr[i]<< " ";
    }

    //bubble sort secara descending
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-i-1; j++){
            if (arr[j] < arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    //output array setelah di sort
    cout << "\nsetelah di sort : ";
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
