//selection Sort code
#include <iostream>
using namespace std;
void SelectionSort(int arr[], int size) {
    int i, j, min_idx;
    for (i = 0; i < size - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        swap(arr[min_idx], arr[i]);
    }
}
int main() {
    int arr[] = { 70,45,33,250,45,25,63,820,559,333 };
    int size = sizeof(arr) / sizeof(arr[0]);
    SelectionSort(arr, size);
    cout << "Sorted array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
