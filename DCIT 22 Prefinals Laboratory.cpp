#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main()
{
    output:
    system("cls");
	int data[25] = { -5, -4, -3, 14, 20, 1, -2, -9, -1, 7, -3, 18, 16, 6, 13, -4, 2, 8, -8, -6, 1, 3, 10, 19, -2 };
	int loop = 0, result = 0;
	int choice,choice1, choice2;

	queue<int>queue;
	stack<int>q;

	for (int x = 0; x < 25; x++)
	{queue.push(data[loop]);loop++;}

    cout << "The Final Output of the data is: \n\n|";

	int size = queue.size();
	for (int y = 0; y < size; y++)
	{
        result = result + queue.front();
		cout << result << "| ";
		queue.pop();
    }

	cout << "\n\nActions:\n     1)See the Solution.\n     2)See the original data.\n     3)Exit the progam.\n\n";
	cout << "Your Response: ";
	cin >> choice;
	while (choice != 1 && choice != 2 && choice != 3)
    {
        cout << "Wrong Input. Try again: ";
        cin >> choice;
    }
    if (choice == 1)
    first:
    {
	    system ("cls");
	    cout << "The Solution For The Final Output.\n\n";
		int loop1 = 24;

		for (int x = 0; x < 25; x++)
		{q.push(data[loop1]);loop1--;}

		int size = q.size();
        result = 0;
        cout << "The first value in the data is "<<q.top()<<endl<<endl;;
        cout <<"Previous \tNext \t\tOutput\n";
		for (int y = 0; y < size-1; y++)
        {
            result = result + q.top();
			cout << result;
			q.pop();
			cout << "\t+\t" <<q.top() << "\t=\t" << result + q.top() <<endl;
        }
        cout << "\nThe last value of the data is "<<result + q.top()<<endl;

        cout << "\n\nActions:\n     1)See the final output.\n     2)See the original data.\n     3)Exit the progam.\n\n";
        cout << "Your Response: ";
        cin >> choice1;
        while (choice1 != 1 && choice1 != 2 && choice1 != 3)
        {
            cout << "Wrong Input. Try again: ";
            cin >> choice1;
        }
        if (choice1 == 1)
        { goto output;}
        else if (choice1 == 2)
        { goto second;}
        else if (choice1 == 3)
        { goto third;};
    }
	else if (choice == 2)
	second:
    {
	    system ("cls");
	    cout << "The Orignal Data Of The Final Output.\n\n|";
	    loop = 0;
	    for (int x = 0; x < 25; x++)
        {queue.push(data[loop]);loop++;}

        int size = queue.size();
        for (int y = 0; y < size; y++)
        {
            cout << queue.front() << "| ";
            queue.pop();
        }

		cout << "\n\nActions:\n     1)See the final output.\n     2)See the Solution.\n     3)Exit the progam.\n\n";
        cout << "Your Response: ";
        cin >> choice2;
        while (choice2 != 1 && choice2 != 2 && choice2 != 3 )
        {
            cout << "Wrong Input. Try again: ";
            cin >> choice2;
        }
        if (choice2 == 1)
        { goto output;}
        else if (choice2 == 2)
        { goto first;}
        else if (choice2 == 3)
        { goto third;};
	}
	else if (choice == 3)
    third:
	{
	    cout  << "\n\nThank you for using the program.\n";
		return 0;
	}
}
