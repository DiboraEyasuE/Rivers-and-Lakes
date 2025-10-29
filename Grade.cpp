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

void display(int n, const string stdName[],const string mark[], const string grade)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Name: " << stdName[i]
             << "\tMark: " << mark[i] 
             << "\tGrade: " << grade[i];
    }
}

int main()
{
    string* name;
    int size;
    cout << "Number of students: ";
    cin >> size;
    int mark[size];
    name = accept(size, mark);
}
