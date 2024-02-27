#include <iostream>
#include <queue>

using namespace std;

void checker(int guess, int number)
{
    if (guess<number)
    {
            cout << "Guess Higher!\n\n";
    }
    else if (guess>number)
    {
            cout << "Guess Lower!\n\n";
    }
}
void suffix(int tries)
{
    if (tries%10 == 1)
    {
        cout<<tries<<"st";
    }
    else if (tries%10 == 2)
    {
        cout<<tries<<"nd";
    }
    else if (tries%10 == 3)
    {
        cout<<tries<<"rd";
    }
    else
    {
        cout<<tries<<"th";
    }
}

int main()
{
    start:
    system ("color E0");
    cout << "Welcome to Guessing Number Game!\n\n";
    cout << "I have a  number  ranging from 1 to 15. Can you Guess it?\n\n";

    int number = 15;
    int guess;
    int tries = 1;
    queue<int>data;

    while(guess != number)
    {
        cout <<"Your ";
        suffix(tries);
        cout <<" guess: ";
        cin >> guess;
        checker(guess,number);
        data.push(guess);
        tries++;
    }

    cout << "\nYou got it right!\n\n";

    cout << "Your guesses are: ";
    while(!data.empty())
    {
        cout <<data.front()<<" ";
        data.pop();
    }

    char choice;
    cout <<"\n\nWould You like to Play again? Y/N: ";
    cin >> choice;
    if (choice == 'y')
    {
        system ("cls");
        goto start;
    }
    else if (choice == 'n')
    {
        cout << "\n\nThank You for playing\n\n";
        return 0;
    }

}
