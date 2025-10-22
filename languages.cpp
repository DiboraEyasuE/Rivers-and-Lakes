#include <iostream>
#include <string>
using namespace std;

void displayLanguages(string languages[ ], int length){
    for (int i = 0; i < length; i++)
    {
        cout << languages[i] << "\n";
    }
}

int main() {
    int size;
    cout << "What is the size of your array? ";
    cin >> size;
    string language[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Language: ";
        cin >> language[i];
    }
    displayLanguages(language, size);
    return 0;
}