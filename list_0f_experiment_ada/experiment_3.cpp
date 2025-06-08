#include <iostream>
#include <vector>
using namespace std;

// Function to partition the array using the FIRST element as pivot
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[low]; // First element as pivot
    int i = low + 1; // Index to track elements <= pivot
    int j = high;    // Index to track elements > pivot

    while (i <= j) {
        // Find element > pivot from the left
        while (i <= j && arr[i] <= pivot) {
            i++;
        }
        // Find element <= pivot from the right
        while (i <= j && arr[j] > pivot) {
            j--;
        }
        // Swap if needed
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
    // Place pivot in its correct position
    swap(arr[low], arr[j]);
    return j; // Return pivot index
}

// Recursive Quick Sort function
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);  // Sort left subarray
        quickSort(arr, pivotIndex + 1, high); // Sort right subarray
    }
}

// Function to print the array
void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {10, 7, 8, 9, 1, 5};

    cout << "Original Array: ";
    printArray(arr);

    quickSort(arr, 0, arr.size() - 1);

    cout << "Sorted Array: ";
    printArray(arr);

    return 0;
}