#include "bits/stdc++.h"
using namespace std;

// Partition Function
int partition(int * A, int L, int U)
{
    int i = L-1, j = U+1; // pointers
    int p = U, pvt = A[U]; // pivot

    for (int k = L; k <= U; k++)
    {
        if (A[k] < pvt) { i++; swap(A[i], A[k]); }
        else if (A[k] > pvt) { j--; swap(A[j], A[k]); }
    }

    return i;
}

void sort(int * A, int L, int U)
{
    if (L < U) // only valid cases
    {
        int P = partition(A, L, U); // get pivot position
        sort(A, L, P-1); // sort elements before pivot
        sort(A, P+1, U); // sort elements after pivot
    }
}

// Main Function
int main()
{
    cout << "Welcome to C++ Quick Sort !" << endl << endl;

    int n; // size of array
    cout << "Enter the size of your array : ";
    cin >> n;

    int * A = (int *) malloc(n * sizeof(int)); // array
    cout << "Enter your array elements : ";
    for (int i = 0; i < n; i++) cin >> A[i];

    sort(A, 0, n-1); // sort
    cout << "Your Sorted Array is : ";
    for (int i = 0; i < n; i++) cout << A[i] << " ";

    cout << endl << endl << "Thank you for using C++ Quick Sort. Bye Bye !";
}