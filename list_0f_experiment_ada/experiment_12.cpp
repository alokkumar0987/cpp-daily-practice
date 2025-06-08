#include <iostream>
#include <vector>
using namespace std;

#define V 5 // Number of vertices

void printSolution(const vector<int>& path) {
    cout << "Hamiltonian Cycle: ";
    for (int v : path) {
        cout << v << " ";
    }
    cout << path[0] << endl; // Complete the cycle
}

bool isSafe(int v, const vector<vector<int>>& graph, vector<int>& path, int pos) {
    // Check if vertex is adjacent to the last vertex in path
    if (graph[path[pos - 1]][v] == 0) {
        return false;
    }

    // Check if vertex has already been included
    for (int i = 0; i < pos; i++) {
        if (path[i] == v) {
            return false;
        }
    }

    return true;
}

bool hamiltonianCycleUtil(vector<vector<int>>& graph, vector<int>& path, int pos) {
    // Base case: All vertices included
    if (pos == V) {
        // Check if last vertex connects back to the first
        return (graph[path[pos - 1]][path[0]] == 1);
    }

    // Try different vertices as next candidate
    for (int v = 1; v < V; v++) {
        if (isSafe(v, graph, path, pos)) {
            path[pos] = v;

            if (hamiltonianCycleUtil(graph, path, pos + 1)) {
                return true;
            }

            // Backtrack
            path[pos] = -1;
        }
    }

    return false;
}

bool hamiltonianCycle(vector<vector<int>>& graph) {
    vector<int> path(V, -1);
    path[0] = 0; // Start at vertex 0

    if (!hamiltonianCycleUtil(graph, path, 1)) {
        cout << "No Hamiltonian Cycle exists" << endl;
        return false;
    }

    printSolution(path);
    return true;
}

int main() {
    // Example graph (adjacency matrix)
    vector<vector<int>> graph = {
        {0, 1, 0, 1, 0},
        {1, 0, 1, 1, 1},
        {0, 1, 0, 0, 1},
        {1, 1, 0, 0, 1},
        {0, 1, 1, 1, 0}
    };

    hamiltonianCycle(graph);

    return 0;
}