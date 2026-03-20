#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    
    int playerChoice;
    int computerChoice;
    char playAgain;
    
    cout << "Welcome to Rock Paper Scissors!\n\n";
    
    do
    {
        cout << "Choose your move:\n";
        cout << "1. Rock\n";
        cout << "2. Paper\n";
        cout << "3. Scissors\n";
        cout << "Enter your choice (1-3): ";
        cin >> playerChoice;
        
        if (playerChoice < 1 || playerChoice > 3)
        {
            cout << "Invalid choice. Please enter 1, 2, or 3.\n\n";
            continue;
        }
        
        computerChoice = rand() % 3 + 1;
        
        if (computerChoice == 1) cout << "Computer chose: Rock\n";
        if (computerChoice == 2) cout << "Computer chose: Paper\n";
        if (computerChoice == 3) cout << "Computer chose: Scissors\n";
        
        if (playerChoice == computerChoice)
        {
            cout << "Its a tie!\n";
        }
        else if ((playerChoice == 1 && computerChoice == 3) ||
                 (playerChoice == 2 && computerChoice == 1) ||
                 (playerChoice == 3 && computerChoice == 2))
        {
            cout << "You win!\n";
        }
        else
        {
            cout << "Computer wins!\n";
        }
        
        cout << "\nPlay again? (y/n): ";
        cin >> playAgain;
        cout << "\n";
        
    } while (playAgain == 'y' || playAgain == 'Y');
    
    cout << "Thanks for playing!\n";
    
    return 0;
}
