#include <iostream>
#include <math.h>

using namespace std;
    double quadratic(double a, double b, double c)
{
    double var[8];
    var[0] = pow(b,2);//b^2
    var[1] = 4*a*c;//4ac
    var[2] = var[0]-var[1];//b^2-4ac
    var[3] = 2*a;//2a
    var[4] = sqrt(var[2]);// sqrt (b^2-4ac)
    var[5] = b * (-1);//-b
    var[6] = (var[5]+var[4])/var[3];// -b + sqrt(b^2-4ac) / 2a ----- root 1
    var[7] = (var[5]-var[4])/var[3];// -b - sqrt(b^2-4ac) / 2a ----- root 2

    cout<< "\nRoots are: \n\n";
    cout<< var[6]<< " and " <<var[7]<< endl;
}

int main()
{
    start:
    char answer;
    double a,b,c;
    while (a,b,c == 0)
    {
        cout << "Invalid Entry";
    }
    cout << "The Quadratic Formula Calculator\n\n";
    cout << "Input a: ";
    cin >> a;
    while (a == 0)
    {
        cout << "Invalid Entry. Input a again: ";
        cin >> a;
    }
    cout << "Input b: ";
    cin >> b;
    while (b == 0)
    {
        cout << "Invalid Entry. Input b again: ";
        cin >> b;
    }
    cout << "Input c: ";
    cin >> c;
    while (c == 0)
    {
        cout << "Invalid Entry. Input c again: ";
        cin >> c;
    }
    quadratic(a,b,c);

    cout << "\nIf the result is 'nan' and 'nan' the equation has no real roots.\n";
    cout << "\nWould you like to start again? Y/N : ";
    cin >> answer;
    if ((answer == 'Y')||(answer == 'y')) {system("cls");goto start;}
    else if ((answer == 'N')||(answer == 'n')){return 0;}
}
