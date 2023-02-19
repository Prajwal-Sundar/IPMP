/*
    Prajwal Sundar, CSE-B, 106121092
    IPMP Task Code
    Arrays Pgm5
    Link: https://www.geeksforgeeks.org/find-the-two-numbers-with-odd-occurences-in-an-unsorted-array/
*/

#include "bits/stdc++.h"
using namespace std;

int main()
{
    cout << "Welcome to C++ Two Odd Occurences Finder !" << endl << endl;

    int n; // size of array
    cout << "Enter the size of your array : ";
    cin >> n;

    int X[n]; // array
    int XOR = 0;
    cout << "Enter your array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> X[i]; // fill array
        XOR ^= X[i]; // XOR of all bits
    }

    int r = XOR & ~(XOR-1); // rightmost set bit
    int a = 0, b = 0; // non-repeating numbers
    for (int i = 0; i < n; i++)
    {
        if (X[i] & r) a ^= X[i]; // first set
        else b ^= X[i]; // second set
    }

    cout << "The two elements with odd occurences are : " << a << " and " << b;
    cout << endl << endl << "Thank you for using C++ Two Odd Occurence Finder. Bye Bye !";
}