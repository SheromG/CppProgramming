#include<iostream>

using namespace std;

int main ()
{
    int data;
    cout << "How many numbers? ";
    cin >> data;
    cout << endl;

    int array[data], x=0, y=0, z = data-1;
    for (int i = 0; i < data; i++)
    {
        cout << "Enter Number: ";
        cin >> array[x];x++;
    }

    for(int i = 0; i<data; i++)
    {
        for(int j = i+1; j<data; j++)
        {
            if(array[j] < array[i])
            {
                int k = array[i];
                array[i] = array[j];
                array[j] = k;
            }
        }
    }
    cout <<"\nThe smallest number is "<< array[0];

    int choice;
    cout << "\n\nActions: ";
    cout <<"\n<1> Print the Biggest number\n<2> Print the Ascending Order of the Data\n<3> Print the Descending Order of the Data\n<4> Exit the Program\n";
    cout << "\nYour Action: ";
    cin >> choice;
    if (choice == 1)
    {
        cout <<"\nThe biggest number is "<< array[(data)-1];
    }
    else if (choice == 2)
    {
        system("cls");
        cout << "The Ascending Order of the Data.\n\n";
        for (int l = 0; l < data; l++)
        {cout << array[y];y++;
        cout << endl;}
    }
    else if (choice == 3)
    {
        system("cls");
        cout << "The Descending Order of the Data.\n\n";
        for (int m = 0; m < data; m++)
        {cout << array[z];z--;
        cout << endl;}
    }
    else if (choice == 4)
    {
        return 0;
    }
}
