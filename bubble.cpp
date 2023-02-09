#include "bits/stdc++.h"
using namespace std;

// Bubble Sort Function
void sort(int * A, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (A[j] > A[j+1])
                swap(A[j], A[j+1]);
        }
    }
}

// Main Function
int main()
{
    cout << "Welcome to C++ Bubble Sort !" << endl << endl;

    int n; // size of array
    cout << "Enter the size of your array : ";
    cin >> n;

    int * A = (int *) malloc(n * sizeof(int)); // array
    cout << "Enter your array elements : ";
    for (int i = 0; i < n; i++) cin >> A[i];

    sort(A, n); // sort
    cout << "Your Sorted Array is : ";
    for (int i = 0; i < n; i++) cout << A[i] << " ";

    cout << endl << endl << "Thank you for using C++ Bubble Sort. Bye Bye !";
}