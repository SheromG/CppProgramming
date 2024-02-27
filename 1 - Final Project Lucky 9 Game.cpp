#include <iostream>
#include <windows.h>
#include <ctime>

using namespace std;

void startingpage()
{
    cout << "\n";
    cout << "\t __         __     __    _________    __   __   ___     ___        __________         \n";
    cout << "\t|  |       |  |   |  |  |   ______|  |  | /  /  \\  \\   /  /       |    __    |      \n";
    cout << "\t|  |       |  |   |  |  |  |         |  |/  /    \\  \\ /  /        |   |__|   |      \n";
    cout << "\t|  |       |  |   |  |  |  |         |     /      \\  V  /  ____   |______    |       \n";
    cout << "\t|  |       |  |   |  |  |  |         |     \\       \\   /  |____|         |   |      \n";
    cout << "\t|  |____   |  |___|  |  |  |______   |  |\\  \\       | |            ______|   |      \n";
    cout << "\t|_______|  |_________|  |_________|  |__| \\__\\      |_|           |__________|      \n";
}
void options()
{
    cout << "\t\t\t _______________________________________________" << endl;
    cout << "\t\t\t|                                               |" << endl;
    cout << "\t\t\t|\t\t<1> Play Game\t\t\t|\n";
    cout << "\t\t\t|\t\t<2> About Game\t\t\t|\n";
    cout << "\t\t\t|\t\t<3> Exit the Game\t\t|\n";
    cout << "\t\t\t|_______________________________________________|" << endl;
}

void header(string name, int lives, int coins)
{
    cout << "Player: \t" << name << endl;
    cout << "Lives: \t\t" << lives << endl;
    cout << "Lucky Coins: \t" << coins << endl;
}

