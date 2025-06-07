#include <iostream>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

using namespace std;

int main() {
    int userChoice, computerChoice;
    
    // Seed the random number generator
    srand(time(0));
    
    cout << "=== Stone, Paper, Scissors Game ===" << endl;
    cout << "1. Stone (Rock)" << endl;
    cout << "2. Paper" << endl;
    cout << "3. Scissors" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> userChoice;
    
    // Validate input
    if (userChoice < 1 || userChoice > 3) {
        cout << "Invalid choice! Please select 1, 2, or 3." << endl;
        return 1;
    }
    
    // Computer chooses randomly (1-3)
    computerChoice = rand() % 3 + 1;
    
    // Display choices
    cout << "\nYou chose: ";
    switch(userChoice) {
        case 1: cout << "Stone"; break;
        case 2: cout << "Paper"; break;
        case 3: cout << "Scissors"; break;
    }
    
    cout << "\nComputer chose: ";
    switch(computerChoice) {
        case 1: cout << "Stone"; break;
        case 2: cout << "Paper"; break;
        case 3: cout << "Scissors"; break;
    }
    
    // Determine the winner
    cout << "\n\nResult: ";
    if (userChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    }
    else if (
        (userChoice == 1 && computerChoice == 3) ||  // Stone beats Scissors
        (userChoice == 2 && computerChoice == 1) ||  // Paper beats Stone
        (userChoice == 3 && computerChoice == 2)     // Scissors beat Paper
    ) {
        cout << "You win! 🎉" << endl;
    }
    else {
        cout << "Computer wins! 😢" << endl;
    }
    
    return 0;
}