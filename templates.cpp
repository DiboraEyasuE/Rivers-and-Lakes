#include <iostream>
using namespace std;

// It is not working as expected. But we'll continue next time in order not to be exhaustive. 
// Tey say... "Work not smarter harder😉"
void accept(int n, int arr[]);
void accept(int n, string arr[]);
void accept(int n, float arr[]);
template <typename T>
    T findMax(T arr[], int n){
        T max = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        return max;
    }
int main()
{
    int n, choice;
    cout << "Enter number of elements: ";
    cin >> n;
    {
        if (choice == 1)
        {
            int* arr = new int[n];
            accept(n, arr);
            int max = findMax<int>(arr, n);
            cout << "Maximum element is: " << max << endl;
            delete[] arr;
        }
        else if (choice == 1)
        {
            float* arr = new float[n];
            accept(n, arr);
            float max = findMax<float>(arr, n);
            cout << "Maximum element is: " << max << endl;
            delete[] arr;
        }
        else if (choice == 1)
        {
            string* arr = new string[n];
            accept(n, arr);
            string max = findMax<string>(arr, n);
            cout << "Maximum element is: " << max << endl;
            delete[] arr;
        }
        else 
        {
            cout << "Invalid choice." << endl;
        }
        cout << "Do you want to continue? (0 to exit, 1 for integers, 2 for floats or 3 for Strings.)";
    } while(choice < 1 or choice > 3);
     
    return 0;
}