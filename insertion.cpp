#include <iostream>
using namespace std;

void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void insertionSort(int array[], int size) {
  for (int step = 1; step < size; step++) {
    int key = array[step];
    int j = step - 1;
    while (j >=0 && key < array[j]) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}
int main() {
  int data[] = {10, 14, 6, 9, 8};
  int size = sizeof(data) / sizeof(data[0]);
  cout << "before sorting :\n";
  printArray(data, size);
  insertionSort(data, size);
  cout << "after sorting:\n";
  printArray(data, size);
}