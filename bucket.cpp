#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<float>& bucket) {
    for (int i = 1; i < bucket.size(); ++i) {
        float key = bucket[i];
        int j = i - 1;
        while (j >= 0 && bucket[j] > key) {
            bucket[j + 1] = bucket[j];
            j--;
        }
        bucket[j + 1] = key;
    }
}
void bucketSort(float arr[], int n) {
    vector<float> b[n];

    for (int i = 0; i < n; i++) {
        int bi = n * arr[i];
        b[bi].push_back(arr[i]);
    }

    for (int i = 0; i < n; i++) {
        insertionSort(b[i]);
    }
    int index = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < b[i].size(); j++) {
            arr[index++] = b[i][j];
        }
    }
}

int main() {
    float arr[] = {0.125, 0.947, 0.364, 0.789, 0.512
    , 0.403, 0.267, 0.892, 0.134, 0.776, 0.958, 0.246,
     0.659, 0.371, 0.084, 0.505, 0.829, 0.437, 0.982, 0.251,
      0.608, 0.793, 0.146, 0.376, 0.915, 0.237, 0.529, 0.489,
       0.803, 0.179, 0.356, 0.745, 0.919, 0.284, 0.473, 0.608,
        0.358, 0.276, 0.549, 0.102, 0.825, 0.693, 0.457, 0.341, 
        0.719, 0.632, 0.567, 0.918, 0.202, 0.489};
    int n = sizeof(arr) / sizeof(arr[0]);
    bucketSort(arr, n);
    cout << "Sorted array is \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
