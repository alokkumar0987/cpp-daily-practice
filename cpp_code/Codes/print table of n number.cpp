
#include <iostream>

using namespace std;

void printTable(int n) {
    cout << "Table of " << n << endl ;
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << (n * i) << endl;
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    printTable(num);
    return 0;
}
