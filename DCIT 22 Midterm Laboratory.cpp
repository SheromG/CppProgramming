#include <iostream>

using namespace std;

int countpass(int n,int choice[], int result)
{
    if (choice[n] == 1){result+=1; return result;}
    else {result+=0;return result;}
}
int countfail(int n,int choice[], int result)
{
    if (choice[n] == 2){result+=1; return result;}
    else {result+=0;return result;}
}

int main()
{
    int x=1,pass = 0,fail = 0;
    int result[10];
    cout<<"Summary of the Result. \n\n";
    cout<<"     Input 1 if the student pass, 2 if not. \n\n";
    for (int a = 1;a<=10;a++)
    {
        cout <<"\tEnter Result: ";
        cin  >>result[x];

        while ((result[x] != 1)&&(result[x] != 2))
        {   cout<< "\n\tInvalid Input. Try again!\n\n";
            cout <<"\tEnter Result: ";
            cin  >>result[x];
        };
        
        pass = countpass(x,result,pass);
        fail = countfail(x,result,fail);
        x++;
    }
    
    cout<<"\nThere are "<<pass<< " students who passed and there are "<<fail<< " students who failed.\n\n";
    if (pass > 8)
    {cout << "Bonus to Instructor!\n";};
}

