#include <iostream>
using namespace std;

char A(char choice)
{
    system("cls");
    int i,j,count;
    cout <<"Input the number of students to be added: ";
    cin>>count;
    string x[100][100];
    for (int i=0; i<count; i++)
    {
        cout<<"\nStudent Number: "<<i+1<<"\n";
        for (int j=0;j<1;j++)
        {
            cout<<"\n\tFirst Name: ";   cin>>x[i][j];j++;
            cout<<"\tLast Name   : ";   cin>>x[i][j];j++;
            cout<<"\tCourse      : ";   cin>>x[i][j];j++;
        }
    }

    char answer;
    cout << "\n\nInput Complete.\n\n";
    answer: cout <<"Press B if you like to view the list, Press E to exit : ";
    cin  >> answer;
    if ((answer == 'B')||(answer == 'b'))
    {
        system("cls");
        cout << "Full Name: \t\tCourse: \n\n";
        for(i=0; i<count; i++)
        {
            for(j=0; j<1; j++)
            {
                string fullname = x[i][0]+ " " + x[i][1];
                cout<<fullname<<"\t\t"<<x[i][2];
            }
            cout<<"\n";
        }
            end:char end;
            cout<<"\n\nPress E to exit. ";
            cin>> end;
            if ((end == 'E')||(end == 'e')){return 0;}
            else {system("cls");cout<<"Invalid Input, input again. \n\n";goto end;}
    }
    else if ((answer == 'E')||(answer == 'e')){return 0;}
    else{system("cls");cout<<"Invalid Input, input again. \n\n";goto answer;};};

int main()
{
    char action,baction;
    cout << "Welcome to Student Registration System!\n\n";
    action:cout << "Action list: \n\tA: Add Student to the list.\n\tB. View the list of students.\n\tE. Exit the program.\n\n";
    cout << "Please Select action: ";
    cin >> action;
    if ((action == 'A')||(action == 'a')){A('A');}
    else if ((action == 'B')||(action == 'b'))
    {
        system("cls");cout<< "There is no data in the system. Would you like add data? \n\n";
        baction:cout<<"Press A to add student to the list, Press E to exit: ";
        cin >>baction;
        if ((baction == 'A')||(baction == 'a')){A('A');}
        else if ((baction == 'E')||(baction == 'e')) {return 0;}
        else {goto baction;}
    }
    else if ((action == 'E')||(action == 'e')){return 0;}
    else {system("cls");cout<<"Invalid Input, input again. \n\n";goto action;}}
