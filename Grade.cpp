#include <iomanip>
#include <iostream>
using namespace std;

string* accept(int n, int mark[])
{
    string* stdName = new string[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Name: ";
        cin >> stdName[i];
        cout << "Mark: ";
        cin >> mark[i];
    }
    return stdName;
}

string* calculate(int n, const int mark[])
{
    string* grade = new string[n];
    for (int i = 0; i < n; i++)
    {
        if (mark[i] <= 110)
        {
            if (mark[i] >= 90)
            {
                grade[i] = "A";
            }
            else if (mark[i] >= 80)
            {
                grade[i] = "B";
            }
            else if (mark[i] >= 70)
            {
                grade[i] = "C";
            }
            else if (mark[i] >= 60)
            {
                grade[i] = "D";
            }
            else if (mark[i] < 60)
            {
                grade[i] = "F";
            }
        }
    }
    return grade;
}

void display(int n, const string stdName[],const int mark[], const string grade[])
{
    cout << left << setw(10) << "Name "
        << setw(10) << "Mark " 
        <<  setw(10) << "Grade " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << left << setw(10)<< stdName[i] << setw(10) << mark[i] << setw(10) << grade[i] << endl;
    }
}

int main()
{
    string* name;
    string* stdGrade;
    int size;
    cout << "Number of students: ";
    cin >> size;
    int* mark = new int[size];
    name = accept(size, mark);
    stdGrade = calculate(size, mark);
    display(size, name, mark, stdGrade);
    delete[] name;
    delete[] stdGrade;
    delete[] mark;
    return 0;
}