void draw(int number)
{
    if (number == 1)
    {
        cout << " _________________\n";
        cout << "|    ______    1  |\n";
        cout << "|   |___   |      |\n";
        cout << "|      |   |      |\n";
        cout << "|      |   |      |\n";
        cout << "|      |   |      |\n";
        cout << "|      |   |      |\n";
        cout << "|      |   |      |\n";
        cout << "|   ___|   |___   |\n";
        cout << "|  |___________|  |\n";
        cout << "|_________________|\n";
    }
    else if (number == 2)
    {
        cout << " _________________\n";
        cout << "|  ___________  2 |\n";
        cout << "| |   _____   |   |\n";
        cout << "| |__|     |  |   |\n";
        cout << "|          |  |   |\n";
        cout << "|  ________|  |   |\n";
        cout << "| |   ________|   |\n";
        cout << "| |  |            |\n";
        cout << "| |  |_________   |\n";
        cout << "| |____________|  |\n";
        cout << "|_________________|\n";
    }
    else if (number == 3)
    {
        cout << " _________________\n";
        cout << "|  ___________  3 |\n";
        cout << "| |   _____   |   |\n";
        cout << "| |__|     |  |   |\n";
        cout << "|          |  |   |\n";
        cout << "|  ________|  |   |\n";
        cout << "| |________   |   |\n";
        cout << "|          |  |   |\n";
        cout << "|  ________|  |   |\n";
        cout << "| |___________|   |\n";
        cout << "|_________________|\n";
    }
    else if (number == 4)
    {
        cout << " _________________\n";
        cout << "|  __       __  4 |\n";
        cout << "| |  |     |  |   |\n";
        cout << "| |  |     |  |   |\n";
        cout << "| |  |     |  |   |\n";
        cout << "| |  |_____|  |   |\n";
        cout << "| |________   |   |\n";
        cout << "|          |  |   |\n";
        cout << "|          |  |   |\n";
        cout << "|          |__|   |\n";
        cout << "|_________________|\n";
    }
    else if (number == 5)
    {
        cout << " _________________\n";
        cout << "|  ___________  5 |\n";
        cout << "| |   ________|   |\n";
        cout << "| |  |            |\n";
        cout << "| |  |            |\n";
        cout << "| |  |________    |\n";
        cout << "| |________   |   |\n";
        cout << "|          |  |   |\n";
        cout << "|  ________|  |   |\n";
        cout << "| |___________|   |\n";
        cout << "|_________________|\n";
    }
    else if (number == 6)
    {
        cout << " _________________\n";
        cout << "|  ___________  6 |\n";
        cout << "| |   ________|   |\n";
        cout << "| |  |            |\n";
        cout << "| |  |            |\n";
        cout << "| |  |________    |\n";
        cout << "| |   _____   |   |\n";
        cout << "| |  |     |  |   |\n";
        cout << "| |  |_____|  |   |\n";
        cout << "| |___________|   |\n";
        cout << "|_________________|\n";

    }
    else if (number == 7)
    {
        cout << " _________________\n";
        cout << "|  __________   7 |\n";
        cout << "| |_______   |    |\n";
        cout << "|         |  |    |\n";
        cout << "|         |  |    |\n";
        cout << "|      ___|  |    |\n";
        cout << "|     |___   |    |\n";
        cout << "|         |  |    |\n";
        cout << "|         |  |    |\n";
        cout << "|         |__|    |\n";
        cout << "|_________________|\n";
    }
    else if (number == 8)
    {
        cout << " _________________\n";
        cout << "|  ___________  8 |\n";
        cout << "| |   _____   |   |\n";
        cout << "| |  |     |  |   |\n";
        cout << "| |  |     |  |   |\n";
        cout << "| |  |_____|  |   |\n";
        cout << "| |   _____   |   |\n";
        cout << "| |  |     |  |   |\n";
        cout << "| |  |_____|  |   |\n";
        cout << "| |___________|   |\n";
        cout << "|_________________|\n";
    }
    else if (number == 9)
    {
        cout << " _________________\n";
        cout << "|  ___________  9 |\n";
        cout << "| |   _____   |   |\n";
        cout << "| |  |     |  |   |\n";
        cout << "| |  |     |  |   |\n";
        cout << "| |  |_____|  |   |\n";
        cout << "| |________   |   |\n";
        cout << "|          |  |   |\n";
        cout << "|  ________|  |   |\n";
        cout << "| |___________|   |\n";
        cout << "|_________________|\n";
    }
}
void welcome(string name)
{
    cout << "\n\t\t\t\t\tWelcome to Lucky Nine! \n\n";
    cout << "\t\t\t\tWhere your luck will decide your fate.\n\n";
    cout << "\t     The mechanics is simple. The system will draw you 2 lucky numbers ranges from 1 to 9\n\n";
    cout << "\tYou will add your 2 lucky numbers, if the sum exceeds 9 the count will again starts with 1\n\n";
    cout << "\t\t\t  If you want another lucky card the system will draw you another one.\n\n";
    cout << "\t\t     The opponent will also gets a 2 cards and the sum of it will be the value.\n\n";
    cout << "\t\t\t\t\tThe higher value wins!\n\n";
    cout << "\t\t\tYou will be given 5 lives and 250 Lucky Coins to gamble your fate.\n\n";
    cout << "\t\t\t    Each Win you will be given another life and 250 Lucky Coins.\n\n";
    cout << "\t\t\t\t  However in case of loss, it will 50 Lucky Coins.\n\n";
    cout << "\n\t\t\t\t\tGoodluck and have fun, " << name;
    cout << endl << endl << "\t\t\t\t\t";
}
void about()
{
    system("cls");
    cout << "\n\t\t\t\t\tLucky Nine\n";
    cout << "\n\t\t  is a game develop by David Sherom Granada, a freshman in \n";
    cout << "\n\t\tNational College of Science and Technology in the year 2021.\n";
    cout << "\n\t\t     It is a game where players put their fate in luck.\n";
    cout << "\n\t\t            Will luck be on your side? or not? \n";
    cout << "\n\t\t        Lets find out! Come on and play Lucky Nine.\n";
    cout << endl << endl;
}

