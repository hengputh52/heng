#include <iostream>
using namespace std;
  
void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
  
    if (left < n && arr[left] > arr[largest])
      largest = left;
  
    if (right < n && arr[right] > arr[largest])
      largest = right;
    if (largest != i) {
      swap(arr[i], arr[largest]);
      heapify(arr, n, largest);
    }
  }

void heapSort(int arr[], int n) {

    for (int i = n / 2 - 1; i >= 0; i--)
      heapify(arr, n, i);

    for (int i = n - 1; i >= 0; i--) {
      swap(arr[0], arr[i]);
  
      heapify(arr, i, 0);
    }
  }
  void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
      cout << arr[i] << " ";
    cout << "\n";
  }
  
  int main() {
    int arr[] = {42, 17, 63, 89, 5, 27, 34, 91, 56, 22, 
78, 3, 44, 69, 11, 58, 24, 99, 35, 73, 
62, 9, 46, 18, 84, 12, 30, 77, 6, 51, 
65, 32, 28, 96, 15, 41, 70, 8, 57, 93, 
23, 67, 10, 37, 60, 4, 80, 50, 13, 88};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"before heapsort:"<<endl;
    printArray(arr, n);
    heapSort(arr, n);
  
    cout << "Sorted array is \n";
    printArray(arr, n);
  }