#include <iostream>

using namespace std;

int Add(int x, int y)
{char op; return x+y ;}

int Subtract(int x, int y)
{char op; return x-y ;}

int Multiply(int x, int y)
{char op; return x*y ;}

int Divide(int x, int y)
{char op; return x/y ;}

int main()
{
    int a,b,ans;
    char op;

    cout << "Enter 1st number: ";
    cin  >> a;
    cout << "Enter 2nd number: ";
    cin  >> b;
    cout << "Choose Operator || a = add || b = subtract || c = multiply || d = divide : ";
    cin  >> op;
    if (op == 'a'){ans = Add(a,b);}
    else if (op == 'b'){ans = Subtract(a,b);}
    else if (op == 'c'){ans = Multiply(a,b);}
    else if (op == 'd'){ans = Divide(a,b);}
    cout << "The answer is: "<< ans;
}