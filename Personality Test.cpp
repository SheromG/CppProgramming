#include <iostream>

using namespace std;

void WrongInput(){
    cout<<"Incorrect Input, Please try again.";
}
void Choices(){

    string choice[5] = {"A.Strongly Agree","B.Agree","C.Neutral","D.Disagree","E.Strongly Disagree"};
    for (int x=0; x<5; x++){
    cout<<choice[x]<<endl;
    }
}


int main()
{
    int option;
    string name;

    cout<< "Hello There! Welcome to Personality Test 101!\n" << endl;
    cout<< "Please Enter Your Name: ";
    cin >> name;
    name[0] = toupper(name[0]);
    cout<<" "<<endl;
    Start:
    cout<< "Hi " << name << ". You can choose between 3 options.\n"<<endl;
    cout<< "Option 1: Likert Personality Test \nOption 2: Rating Yourself Personality Test\nOption 3: Boolean Personality Test\n";
    cout<< "\nType the number of the test you want to take (1,2,3): " ;
    cin >> option; system("cls");

    while ((option != 1)&&(option != 2)&&(option != 3))
    {
        WrongInput();
        cin>>option;
    }
    if(option==1){
        goto Option1;
        system("cls");
    }
    else if (option==2){
        goto Option2;
        system("cls");
    }
    else if (option==3){
        goto Option3;
        system("cls");
    }

    Option1:
        {string op10,op102;
        char op11,op12,op13,op14,op15,op16,op17,op18,op19,op110;
        int op1score = 0,op101;

        cout<<"Welcome to Likert Personality Test\n";
        cout<<"10 question will be given to you and you answer depends on how much you agree on the question.\n";
        cout<<"Type Begin to Start and Type End to Stop the Test. ";
        cin >>op10;
        while ((op10!="Begin")&&(op10!="begin")&&(op10!="Stop")&&(op10!="stop")){
            WrongInput();
            cin>>op10;}

            if ((op10 == "Begin")||(op10=="begin")){
                cout<<"\nThe Likert Personality test Begins!\n\n";

                cout<<"Question 1: \n\n";
                cout<<"Choices are: \n";
                Choices();
                cin >> op11; system("cls");
                if ((op11 == 'A')||(op11 == 'a')){
                        op1score = op1score + 5;}
                else if ((op11 == 'B')||(op11 == 'b'))
                {op1score = op1score + 4;}
                else if ((op11 == 'C')||(op11 == 'c')){
                    op1score = op1score + 3;}
                else if ((op11 == 'D')||(op11 == 'd')){
                    op1score = op1score + 2;}
                else if ((op11 == 'E')||(op11 == 'e')){
                    op1score = op1score + 1;}

                cout<<"Question 2: \n\n";
                cout<<"Choices are: \n";
                Choices();
                cin >> op12; system("cls");
                if ((op12 == 'A')||(op12 == 'a')){
                        op1score = op1score + 5;}
                else if ((op12 == 'B')||(op12 == 'b'))
                {op1score = op1score + 4;}
                else if ((op12 == 'C')||(op12 == 'c')){
                    op1score = op1score + 3;}
                if ((op12 == 'D')||(op12 == 'd')){
                    op1score = op1score + 2;}
                if ((op12 == 'E')||(op12 == 'e')){
                    op1score = op1score + 1;}

                cout<<"Question 3: \n\n";
                cout<<"Choices are: \n";
                Choices();
                cin >> op13; system("cls");
                if ((op13 == 'A')||(op13 == 'a')){
                        op1score = op1score + 5;}
                else if ((op13 == 'B')||(op13 == 'b'))
                {op1score = op1score + 4;}
                else if ((op13 == 'C')||(op13 == 'c')){
                    op1score = op1score + 3;}
                else if ((op13 == 'D')||(op13 == 'd')){
                    op1score = op1score + 2;}
                else if ((op13 == 'E')||(op13 == 'e')){
                    op1score = op1score + 1;}

                cout<<"Question 4: \n\n";
                cout<<"Choices are: \n";
                Choices();
                cin >> op14; system("cls");
                if ((op14 == 'A')||(op14 == 'a')){
                        op1score = op1score + 5;}
                else if ((op14 == 'B')||(op14 == 'b'))
                {op1score = op1score + 4;}
                else if ((op14 == 'C')||(op14 == 'c')){
                    op1score = op1score + 3;}
                else if ((op14 == 'D')||(op14 == 'd')){
                    op1score = op1score + 2;}
                else if ((op14 == 'E')||(op14 == 'e')){
                    op1score = op1score + 1;}

                cout<<"Question 5: \n\n";
                cout<<"Choices are: \n";
                Choices();
                cin >> op15; system("cls");
                if ((op15 == 'A')||(op15 == 'a')){
                        op1score = op1score + 5;}
                else if ((op15 == 'B')||(op15 == 'b'))
                {op1score = op1score + 4;}
                else if ((op15 == 'C')||(op15 == 'c')){
                    op1score = op1score + 3;}
                else if ((op15 == 'D')||(op15 == 'd')){
                    op1score = op1score + 2;}
                else if ((op15 == 'E')||(op15 == 'e')){
                    op1score = op1score + 1;}

                cout<<"Question 6: \n\n";
                cout<<"Choices are: \n";
                Choices();
                cin >> op16; system("cls");
                if ((op16 == 'A')||(op16 == 'a')){
                        op1score = op1score + 5;}
                else if ((op16 == 'B')||(op16 == 'b'))
                {op1score = op1score + 4;}
                else if ((op16 == 'C')||(op16 == 'c')){
                    op1score = op1score + 3;}
                else if ((op16 == 'D')||(op16 == 'd')){
                    op1score = op1score + 2;}
                else if ((op16 == 'E')||(op16 == 'e')){
                    op1score = op1score + 1;}



                cout<<"Question 7: \n\n";
                cout<<"Choices are: \n";
                Choices();
                cin >> op17; system("cls");
                if ((op17 == 'A')||(op17 == 'a')){
                        op1score = op1score + 5;}
                else if ((op17 == 'B')||(op17 == 'b'))
                {op1score = op1score + 4;}
                else if ((op17 == 'C')||(op17 == 'c')){
                    op1score = op1score + 3;}
                else if ((op17 == 'D')||(op17 == 'd')){
                    op1score = op1score + 2;}
                else if ((op17 == 'E')||(op17 == 'e')){
                    op1score = op1score + 1;}

                cout<<"Question 8: \n\n";
                cout<<"Choices are: \n";
                Choices();
                cin >> op18; system("cls");
               if ((op18 == 'A')||(op18 == 'a')){
                        op1score = op1score + 5;}
                else if ((op18 == 'B')||(op18 == 'b'))
                {op1score = op1score + 4;}
                else if ((op18 == 'C')||(op18 == 'c')){
                    op1score = op1score + 3;}
                else if ((op18 == 'D')||(op18 == 'd')){
                    op1score = op1score + 2;}
                else if ((op18 == 'E')||(op18 == 'e')){
                    op1score = op1score + 1;}

                cout<<"Question 9: \n\n";
                cout<<"Choices are: \n";
                Choices();
                cin >> op19; system("cls");
                if ((op19 == 'A')||(op19 == 'a')){
                        op1score = op1score + 5;}
                else if ((op19 == 'B')||(op19 == 'b'))
                {op1score = op1score + 4;}
                else if ((op19 == 'C')||(op19 == 'c')){
                    op1score = op1score + 3;}
                else if ((op19 == 'D')||(op19 == 'd')){
                    op1score = op1score + 2;}
                else if ((op19 == 'E')||(op19 == 'e')){
                    op1score = op1score + 1;}

                cout<<"Question 10: \n\n";
                cout<<"Choices are: \n";
                Choices();
                cin >> op110; system("cls");
                if ((op110 == 'A')||(op110 == 'a')){
                        op1score = op1score + 5;}
                else if ((op110 == 'B')||(op110 == 'b'))
                {op1score = op1score + 4;}
                else if ((op110 == 'C')||(op110 == 'c')){
                    op1score = op1score + 3;}
                else if ((op110 == 'D')||(op110 == 'd')){
                    op1score = op1score + 2;}
                else if ((op110 == 'E')||(op110 == 'e')){
                    op1score = op1score + 1;}

                cout <<"Thank You for taking Likert Personality test\n";
                cout <<"Would you like to see your score? Press 1 if Yes and Press 2 if No: ";
                cin  >>op101; system("cls");
                 while ((op101 != 1)&&(op101 != 2)){
                WrongInput();
                cin >> op101;
                 }
                if (op101 == 1){
                    cout << "Your score is : "<<op1score<<endl;
                    cout << "\nRating Scale\n";
                    cout << "41-50: \n";
                    cout << "31-40: \n";
                    cout << "21-30: \n";
                    cout << "11-20: \n";
                    cout << "1-10: \n\n";

                    cout << "Would You Like to take another Pesonality test? Yes or No: ";
                    cin  >> op102; system("cls");
                    while ((op102 != "Yes")&&(op102 != "No")){
                    WrongInput();
                    cin >> op102;
                    }
                         if ((op102 == "Yes")||(op102 == "yes")){
                            goto Start;
                         }
                         else if ((op102=="No")||(op102 == "no"))
                        {
                        cout<< "That's Sad. Come Play again next time";
                        return 0;
                        }
                }

                 else if (op101==2)
            {
                cout<< "That's Sad. Come Play again next time";
                return 0;
            }


            }
            else if ((op10=="Stop")||(op10=="stop"))
            {
                cout<< "That's Sad. Come Play again next time";
                return 0;

            }

            ;}
    Option2:
        {string op20,op202;
        int op201;
        int op21, op22, op23, op24, op25, op26, op27, op28, op29, op210, op2score = 0;

        cout<<"Welcome to Rating Yourself Personality Test\n";
        cout<<"10 question will be given to you and you rate yourself on the scale of 1-10 on based on how much you agree on the question.\n";
        cout<<"Type Begin to Start and Type End to Stop the Test. ";
        cin >>op20;
        while ((op20!="Begin")&&(op20!="begin")&&(op20!="Stop")&&(op20!="stop")){
            WrongInput();
            cin>>op20;}

            if ((op20 == "Begin")||(op20=="begin")){
                cout<<"\nThe Rating Yourself Personality test Begins!\n\n";

                cout<<"Question 1: \n";
                cout<<"Your rate: ";
                cin >>op21;system("cls");
                if (op21 == 10){op2score=op2score+10;}if (op21 == 9){op2score=op2score+9;}if (op21 == 8){op2score=op2score+8;}if (op21 == 7){op2score=op2score+7;}if (op21 == 6){op2score=op2score+6;}
                if (op21 == 5){op2score=op2score+5;} if (op21 == 4){op2score=op2score+4;} if (op21 == 3){op2score=op2score+3;} if (op21==2){op2score=op2score+2;} if (op21==1){op2score=op2score+1;}

                cout<<"Question 2: \n";
                cout<<"Your rate: ";
                cin >>op22;system("cls");
                if (op22 == 10){op2score=op2score+10;}if (op22 == 9){op2score=op2score+9;}if (op22 == 8){op2score=op2score+8;}if (op22 == 7){op2score=op2score+7;}if (op22 == 6){op2score=op2score+6;}
                if (op22 == 5){op2score=op2score+5;} if (op22 == 4){op2score=op2score+4;} if (op22 == 3){op2score=op2score+3;} if (op22==2){op2score=op2score+2;} if (op22==1){op2score=op2score+1;}


                cout<<"Question 3: \n";
                cout<<"Your rate: ";
                cin >>op23;system("cls");
                if (op23 == 10){op2score=op2score+10;}if (op23 == 9){op2score=op2score+9;} if (op23 == 8){op2score=op2score+8;} if (op23 == 7){op2score=op2score+7;} if (op23 == 6){op2score=op2score+6;}
                if (op23 == 5){op2score=op2score+5;}  if (op23 == 4){op2score=op2score+4;} if (op23 == 3){op2score=op2score+3;} if (op23 == 2){op2score=op2score+2;} if (op23 == 1){op2score=op2score+1;}

                cout<<"Question 4: \n";
                cout<<"Your rate: ";
                cin >>op24;system("cls");
                if (op24 == 10){op2score=op2score+10;}if (op24 == 9){op2score=op2score+9;} if (op24 == 8){op2score=op2score+8;} if (op24 == 7){op2score=op2score+7;} if (op24 == 6){op2score=op2score+6;}
                if (op24 == 5){op2score=op2score+5;}  if (op24 == 4){op2score=op2score+4;} if (op24 == 3){op2score=op2score+3;} if (op24 == 2){op2score=op2score+2;} if (op24 == 1){op2score=op2score+1;}

                cout<<"Question 5: \n";
                cout<<"Your rate: ";
                cin >>op25;system("cls");
                if (op25 == 10){op2score=op2score+10;}if (op25 == 9){op2score=op2score+9;} if (op25 == 8){op2score=op2score+8;} if (op25 == 7){op2score=op2score+7;} if (op25 == 6){op2score=op2score+6;}
                if (op25 == 5){op2score=op2score+5;}  if (op25 == 4){op2score=op2score+4;} if (op25 == 3){op2score=op2score+3;} if (op25 == 2){op2score=op2score+2;} if (op25 == 1){op2score=op2score+1;}

                cout<<"Question 6: \n";
                cout<<"Your rate: ";
                cin >>op26;system("cls");
                if (op26 == 10){op2score=op2score+10;}if (op26 == 9){op2score=op2score+9;} if (op26 == 8){op2score=op2score+8;} if (op26 == 7){op2score=op2score+7;} if (op26 == 6){op2score=op2score+6;}
                if (op26 == 5){op2score=op2score+5;}  if (op26 == 4){op2score=op2score+4;} if (op26 == 3){op2score=op2score+3;} if (op26 == 2){op2score=op2score+2;} if (op26 == 1){op2score=op2score+1;}

                cout<<"Question 7: \n";
                cout<<"Your rate: ";
                cin >>op27;system("cls");
                if (op27 == 10){op2score=op2score+10;}if (op27 == 9){op2score=op2score+9;} if (op27 == 8){op2score=op2score+8;} if (op27 == 7){op2score=op2score+7;} if (op27 == 6){op2score=op2score+6;}
                if (op27 == 5){op2score=op2score+5;}  if (op27 == 4){op2score=op2score+4;} if (op27 == 3){op2score=op2score+3;} if (op27 == 2){op2score=op2score+2;} if (op27 == 1){op2score=op2score+1;}

                cout<<"Question 8: \n";
                cout<<"Your rate: ";
                cin >>op28;system("cls");
                if (op28 == 10){op2score=op2score+10;}if (op28 == 9){op2score=op2score+9;} if (op28 == 8){op2score=op2score+8;} if (op28 == 7){op2score=op2score+7;} if (op28 == 6){op2score=op2score+6;}
                if (op28 == 5){op2score=op2score+5;}  if (op28 == 4){op2score=op2score+4;} if (op28 == 3){op2score=op2score+3;} if (op28 == 2){op2score=op2score+2;} if (op28 == 1){op2score=op2score+1;}

                cout<<"Question 9: \n";
                cout<<"Your rate: ";
                cin >>op29;system("cls");
                if (op29 == 10){op2score=op2score+10;}if (op29 == 9){op2score=op2score+9;} if (op29 == 8){op2score=op2score+8;} if (op29 == 7){op2score=op2score+7;} if (op29 == 6){op2score=op2score+6;}
                if (op29 == 5){op2score=op2score+5;}  if (op29 == 4){op2score=op2score+4;} if (op29 == 3){op2score=op2score+3;} if (op29 == 2){op2score=op2score+2;} if (op29 == 1){op2score=op2score+1;}

                cout<<"Question 10: \n";
                cout<<"Your rate: ";
                cin >>op210;system("cls");
                if (op210 == 10){op2score=op2score+10;}if (op210 == 9){op2score=op2score+9;} if (op210 == 8){op2score=op2score+8;} if (op210 == 7){op2score=op2score+7;} if (op210 == 6){op2score=op2score+6;}
                if (op210 == 5){op2score=op2score+5;}  if (op210 == 4){op2score=op2score+4;} if (op210 == 3){op2score=op2score+3;} if (op210 == 2){op2score=op2score+2;} if (op210 == 1){op2score=op2score+1;}

                cout <<"Thank You for taking Rating Yourself Personality test\n";
                cout <<"Would you like to see your score? Press 1 if Yes and Press 2 if No: ";
                cin  >>op201; system("cls");
                 while ((op201 != 1)&&(op201 != 2)){
                    WrongInput();
                    cin >> op201;
                 }
                 if (op201 == 1){
                    cout << "Your score is : "<<op2score<<endl;
                    cout << "\nRating Scale\n";
                    cout << "91-100: \n";
                    cout << "81-90: \n";
                    cout << "71-80: \n";
                    cout << "61-70: \n";
                    cout << "51-60: \n";
                    cout << "41-50: \n";
                    cout << "31-40: \n";
                    cout << "21-30: \n";
                    cout << "11-20: \n";
                    cout << "1-10: \n\n";

                    cout << "Would You Like to take another Pesonality test? Yes or No: ";
                    cin  >> op202; system("cls");
                    while ((op202 != "Yes")&&(op202 != "No")){
                    WrongInput();
                    cin >> op202;
                    }
                         if ((op202 == "Yes")||(op202 == "yes")){
                            goto Start;
                         }
                         else if ((op202=="No")||(op202 == "no"))
                        {
                        cout<< "That's Sad. Come Play again next time";
                        return 0;
                        }

                 else if (op201==2)
            {
                cout<< "That's Sad. Come Play again next time";
                return 0;
            }
            }
            }
                else if ((op20=="Stop")||(op20=="stop"))
            {
                cout<< "That's Sad. Come Play again next time";
                return 0;
            }

            ;}

        Option3:
            { string op30,op302;
            char op31,op32,op33,op34,op35,op36,op37,op38,op39,op310;
            int op3score = 0 ,op301;
            cout<<"Welcome to Boolean Personality Test\n";
            cout<<"10 question will be given to you and you will answer T if the statement is true and F is the statement is false.\n";
            cout<<"Type Begin to Start and Type End to Stop the Test. ";
            cin >>op30;
            while ((op30!="Begin")&&(op30!="begin")&&(op30!="Stop")&&(op30!="stop")){
            WrongInput();
            cin>>op30;}

            if ((op30 == "Begin")||(op30=="begin")){
                cout<<"\nThe Rating Yourself Personality test Begins!\n\n";

                cout<<"Question 1: \n";
                cout<<"Is the statement true of false: ";
                cin >>op31;system("cls");

                if ((op31 == 'T')||(op31 == 't')){op3score++;}

                cout<<"Question 2: \n";
                cout<<"Is the statement true of false: ";
                cin >>op32;system("cls");

                if ((op32 == 'T')||(op32 == 't')){op3score++;}

                cout<<"Question 3: \n";
                cout<<"Is the statement true of false: ";
                cin >>op33;system("cls");

                if ((op33 == 'T')||(op33 == 't')){op3score++ ;}

                cout<<"Question 4: \n";
                cout<<"Is the statement true of false: ";
                cin >>op34;system("cls");

                if ((op34 == 'T')||(op34 == 't')){op3score++;}

                cout<<"Question 5: \n";
                cout<<"Is the statement true of false: ";
                cin >>op35;system("cls");

                if ((op35 == 'T')||(op35 == 't')){op3score++;}

                cout<<"Question 6: \n";
                cout<<"Is the statement true of false: ";
                cin >>op36;system("cls");

                if ((op36 == 'T')||(op36 == 't')){op3score++;}

                cout<<"Question 7: \n";
                cout<<"Is the statement true of false: ";
                cin >>op37;system("cls");

                if ((op37 == 'T')||(op37 == 't')){op3score++;}

                cout<<"Question 8: \n";
                cout<<"Is the statement true of false: ";
                cin >>op38;system("cls");

                if ((op38 == 'T')||(op38 == 't')){op3score++;}

               cout<<"Question 9: \n";
                cout<<"Is the statement true of false: ";
                cin >>op39;system("cls");

                if ((op39 == 'T')||(op39 == 't')){op3score++;}

                cout<<"Question 10: \n";
                cout<<"Is the statement true of false: ";
                cin >>op310;system("cls");

                if ((op310 == 'T')||(op310 == 't')){op3score++;}

                cout <<"Thank You for taking Boolean Personality test\n";
                cout <<"Would you like to see your score? Press 1 if Yes and Press 2 if No: ";
                cin  >>op301; system("cls");
                 while ((op301 != 1)&&(op301 != 2)){
                    WrongInput();
                    cin >> op301;
                 }
                 if (op301 == 1){
                    cout << "Your score is : "<<op3score<<endl;
                    cout << "\nRating Scale\n";
                    cout << "9-10: \n";
                    cout << "7-8: \n";
                    cout << "5-6: \n";
                    cout << "3-4: \n";
                    cout << "1-2: \n\n";

                    cout << "Would You Like to take another Pesonality test? Yes or No: ";
                    cin  >> op302; system("cls");
                    while ((op302 != "Yes")&&(op302 != "No")){
                    WrongInput();
                    cin >> op302;
                    }
                         if ((op302 == "Yes")||(op302 == "yes")){
                            goto Start;
                         }
                         else if ((op302=="No")||(op302 == "no"))
                        {
                        cout<< "That's Sad. Come Play again next time";
                        return 0;
                        }

                 else if (op301==2)
            {
                cout<< "That's Sad. Come Play again next time";
                return 0;
            }
            }

            }

            else if ((op30=="Stop")||(op30=="stop"))
            {
                cout<< "That's Sad. Come Play again next time";
                return 0;
            }


            ;}


}
