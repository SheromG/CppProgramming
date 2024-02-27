#include <iostream>

using namespace std;

int Choices(int x,int y)
{
    if (x == 1){(y = y/10);}
    else if (x == 2){(y = y/4);}
    else if (x == 3){(y = y/2);}
}

int main()
{
    int x, y, answer;
    cout << "Choose your desired  percentage: \n\n1 - 10%\n2 - 25%\n3 - 50%\n"<<endl;
    cout << "Enter your choice: "<<endl;
    cin  >> x;
    cout << "Enter Number: ";
    cin  >> y;
    answer = Choices(x,y);
    cout << answer<<endl;
}
