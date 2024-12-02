
#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int p, int q, int r) {
  

  int n1 = q - p + 1;
  int n2 = r - q;
  
  
  vector<int> L(n1);
  vector<int> M(n2);
  
  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
    
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];
    
  
  int i = 0, j = 0, k = p;
  
  
  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }
  
  
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }
  
  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}


void mergeSort(int arr[], int l, int r) {
  if (l < r) {
   
    int m = l + (r - l) / 2;
    
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
  }
}


void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}


int main() {
  int arr[] = {92, 47, 73, 16, 88, 52, 33, 4, 65, 29,
39, 58, 85, 12, 71, 30, 99, 6, 50, 26,
44, 81, 13, 95, 21, 78, 34, 60, 8, 46,
18, 93, 53, 31, 74, 40, 55, 27, 14, 86,
22, 97, 37, 62, 5, 68, 90, 35, 66, 15};
  int size = sizeof(arr) / sizeof(arr[0]);
  cout<<"before merge sort"<<endl;
  printArray(arr, size);
  cout<<"after merge sort"<<endl;
  mergeSort(arr, 0, size - 1);
  cout << "Sorted array: \n";
  printArray(arr, size);
  return 0;
}
