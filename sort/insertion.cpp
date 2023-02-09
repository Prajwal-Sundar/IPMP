#include "bits/stdc++.h"
using namespace std;

// Insertion  Sort Function
void sort(int * A, int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = i, sml = A[j]; // current element
        while (A[j-1] > sml && j > 0)
        {
            A[j] = A[j-1]; // shift right
            j--; // decrement j
        }
        A[j] = sml;
    }
}

// Main Function
int main()
{
    cout << "Welcome to C++ Insertion Sort !" << endl << endl;

    int n; // size of array
    cout << "Enter the size of your array : ";
    cin >> n;

    int * A = (int *) malloc(n * sizeof(int)); // array
    cout << "Enter your array elements : ";
    for (int i = 0; i < n; i++) cin >> A[i];

    sort(A, n); // sort
    cout << "Your Sorted Array is : ";
    for (int i = 0; i < n; i++) cout << A[i] << " ";

    cout << endl << endl << "Thank you for using C++ Insertion Sort. Bye Bye !";
}