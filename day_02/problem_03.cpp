#include <iostream>
using namespace std;

int main() {
    cout << "CAN YOU POP THIS? " << endl;
    
    // Get info
    int age;
    cout << "How old are you? ";
    cin >> age;
    
    char glasses;
    cout << "Wearing safety glasses? (y/n) ";
    cin >> glasses;
    
    char permission;
    if (age < 18) {
        cout << "Got adult permission? (y/n) ";
        cin >> permission;
    }
    
    // Check rules
    bool can_pop = false;
    
    if (age >= 18 && glasses == 'y') {
        can_pop = true;
    }
    else if (age < 18 && glasses == 'y' && permission == 'y') {
        can_pop = true;
    }
    
    // Show result
    cout << endl;
    if (can_pop) {
        cout << "YES! You can pop it! 🎉" << endl;
        cout << "(But be careful and point it away from people!)";
    }
    else {
        cout << "NO, you can't pop it right now." << endl;
        
        if (age < 18 && permission != 'y') 
            cout << "- You need an adult's permission" << endl;
        if (glasses != 'y') 
            cout << "- You need safety glasses" << endl;
    }
    
    return 0;
}