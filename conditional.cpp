#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int p_mark;
    string grade;
    cout << "Enter your exam mark:";
    cin >> p_mark;

    if (p_mark >= 80)
        {
            grade = "A";
            cout<<"Your grade is :  " <<grade;
        }
    else if (p_mark >= 70)
        {
            grade = "B";
            cout<<"Your grade is :  " <<grade;
        }

    else if (p_mark >= 60)
        {
            grade = "C";
            cout<<"Your grade is :  " <<grade;
        }
    else if (p_mark >= 50)
        {
            grade = "D";
            cout<<"Your grade is :  " <<grade;
        }

    else if (p_mark >= 70)
        {
            grade = "F";
            cout<<"Your grade is :  " <<grade;
        }
    return 0;
}
