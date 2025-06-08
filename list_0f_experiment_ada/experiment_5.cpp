#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// Function to compute minimum merge cost
int optimalMergeCost(vector<int>& files) {
    priority_queue<int, vector<int>, greater<int>> minHeap; // Min-heap

    // Push all file sizes into the heap
    for (int size : files) {
        minHeap.push(size);
    }

    int totalCost = 0;

    // Merge until only one file remains
    while (minHeap.size() > 1) {
        // Extract the two smallest files
        int first = minHeap.top();
        minHeap.pop();
        int second = minHeap.top();
        minHeap.pop();

        // Merge the two files
        int mergedSize = first + second;
        totalCost += mergedSize;

        // Push the merged file back into the heap
        minHeap.push(mergedSize);
    }

    return totalCost;
}

int main() {
    vector<int> files = {5, 10, 20, 30, 30}; // Example file sizes

    cout << "File sizes: ";
    for (int size : files) {
        cout << size << " ";
    }
    cout << endl;

    int minCost = optimalMergeCost(files);
    cout << "Minimum merge cost: " << minCost << endl;

    return 0;
}