int main()
{
    system("color F0");

    int option;
    startingpage();
    cout << endl << endl;
    options();
    cout << "\n\t\t\t\t\t Your Choice: ";
    cin >> option;
    if (option == 1)
    {
        goto start;
    }
    else if (option == 2)
    {
        char opt;
        about();
        system("pause");
        cout << "\nWould you like to start the game? Y/N: ";
        cin >> opt;

        if (opt == 'y')
        {
            goto start;
        }
        else
        {
            system("cls");
            cout << "We hope to play with you soon!\n\n";
            return 0;
        }
    }
    else if (option == 3)
    {
        return 0;
    }

start:
    system("cls");
    string name;
    int lives = 5, coins = 250;
    cout << "Input your in game name:  ";
    cin >> name;
    name[0] = toupper(name[0]);
    Sleep(1000);
    cout << "\nInput compete.\n";
    Sleep(2000);
    system("cls");
    welcome(name);
    system("pause");

    cout << "\n\n\n\t\t\t\t\t     Loading Status...";
    Sleep(2500);

ready:
    system("cls");
    cout << "Profile Data: \n\n";
    cout << "\tIGN: " << name << endl;
    cout << "\tLives: " << lives << endl;
    cout << "\tLucky Coins: " << coins << endl << endl;
    char ready, notready;
    cout << "Are you ready to start the game? Y/N:  ";
    cin >> ready;
    if (ready == 'y' && 'Y')
    {
        lives -= 1;
        goto game;
    }
    else if (ready == 'n' && 'N')
    {
        cout << "\nDo you want to quit ? Y / N : ";
        cin >> notready;
        if (notready == 'y' && 'Y')
        {
            goto end;
        }
        else if (notready == 'n' && 'N')
        {
            goto ready;
        }
    }
    else
    {
        cout << "Invalid Input. Try again. ";
        Sleep(750);
        goto ready;
    }

game:
    system("cls");
    header(name, lives, coins);

    if (lives == -1)
    {
        goto end;
    }

    cout << "\n\nOkay let's draw your first number.\n\n";
    Sleep(750);
    cout << "Your first lucky number is: \n\n";


    int luckynum1, luckynum2, luckynum3, luckynumsum;
    int enemynum1, enemynum2, enemynumsum;
    char choice;

    srand(time(NULL));
    luckynum1 = (rand() % 8) + 1;
    luckynum2 = (rand() % 8) + 1;

    Sleep(1000);
    draw(luckynum1);

    cout << "\n\nGreat! Now your second lucky number is: \n\n";
    Sleep(1500);
    draw(luckynum2);

    luckynumsum = luckynum1 + luckynum2;

    if (luckynumsum > 9)
    {
        luckynumsum = luckynumsum % 9;
    }

    cout << "\nDo you want a third card? Y/N: ";
    cin >> choice;
    if (choice == 'y')
    {
        luckynum3 = (rand() % 8) + 1;
        Sleep(750);
        cout << "\nYour third lucky number is: \n\n";
        Sleep(1500);
        draw(luckynum3);
        luckynumsum = luckynumsum + luckynum3;

        if (luckynumsum > 9)
        {
        luckynumsum = luckynumsum % 9;
        }
    }

    enemynum1 = (rand() % 8) + 1;
    enemynum2 = (rand() % 8) + 1;
    cout << endl;

    cout << "The Opponents luck card is: \n\n";
    Sleep(1000);
    draw(enemynum1);
    Sleep(500);
    cout << "\nAnd the opponents second luck card is: \n\n";
    Sleep(1000);
    draw(enemynum2);

    enemynumsum = enemynum1 + enemynum2;

    if (enemynumsum > 9)
    {
        enemynumsum = enemynumsum % 9;
    }

    Sleep(800);
    cout << "\nThe system is analyzing the result...\n\n";
    Sleep(1000);
    system("pause");

result:
    system("cls");
    header(name, lives, coins);
    Sleep(1000);
    cout << "\nThe Value of your card is: \n";
    Sleep(1000);
    draw(luckynumsum);
    Sleep(500);
    cout << "\n\nThe Value of the opponent card is: \n";
    Sleep(1000);
    draw(enemynumsum);
    Sleep(1000);
    cout << "\n\nThe result is: \n\n";
    Sleep(2500);

    if (luckynumsum > enemynumsum)
    {
        cout << "You are in luck! You win! Congratulations" << endl;
        cout << "You recieve 1 life and 250 Lucky coins.\n\n";
        lives += 1;
        coins += 250;
    }
    else if (luckynumsum < enemynumsum)
    {
        cout << "Too bad you run out of luck. You lose. Thank you for playing the game!\n";
        cout << "50 Lucky coins will be deduct to you balance.\n\n";
        coins -= 50;
    }
    else if (luckynumsum == enemynumsum)
    {
        cout << "Luck is really in the air. It's a tie. Congratulations to the both of you!\n";
        cout << "You're in luck, the system will give you 1 life. Thank you for playing!.\n\n";
        lives += 1;
    }

    char again;
    Sleep(2500);
    cout << "Do you want to try your luck again? Y/N: ";
    cin >> again;
    if (again == 'y')
    {
        cout << "\nSystem is analyzing...\n\n";
        Sleep(2500);
        cout << "Analyze complete...\n\n";
        Sleep(1500);
        system("pause");
        goto ready;
    }
    else
    {
        end:
        system("cls");
        Sleep(1000);
        cout << "\nThank you " << name << " for playing Lucky Nine. \n\n";
        Sleep(1000);
        cout << "You won " << coins << " Luck Coins\n\n";
        Sleep(1000);
        cout << "We hope to see you again\n\n";
        Sleep(1000);
        cout << "Good Luck! \n\n";
        Sleep(1000);
        return 0;
    }
}
