#include <iostream>
#include <vector>
using namespace std;

// Iterative Binary Search
int iterativeBinarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; // Not found
}

// Recursive Binary Search
int recursiveBinarySearch(const vector<int>& arr, int target, int left, int right) {
    if (left > right) {
        return -1; // Not found
    }

    int mid = left + (right - left) / 2;

    if (arr[mid] == target) {
        return mid;
    } else if (arr[mid] < target) {
        return recursiveBinarySearch(arr, target, mid + 1, right);
    } else {
        return recursiveBinarySearch(arr, target, left, mid - 1);
    }
}

int main() {
    vector<int> arr = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int target = 23;

    // Iterative Binary Search
    cout << "Iterative Binary Search:" << endl;
    int resultIter = iterativeBinarySearch(arr, target);
    if (resultIter != -1) {
        cout << "Element found at index: " << resultIter << endl;
    } else {
        cout << "Element not found!" << endl;
    }

    // Recursive Binary Search
    cout << "\nRecursive Binary Search:" << endl;
    int resultRec = recursiveBinarySearch(arr, target, 0, arr.size() - 1);
    if (resultRec != -1) {
        cout << "Element found at index: " << resultRec << endl;
    } else {
        cout << "Element not found!" << endl;
    }

    return 0;
}