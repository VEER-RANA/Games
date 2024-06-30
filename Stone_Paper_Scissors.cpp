#include <bits/stdc++.h>
using namespace std;
int main(){
    srand(time(0));
    char userChoice, computerChoice;
    string choices = "RPS"; // Rock, Paper, Scissors
    cout << "Welcome to Rock, Paper, Scissors!" << endl;
    cout << "Enter R for Rock, P for Paper, and S for Scissors." << endl;
    cout << "Your choice: ";
    cin >> userChoice;
    userChoice = toupper(userChoice);
    if (choices.find(userChoice) == string::npos)    {
        cout << "Invalid choice! Please enter R, P, or S." << endl;
        return 1;
    }
    computerChoice = choices[rand() % 3];
    cout << "Computer chose: " << computerChoice << endl;
    if (userChoice == computerChoice)    {
        cout << "It's a tie!" << endl;
    }
    else if ((userChoice == 'R' && computerChoice == 'S') ||
             (userChoice == 'P' && computerChoice == 'R') ||
             (userChoice == 'S' && computerChoice == 'P'))    {
        cout << "You win!" << endl;
    }
    else    {
        cout << "Computer wins!" << endl;
    }
    return 0;
}