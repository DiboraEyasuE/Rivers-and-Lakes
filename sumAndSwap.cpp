#include <iostream>
using namespace std;

// Function to calculate the sum of numbers exhaustively with function overloading

void sum(int[], int);
void sum(float[], int);
void sum(string[], int);

int main(){

    int size, choice;
    cout << "How many values do you want to add? ";
    cin >> size;
    cout << "What type of values? (1: int, 2: float, 3: string) ";
    cin >> choice;
    while (choice < 1 || choice > 3)
    {
        cout << "Invalid choice! Please enter 1 for integers, 2 for decimal, 3 for word" << endl;
        cin >> choice;

    }
    int *intarr = new int[size];
    float *floatarr = new float[size];
    string *strarr = new string[size];
    if (choice == 1)
        sum(intarr, size);
    else if (choice == 2)
        sum(floatarr, size);
    else if (choice == 3)
        sum(strarr, size);
    else
        cout << "Invalid choice!" << endl;
        delete[] intarr;
        delete[] floatarr;
        delete[] strarr;
    return 0;
}

void sum(int arr[], int n)
{
    int added = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter number " << i + 1 <<" ";
        cin >> arr[i];
        added = added + arr[i];
    }
    cout << "The sum is: " << added;
}
void sum(float arr[], int n)
{
    float added = 0.0;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter number " << i + 1 <<" ";
        cin >> arr[i];
        added = added + arr[i];
    }
    cout << "The sum is: " << added;
}
void sum(string arr[], int n)
{
    string added = "";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter string " << i + 1 <<" ";
        cin >> arr[i];
        added = added + arr[i];
    }
    cout << "The sum is: " << added;
}


// So many things to fix but I will leave it here for now.