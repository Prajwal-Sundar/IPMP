#include "bits/stdc++.h"
using namespace std;

// Merge Function
void merge(int * A, int L, int U)
{
    int M = (L+U)/2; // middle element
    int * B = (int *) malloc((U-L+1) * sizeof(int)); // temperory array
    int P1 = L, P2 = M+1, P = 0; // pointers

    while ((P1 <= M) && (P2 <= U)) // compare and insert
    {
        if (A[P1] < A[P2]) B[P++] = A[P1++];
        else B[P++] = A[P2++];
    }
    while (P1 <= M) B[P++] = A[P1++]; // remaining insertions
    while (P2 <= U) B[P++] = A[P2++]; // remaining insertions

    P = 0; // reset pointer
    for (int i = L; i <= U; i++) A[i] = B[P++]; // insert into original array
}

// Sort Function
void sort(int * A, int L, int U)
{
    if (L < U) // only valid conditions
    {
        int M = (L+U)/2; // middle position
        sort(A, L, M); // sort left half
        sort(A, M+1, U); // sort right half
        merge(A, L, U); // merge sorted halves
    }
}

// Main Function
int main()
{
    cout << "Welcome to C++ Merge Sort !" << endl << endl;

    int n; // size of array
    cout << "Enter the size of your array : ";
    cin >> n;

    int * A = (int *) malloc(n * sizeof(int)); // array
    cout << "Enter your array elements : ";
    for (int i = 0; i < n; i++) cin >> A[i];

    sort(A, 0, n-1); // sort
    cout << "Your Sorted Array is : ";
    for (int i = 0; i < n; i++) cout << A[i] << " ";

    cout << endl << endl << "Thank you for using C++ Merge Sort. Bye Bye !";
}