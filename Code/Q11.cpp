//Insertion Sort code
#include <iostream>
using namespace std;
void InsertionSort(int arr[], int size) {
    int i, j, key;
    for (i = 1; i < size; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) { 
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key; 
    }
}
int main(){
    int arr[]={5,2,4,6,1,3};
    int size = sizeof(arr) / sizeof(arr[0]);
    InsertionSort(arr, size);
    cout<<"Sorted array: ";
  for (int i = 0; i < size; ++i) {
    cout << arr[i] << " ";
  }
    cout<<endl;
    return 0;
    
}