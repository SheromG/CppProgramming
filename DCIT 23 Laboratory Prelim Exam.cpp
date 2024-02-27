#include <iostream>
#include <math.h>

using namespace std;

int choice1(int a,int b)
{
    for (int x=a; x<=b; x++)
    {
        cout<<x<<" ";
    }
}
int choice2(int a,int b)
{
    int range = a+(b-=1);
    for (int x=a; x<=range; x++)
    {
        cout<<x<<" ";
    }
}
int choice3(int a)
{
    int range = a*10;
    for (int x=a; x<=range; x+=a)
    {
        cout<<x<<" ";
    }
}
void wronginput()
{
    cout << "Invalid input, please input again: ";
}

int main()
{
    start:
    int choice,num[2];
    cout << "Welcome to Simulation 101!\n\n";
    cout << "Please select the number of the process you want to use: \n\n" ;
    cout << "1. Print Series based on min and max values. \n" ;
    cout << "2. Print Series based on starting value and range.\n" ;
    cout << "3. Print 10 multiples of a given number.\n" ;
    cout << "\nChoice: " ;
    cin >> choice;

    while ((choice != 1)&&(choice != 2)&&(choice != 3))
    {
        wronginput();
        cin >> choice;
    }

    if (choice == 1){system("cls"); goto choice1;}
    else if (choice == 2){system("cls"); goto choice2;}
    else if (choice == 3){system("cls");goto choice3;}

    choice1 : 
    {
        cout << "Enter Minimum: "; cin >> num[0];
        cout << "Enter Maximum: ";cin >> num[1];
        cout << "\nOutput: \n";
        choice1(num[0],num[1]);
        goto stop;
    };

    choice2 : 
    {
        cout << "Enter Value: ";cin >> num[0];
        cout << "Enter Range: ";cin >> num[1];
        cout << "\nOutput: \n";
        choice2(num[0],num[1]);
        goto stop;
    };

    choice3 : 
    {
        cout << "Enter a positive nonzero number: ";cin >> num[0];
        while (num[0] <= 0)
        {
            wronginput();
            cin >> num[0];
        }
        cout << "\nOutput: \n";choice3(num[0]);
        goto stop;
    };

    stop : 
    {
        char stop;
        cout << "\n\nWould you like to start simulation again? Y/N : ";
        cin >> stop;
        while ((stop != 'Y')&&(stop != 'y')&&(stop != 'N')&&(stop != 'n'))
        { 
            wronginput();
            cin >> stop;
        }
        if ((stop == 'Y')||(stop == 'y'))
        {
            system("cls");
            goto start;
        }
        else if ((stop == 'N')||(stop == 'n'))
        {
            cout << "\nThank you for using Simulation 101, We hope to see you again!\n\n";
                return 0;
        }
    };
}


