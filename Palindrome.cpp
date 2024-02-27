#include <iostream>

using namespace std;

int main()
{
    int a;
    int x;
    char ans1, ans2, ans3,ans4,ans5;
    string name;

    cout<< "Enter Name: ";cin>> name;
    name[0] = toupper(name[0]);

    cout << "\nGood Day, " ;
    cout <<name;
    cout << ". Welcome to Palindrome 101!\n" << endl;

    cout<< "Instructions: Choose the best letter to complete the Palindrome Word. One Point will be given in each correct answer." << endl;

    cout<< "\nNote: Your answer will fill the blank(s) in the palindrome word. Choose Wisely " <<endl;

    cout << "\nAre  you ready?" << " If yes, press 1 and if no, press 2: " ;cin>> a ;

    while ((a !=  1)&&(a != 2))
    {
        cout << "Wrong Input. Choose Again. "; cin>>a;
    }
    if (a == 1)
    {

        cout << "\nGoodluck! Lets start!" <<endl;

        cout<< "" << endl;
        cout << "\nQuestion #1. For 1 point." << endl;
        cout << "\nWord : _eve_ " << endl;
        cout << "\nMeaning: It is a horizontal plane or line with respect to the distance above or below a given point." <<endl;
        cout << "\nChoices: ";
        cout << " \nA. L \nB. A \nC. P \nD. G" << endl;
        cout << "\nYour answer: ";
        cin >> ans1;

        while ((ans1 !=  'A')&&(ans1 != 'B')&&(ans1 != 'C')&&(ans1 != 'D')&&(ans1 !=  'a')&&(ans1 != 'b')&&(ans1 != 'c')&&(ans1 != 'd'))
        { cout << "Wrong Input. Choose Again. "; cin>>ans1; }

        if ((ans1 == 'A')||(ans1 =='a'))
        {
            cout<<  "Your Answer is Correct! The Word is LEVEL" <<endl;
            x=x+1;
            cout << "Your score: " <<x;
        }
        else if ((ans1 == 'B')||(ans1 =='b')||(ans1 == 'C')||(ans1 =='c')||(ans1 == 'D')||(ans1 =='d'))
        {
            cout<<  "Your Answer is Wrong! The Correct Answer is A!"  << endl;
            cout << "Your score: " <<x <<endl;
        }

        cout<< "" << endl;
        cout << "\nQuestion #2. For 1 point." << endl;
        cout << "\nWord : _oo_ " << endl;
        cout << "\nMeaning: Twelve o'clock in the day." <<endl;
        cout << "\nChoices: ";
        cout << " \nA. L \nB. C \nC. N \nD. S" << endl;
        cout << "\nYour answer: ";
        cin >> ans2;

        while ((ans2 !=  'A')&&(ans2 != 'B')&&(ans2 != 'C')&&(ans2 != 'D')&&(ans2 !=  'a')&&(ans2 != 'b')&&(ans2 != 'c')&&(ans2 != 'd'))
        { cout << "Wrong Input. Choose Again. "; cin>>ans2; }

        if ((ans2 == 'C')||(ans2 =='c'))
        {
            cout<<  "Your Answer is Correct! The Word is NOON" <<endl;
            x=x+1;
            cout << "Your score: " <<x;
        }
        else if ((ans2 == 'B')||(ans2 =='b')||(ans2 == 'A')||(ans2 =='a')||(ans2 == 'D')||(ans2 =='d'))
        {
            cout<<  "Your Answer is Wrong! The Correct Answer is C!"  << endl;
            cout << "Your score: " <<x;
        }

        cout<< "" << endl;
        cout << "\nQuestion #3. For 1 point." << endl;
        cout << "\nWord : c_v_c " << endl;
        cout << "\nMeaning: Relating to a city or town, especially its administration." <<endl;
        cout << "\nChoices: ";
        cout << " \nA. A \nB. I \nC. E \nD. U" << endl;
        cout << "\nYour answer: ";
        cin >> ans3;

        while ((ans3 !=  'A')&&(ans3 != 'B')&&(ans3 != 'C')&&(ans3 != 'D')&&(ans3 !=  'a')&&(ans3 != 'b')&&(ans3 != 'c')&&(ans3 != 'd'))
        { cout << "Wrong Input. Choose Again. "; cin>>ans3; }

        if ((ans3 == 'B')||(ans3 =='b'))
        {
            cout<<  "Your Answer is Correct! The Word is CIVIC" <<endl;
            x=x+1;
            cout << "Your score: " <<x;
        }
        else if ((ans3 == 'C')||(ans3 =='c')||(ans3 == 'A')||(ans3 =='a')||(ans3 == 'D')||(ans3 =='d'))
        {
            cout<<  "Your Answer is Wrong! The Correct Answer is C!"  << endl;
            cout << "Your score: " <<x;
        }

        cout<< "" << endl;
        cout << "\nQuestion #4. For 1 point." << endl;
        cout << "\nWord : Ma_am " << endl;
        cout << "\nMeaning: Used to address or refer to a woman in a polite or respectful way." <<endl;
        cout << "\nChoices: ";
        cout << " \nA. S \nB. T \nC. Y \nD. D" << endl;
        cout << "\nYour answer: ";
        cin >> ans4;

        while ((ans4 !=  'A')&&(ans4 != 'B')&&(ans4 != 'C')&&(ans4 != 'D')&&(ans4 !=  'a')&&(ans4 != 'b')&&(ans4 != 'c')&&(ans4 != 'd'))
        { cout << "Wrong Input. Choose Again. "; cin>>ans4; }

        if ((ans4 == 'D')||(ans4 =='d'))
        {
            cout<<  "Your Answer is Correct! The Word is MADAM" <<endl;
            x=x+1;
            cout << "Your score: " <<x;
        }
        else if ((ans4 == 'C')||(ans4 =='c')||(ans4 == 'A')||(ans4 =='a')||(ans4 == 'B')||(ans4 =='b'))
        {
            cout<<  "Your Answer is Wrong! The Correct Answer is D!"  << endl;
            cout << "Your score: " <<x;
        }

        cout<< "" << endl;
        cout << "\nQuestion #5. For 1 point." << endl;
        cout << "\nWord : ra_e_ar " << endl;
        cout << "\nMeaning: An automobile built or modified for racing." <<endl;
        cout << "\nChoices: ";
        cout << " \nA. A \nB. B \nC. C \nD. D" << endl;
        cout << "\nYour answer: ";
        cin >> ans5;

        while ((ans5 !=  'A')&&(ans5 != 'B')&&(ans5 != 'C')&&(ans5 != 'D')&&(ans5 !=  'a')&&(ans5 != 'b')&&(ans5 != 'c')&&(ans5 != 'd'))
        { cout << "Wrong Input. Choose Again. "; cin>>ans5; }

        if ((ans5 == 'C')||(ans5 =='c'))
        {
            cout<<  "Your Answer is Correct! The Word is RACECAR" <<endl;
            x=x+1;
            cout << "Your score: " <<x;
        }
        else if ((ans5 == 'D')||(ans5 =='d')||(ans5 == 'A')||(ans5 =='a')||(ans5 == 'B')||(ans5 =='b'))
        {
            cout<<  "Your Answer is Wrong! The Correct Answer is C!"  << endl;
            cout << "Your score: " <<x;
        }

            cout << "\n\nCongratulations, " <<name <<"! You got ";
            cout <<x << " Points" <<endl;

    }
    else if  (a == 2)
    {
        cout << "How sad! Come play another time!"<<endl;
    }
}