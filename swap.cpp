#include <iostream>
using namespace std;

int* swap(int[], int);
void accept(int[], int);
float* swap(float[], int);
void accept(float[], int);
string* swap(string[], int); 
void accept(string[], int);

int main(){
    int size, choice;
    int * oldint;
    string* oldstr;
    float* oldfloat;
    int * intarr = new int[size];
    float * floatarr = new float[size];
    string * strarr = new string[size];
    cout << "How many values do you want to swap? ";
    cin >> size;
    cout << "What type of values? (1: int, 2: float, 3: string) ";
    cin >> choice;
    while (choice < 1 || choice > 3)
    {
        cout << "Invalid choice! Please enter 1 for integers, 2 for decimal, 3 for word" << endl;
        cin >> choice;

    }
    if (choice == 1)
    {
        accept(intarr, size);
        oldint = swap(intarr, size);
    }    
    else if (choice == 2)
    {
        accept(floatarr, size);
        oldfloat = swap(floatarr, size);
    }
        
    else if (choice == 3)
    {
        accept(strarr, size);
        oldstr = swap(strarr, size);
    }
    else
        cout << "Invalid choice!" << endl;

    return 0;
}

int* swap(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter an integer " << i + 1 <<" ";
        cin >> arr[i];
    }
    // Before swapping let's store the original data in a different array
    int* oldarr = new int[n];
    for (int i = 0; i < n; i++)
    {
        oldarr[i] = arr[i];
    }
    for (int i = 0; i < n/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - (i + 1)];
        arr[n - (i + 1)] = temp;
    }
    return oldarr;
}
string* swap(string arr[], int n)
{
    string temp;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter a string " << i + 1 <<" ";
        cin >> arr[i];
    }
    // Before swapping let's store the original data in a different array
    string* oldarr = new string[n];
    for (int i = 0; i < n; i++)
    {
        oldarr[i] = arr[i];
    }
    for (int i = 0; i < n/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - (i + 1)];
        arr[n - (i + 1)] = temp;
    }
    return oldarr;
}
float* swap(float arr[], int n)
{
    float temp;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter a float: " << i + 1 <<" ";
        cin >> arr[i];
    }
    // Before swapping let's store the original data in a different array
    float* oldarr = new float[n];
    for (int i = 0; i < n; i++)
    {
        oldarr[i] = arr[i];
    }
    for (int i = 0; i < n/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - (i + 1)];
        arr[n - (i + 1)] = temp;
    }
    return oldarr;
}
void accept(int[], int){
    
}