//Calculation of address of element of 1-D Array using row-major and column-major order.

#include <iostream>
using namespace std;

int main() {
 int arr[3];
 int size = sizeof(arr) / sizeof(arr[0]);
 
 cout << "Enter elements for the array: "<< size << endl;
 for (int i = 0; i < size; i++)
 {
 cin >> arr[i];
 }
 int* ptr = arr;
 cout << "Address of the first element: " << ptr << endl;
 int index;
 cout << "Enter the index find the address: ";
 cin >> index;
 if (index >= 0 && index < size)
 {
 int* element_ptr = &arr[index];
 cout << "Address of the element at index: " << index << element_ptr << endl;
 }
 else {
 cout << "Invalid index." << size - 1 << "." << endl;
 }
 return 0;
}