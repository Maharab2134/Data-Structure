// Calculation of address of element of 1-D Array using row-major and colum-major order.

#include <iostream>
using namespace std;
int main() {
 int arr[3][4];
 cout << "Enter elements for the 2D array :" << endl;
 for (int i = 0; i < 3; i++) {
 for (int j = 0; j < 4; j++) {
 cin >> arr[i][j];
  }
  }
  int (*ptr)[4] = arr;
  cout << "Address first element of the array: " << ptr << endl;
  int row, col;
  cout << "Enter the row and column i want to find the address for:" << endl;
  cout << "Row index (0-2): ";
  cin >> row;
  cout << "Column index (0-3): ";
  cin >> col;
  if (row >= 0 && row < 3 && col >= 0 && col < 4) {
    int* element_ptr = &arr[row][col];
    cout << "Address of the element at row " << row << ", column " << col << ": " << element_ptr << endl;
    } else 
    {
        cout << "Invalid row or column index.for columns." << endl;
    }
return 0;

}