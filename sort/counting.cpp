#include "bits/stdc++.h"
using namespace std;

// Counting Sort Function
void sort(int * A, int n)
{
    int sml = INT_MAX, lg = INT_MIN; // minimum and maximum element
    for (int i = 0; i < n; i++)
    {
        sml = min(sml, A[i]); // update smallest
        lg = max(lg, A[i]); // update largest
    }

    int * B = (int *) malloc((lg-sml+1) * sizeof(int));
    for (int i = 0; i <= lg-sml; i++) B[i] = 0; // set to zero

    for (int i = 0; i < n; i++)
        B[A[i]-sml]++; // increment count
    
    int P = 0; // pointer to original array
    for (int i = 0; i <= lg-sml; i++)
        while (B[i]--) // as long as count isn't reduced to zero
            A[P++] = i+sml;
}

// Main Function
int main()
{
    cout << "Welcome to C++ Counting Sort !" << endl << endl;

    int n; // size of array
    cout << "Enter the size of your array : ";
    cin >> n;

    int * A = (int *) malloc(n * sizeof(int)); // array
    cout << "Enter your array elements : ";
    for (int i = 0; i < n; i++) cin >> A[i];

    sort(A, n); // sort
    cout << "Your Sorted Array is : ";
    for (int i = 0; i < n; i++) cout << A[i] << " ";

    cout << endl << endl << "Thank you for using C++ Counting Sort. Bye Bye !";
}