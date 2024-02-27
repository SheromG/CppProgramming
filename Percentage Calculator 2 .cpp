#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, y, z=0, answer;
    cout << "Choose your desired  percentage: \n\n1 - 10%\n2 - 25%\n3 - 50%\n"<<endl;
    cout << "Enter your choice: "<<endl;
    cin  >> x;
    if (x == 1){(x = 0.1);}
    else if (x == 2){(x = 0.25);}
    else if (x == 3){(x = 0.5);}
    cout << "Enter Number: ";
    cin  >> y;
    answer = fma(y,x,z);
    cout << answer<<endl;
}
