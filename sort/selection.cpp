#include "bits/stdc++.h"
using namespace std;

// Selection Sort Function
void sort(int * A, int n)
{
    for (int i = 0; i < n; i++)
    {
        int sml = A[i], p = i;
        for (int j = i+1; j < n; j++)
        {
            if (A[j] < sml) // smaller element obtained
            {
                sml = A[j];
                p = j; // update
            }
        }
        swap(A[i], A[p]); // swap
    }
}

// Main Function
int main()
{
    cout << "Welcome to C++ Selection Sort !" << endl << endl;

    int n; // size of array
    cout << "Enter the size of your array : ";
    cin >> n;

    int * A = (int *) malloc(n * sizeof(int)); // array
    cout << "Enter your array elements : ";
    for (int i = 0; i < n; i++) cin >> A[i];

    sort(A, n); // sort
    cout << "Your Sorted Array is : ";
    for (int i = 0; i < n; i++) cout << A[i] << " ";

    cout << endl << endl << "Thank you for using C++ Selection Sort. Bye Bye !";
}