#include <iostream>
using namespace std;

void countSort(int array[], int size) {
  int output[100];
  int count[100];
  int max = array[0];

  for (int i = 1; i < size; i++) {
    if (array[i] > max)
      max = array[i];
  }

  for (int i = 0; i <= max; ++i) {
    count[i] = 0;
  }

  for (int i = 0; i < size; i++) {
    count[array[i]]++;
  }

  for (int i = 1; i <= max; i++) {
    count[i] += count[i - 1];
  }
  for (int i = size - 1; i >= 0; i--) {
    output[count[array[i]] - 1] = array[i];
    count[array[i]]--;
  }
  for (int i = 0; i < size; i++) {
    array[i] = output[i];
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}

int main() {
  int array[] = {47, 3, 89, 24, 56, 78, 12, 65, 33, 90, 41,
   73, 22, 94, 7, 68, 15, 80, 37, 52, 18, 86, 5, 64, 29, 50,
    11, 97, 39, 84, 21, 60, 8, 72, 25, 58, 43, 76, 16, 92,
     34, 99, 13, 61, 28, 88, 6, 69, 32, 45};
  int n = sizeof(array) / sizeof(array[0]);
  cout<<"before counting sort: "<<endl;
  printArray(array, n);
  cout<<"after counting sort: "<<endl;
  countSort(array, n);
  printArray(array, n);
}