#include <iostream>
#include <vector>
using namespace std;

// Function to add two matrices
vector<vector<int>> addMatrix(const vector<vector<int>>& A, const vector<vector<int>>& B) {
    int n = A.size();
    vector<vector<int>> C(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            C[i][j] = A[i][j] + B[i][j];
    return C;
}

// Function to subtract two matrices
vector<vector<int>> subMatrix(const vector<vector<int>>& A, const vector<vector<int>>& B) {
    int n = A.size();
    vector<vector<int>> C(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            C[i][j] = A[i][j] - B[i][j];
    return C;
}

// Strassen's Matrix Multiplication (for 2^n x 2^n matrices)
vector<vector<int>> strassenMultiply(const vector<vector<int>>& A, const vector<vector<int>>& B) {
    int n = A.size();
    vector<vector<int>> C(n, vector<int>(n));

    // Base case: 1x1 matrix
    if (n == 1) {
        C[0][0] = A[0][0] * B[0][0];
        return C;
    }

    // Split matrices into 4 submatrices
    int half = n / 2;
    vector<vector<int>> A11(half, vector<int>(half)), A12(half, vector<int>(half)),
                       A21(half, vector<int>(half)), A22(half, vector<int>(half)),
                       B11(half, vector<int>(half)), B12(half, vector<int>(half)),
                       B21(half, vector<int>(half)), B22(half, vector<int>(half));

    for (int i = 0; i < half; i++) {
        for (int j = 0; j < half; j++) {
            A11[i][j] = A[i][j];
            A12[i][j] = A[i][j + half];
            A21[i][j] = A[i + half][j];
            A22[i][j] = A[i + half][j + half];

            B11[i][j] = B[i][j];
            B12[i][j] = B[i][j + half];
            B21[i][j] = B[i + half][j];
            B22[i][j] = B[i + half][j + half];
        }
    }

    // Compute the 7 products (P1 to P7)
    vector<vector<int>> P1 = strassenMultiply(A11, subMatrix(B12, B22));
    vector<vector<int>> P2 = strassenMultiply(addMatrix(A11, A12), B22);
    vector<vector<int>> P3 = strassenMultiply(addMatrix(A21, A22), B11);
    vector<vector<int>> P4 = strassenMultiply(A22, subMatrix(B21, B11));
    vector<vector<int>> P5 = strassenMultiply(addMatrix(A11, A22), addMatrix(B11, B22));
    vector<vector<int>> P6 = strassenMultiply(subMatrix(A12, A22), addMatrix(B21, B22));
    vector<vector<int>> P7 = strassenMultiply(subMatrix(A11, A21), addMatrix(B11, B12));

    // Compute the 4 quadrants of the result matrix
    vector<vector<int>> C11 = addMatrix(subMatrix(addMatrix(P5, P4), P2), P6);
    vector<vector<int>> C12 = addMatrix(P1, P2);
    vector<vector<int>> C21 = addMatrix(P3, P4);
    vector<vector<int>> C22 = subMatrix(subMatrix(addMatrix(P5, P1), P3), P7);

    // Combine the quadrants into the result matrix
    for (int i = 0; i < half; i++) {
        for (int j = 0; j < half; j++) {
            C[i][j] = C11[i][j];
            C[i][j + half] = C12[i][j];
            C[i + half][j] = C21[i][j];
            C[i + half][j + half] = C22[i][j];
        }
    }

    return C;
}

// Function to print a matrix
void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    // Example 4x4 matrices (must be 2^n x 2^n for Strassen's)
    vector<vector<int>> A = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    vector<vector<int>> B = {
        {16, 15, 14, 13},
        {12, 11, 10, 9},
        {8, 7, 6, 5},
        {4, 3, 2, 1}
    };

    cout << "Matrix A:" << endl;
    printMatrix(A);

    cout << "\nMatrix B:" << endl;
    printMatrix(B);

    vector<vector<int>> C = strassenMultiply(A, B);

    cout << "\nResultant Matrix C (A × B):" << endl;
    printMatrix(C);

    return 0;
}
