#include <iostream>

using namespace std;

double quiz(double x,double y)
{
    double quiz;
    quiz = (x/y)*20;
    return quiz;
}
double seatwork(double x,double y)
{
    double seatwork;
    seatwork = (x/y)*10;
    return seatwork;
}
double labexercise(double x,double y)
{
    double labexercise;
    labexercise = (x/y)*20;
    return labexercise;
}
double exam(double x,double y)
{
    double exam;
    exam = (x/y)*50;
    return exam;
}

int main()
{
    start:
    char name[200];
    char course[200];
    double pgrade[8];
    cout << "Student Name: ";cin.getline(name,200);
    cout << "Course: "; cin.getline(course,200);
    cout << "\nPrelim Grade \n\n";
    cout << "Quiz: \n";
    cout << "   Total Points : ";cin >> pgrade[0];
    cout << "   Total Items : ";cin >> pgrade[1];
    cout << "Seatwork: \n";
    cout << "   Total Points : ";cin >> pgrade[2];
    cout << "   Total Items : ";cin >> pgrade[3];
    cout << "Lab Exercises: \n";
    cout << "   Total Points : ";cin >> pgrade[4];
    cout << "   Total Items : ";cin >> pgrade[5];
    cout << "Prelim Exam: \n";
    cout << "   Total Points : ";cin >> pgrade[6];
    cout << "   Total Items : ";cin >> pgrade[7];

    double pquiz,psw,ple,pexam,prelimgrade;
    pquiz = quiz(pgrade[0],pgrade[1]);
    psw = seatwork(pgrade[2],pgrade[3]);
    ple = labexercise(pgrade[4],pgrade[5]);
    pexam = exam(pgrade[6],pgrade[7]);
    prelimgrade = pquiz + psw + ple + pexam;
    cout<< "\nPrelim Grade: "<<prelimgrade;


    double mgrade[8];
    cout << "\n\nMidterm Grade \n\n";
    cout << "Quiz: \n";
    cout << "   Total Points : ";cin >> mgrade[0];
    cout << "   Total Items : ";cin >> mgrade[1];
    cout << "Seatwork: \n";
    cout << "   Total Points : ";cin >> mgrade[2];
    cout << "   Total Items : ";cin >> mgrade[3];
    cout << "Lab Exercises: \n";
    cout << "   Total Points : ";cin >> mgrade[4];
    cout << "   Total Items : ";cin >> mgrade[5];
    cout << "Midterm Exam: \n";
    cout << "   Total Points : ";cin >> mgrade[6];
    cout << "   Total Items : ";cin >> mgrade[7];

    double mquiz,msw,mle,mexam,midtermgrade,midtermfinal;
    mquiz = quiz(mgrade[0],mgrade[1]);
    msw = seatwork(mgrade[2],mgrade[3]);
    mle = labexercise(mgrade[4],mgrade[5]);
    mexam = exam(mgrade[6],mgrade[7]);
    midtermgrade = mquiz + msw + mle + mexam;
    midtermfinal = (prelimgrade/3)+((midtermgrade*2)/3);
    cout<< "\nTotal Midterm Grade: "<<midtermfinal;

    double fgrade[8];
    cout << "\n\nFinal Grade \n\n";
    cout << "Quiz: \n";
    cout << "   Total Points : ";cin >> fgrade[0];
    cout << "   Total Items : ";cin >> fgrade[1];
    cout << "Seatwork: \n";
    cout << "   Total Points : ";cin >> fgrade[2];
    cout << "   Total Items : ";cin >> fgrade[3];
    cout << "Lab Exercises: \n";
    cout << "   Total Points : ";cin >> fgrade[4];
    cout << "   Total Items : ";cin >> fgrade[5];
    cout << "Final Exam: \n";
    cout << "   Total Points : ";cin >> fgrade[6];
    cout << "   Total Items : ";cin >> fgrade[7];

    double fquiz,fsw,fle,fexam,finalgrade,totalfinal;
    fquiz = quiz(fgrade[0],fgrade[1]);
    fsw = seatwork(fgrade[2],fgrade[3]);
    fle = labexercise(fgrade[4],fgrade[5]);
    fexam = exam(fgrade[6],fgrade[7]);
    finalgrade = fquiz + fsw + fle + fexam;
    totalfinal = (midtermfinal/3)+((finalgrade*2)/3);
    cout<< "\nTotal Final Grade: "<<totalfinal;
    if (totalfinal>74)
    {
    cout<< "\n\nRemarks: Passed";
    }
    else {
        cout<< "\n\nRemarks: Failed";
    }


    char answer;
    cout<< "\n\nWould you like to enter another data? Y/N: ";
    cin >> answer;
    if ((answer == 'Y')||(answer == 'y')) {system("cls");goto start;}
    else if ((answer == 'N')||(answer == 'n')){return 0;}
}

