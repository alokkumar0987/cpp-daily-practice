#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "You are eligible to vote!";
    } else {
        cout << "You are not eligible to vote.";
        cout << "\nWait for " << (18 - age) << " more years.";
    }

    return 0;
}