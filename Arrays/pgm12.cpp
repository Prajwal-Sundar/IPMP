/*
    Prajwal Sundar, CSE-B, 106121092
    IPMP Task Code
    Arrays Pgm12
    Link: https://www.geeksforgeeks.org/find-the-two-repeating-elements-in-a-given-array/
*/

#include "bits/stdc++.h"
using namespace std;

int main()
{
    cout << "Welcome to C++ Two Repeating Elements Finder !" << endl << endl;

    int n; // size of array
    cout << "Enter the upper limit of your sequence : ";
    cin >> n;

    int X[n+2]; // array
    int XOR = 0;
    cout << "Enter your array : ";
    for (int i = 0; i < n+2; i++)
    {
        cin >> X[i]; // fill array
        XOR ^= X[i]; // XOR of all bits
    }
    for (int i = 1; i <= n; i++) XOR ^= i;

    int r = XOR & ~(XOR-1); // rightmost set bit
    int a = 0, b = 0; // non-repeating numbers
    for (int i = 0; i < n+2; i++)
    {
        if (X[i] & r) a ^= X[i]; // first set
        else b ^= X[i]; // second set
    }
    for (int i = 1; i <= n; i++)
    {
        if (i & r) a ^= i; // first set
        else b ^= i; // second set
    }

    cout << "The two repeated elements are : " << a << " and " << b;
    cout << endl << endl << "Thank you for using C++ Two Repeating Elements Finder. Bye Bye !";
}