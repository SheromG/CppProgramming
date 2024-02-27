#include <iostream>
#include <windows.h>
using namespace std;

int main()
{  
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  // you can loop k higher to see more color choices
    for(int k = 1; k < 33; k++)
    {
    // pick the colorattribute k you want
        SetConsoleTextAttribute(hConsole, k);
        Sleep(150);
        system("cls");
        cout << "Welcome to the guess game" << endl;
    }
    
    system ("pause");
    system ("color f1");
	int num = 15, guess, tries = 0;

	do
	{   cout<<"please wait."<<endl;
        Sleep(500);
        system("cls");
        cout<<"please wait.."<<endl;
        Sleep(500);
        system("cls");
        cout<<"please wait..."<<endl;
        Sleep(500);
        system("cls");
		cout << "Enter a guess : ";
		cin >> guess;
		tries++;
        if (guess > num)
			std::cout << "Too high!\n\n";
		else if (guess < num)
			std::cout << "Too low!\n\n";
		else
			std::cout << "\nCorrect! You got it in " << tries << " guesses!\n";
	} while (guess != num);

	return 0;
}
