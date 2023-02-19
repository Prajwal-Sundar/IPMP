/*
    Prajwal Sundar, CSE-B, 106121092
    IPMP Task Code
    Arrays Pgm14
    Link: https://www.geeksforgeeks.org/find-the-smallest-positive-number-missing-from-an-unsorted-array/
*/

#include "bits/stdc++.h"
using namespace std;

// Main computational function
int get(vector<int> &A)
{
    sort(A.begin(), A.end()); // sort
    int l = A.size();

    int P = 0; // pointer
    while (A[P] <= 0) P++;
    // Now P points to the first positive position

    int n = 1; // expectation positive value
    while (P < l && A[P] == n) { n++; P++; }

    return n; // first missing positive value
}

// Main function
int main()
{
    cout << "Welcome to C++ Smallest Positive Missing Integer Computer !" << endl << endl;

    int n; // size of array
    cout << "Enter the size of your array : ";
    cin >> n;

    vector<int> A; // vector
    cout << "Enter your array : ";
    for (int i = 0; i < n; i++)
    {
        int tmp; cin >> tmp;
        A.push_back(tmp);
    }

    cout << "The smallest positive missing integer is : " << get(A);
    cout << endl << endl << "Thank you for using C++ Smallest Positive Missing Integer Computer. Bye Bye !";
}