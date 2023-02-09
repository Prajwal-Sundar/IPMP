#include "bits/stdc++.h"
using namespace std;

// Heapify an array of n elements at position i
void heapify(int * arr, int n, int i)
{
    int L = i; // largest element as of now
    int l = (2*i)+1; // left child
    int r = (2*i)+2; // right child

    if ((l < n) && (arr[l] > arr[L])) // left is biggest
        L = l;
    if ((r < n) && (arr[r] > arr[L])) // right is biggest
        L = r;
    
    if (L != i) // largest is not root
    {
        swap(arr[i], arr[L]); // swap
        heapify(arr, n, L); // heapify at child
    }
}

// Sorting Function
void sort(int * arr, int n)
{
    for (int i = (n/2)-1; i >= 0; i--)
        heapify(arr, n, i); // heapify full tree
    
    for (int i = n-1; i > 0; i--)
    {
        swap(arr[0], arr[i]); // swap current element with root
        heapify(arr, i, 0); // heapify at root, reducing size of array
    }
}

// Main Function
int main()
{
    cout << "Welcome to C++ Heap Sort !" << endl << endl;

    int n; // size of array
    cout << "Enter the size of your array : ";
    cin >> n;

    int * A = (int *) malloc(n * sizeof(int)); // array
    cout << "Enter your array elements : ";
    for (int i = 0; i < n; i++) cin >> A[i];

    sort(A, n); // sort
    cout << "Your Sorted Array is : ";
    for (int i = 0; i < n; i++) cout << A[i] << " ";

    cout << endl << endl << "Thank you for using C++ Heap Sort. Bye Bye !";
}