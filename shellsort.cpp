#include <iostream>
using namespace std;

void shellSort(int array[], int n) {
  for (int interval = n / 2; interval > 0; interval /= 2) {
    for (int i = interval; i < n; i += 1) {
      int temp = array[i];
      int j;
      for (j = i; j >= interval && array[j - interval] > temp; j -= interval) {
        array[j] = array[j - interval];
      }
      array[j] = temp;
    }
  }
}

void printArray(int array[], int size) {
  int i;
  for (i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}

int main() {
  int data[] = {32, 47, 13, 88, 24, 57, 3, 91, 29, 76, 18, 43, 12, 61, 54, 39, 5,
   82, 27, 64, 7, 22, 45, 38, 96, 81, 10, 72, 16, 53, 34, 6, 50, 99, 25, 69, 9, 80,
    21, 14, 55, 41, 67, 33, 77, 1, 63, 28, 92, 48};
  int size = sizeof(data) / sizeof(data[0]);
  cout<<"before shell sort:"<<endl;
  printArray(data, size);
  shellSort(data, size);
  cout << " after shell sort array: \n";
  printArray(data, size);
}