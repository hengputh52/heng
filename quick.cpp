#include <iostream>
using namespace std;

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

void printArray(int array[], int size) {
  int i;
  for (i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}

int partition(int array[], int low, int high) {
    
 
  int pivot = array[high];
  int i = (low - 1);
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
      i++;
      swap(&array[i], &array[j]);
    }
  }
  swap(&array[i + 1], &array[high]);
  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {
    int pi = partition(array, low, high);
    quickSort(array, low, pi - 1);
    quickSort(array, pi + 1, high);
  }
}

int main() {
  int data[] = {92, 47, 73, 16, 88, 52, 33, 4, 65, 29,
39, 58, 85, 12, 71, 30, 99, 6, 50, 26,
44, 81, 13, 95, 21, 78, 34, 60, 8, 46,
18, 93, 53, 31, 74, 40, 55, 27, 14, 86,
22, 97, 37, 62, 5, 68, 90, 35, 66, 15};
  int n = sizeof(data) / sizeof(data[0]);
  cout << "Unsorted Array: \n";
  printArray(data, n);
  quickSort(data, 0, n - 1);
  cout << "Sorted array in ascending order: \n";
  printArray(data, n);
}