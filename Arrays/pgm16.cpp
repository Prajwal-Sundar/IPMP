/*
    Prajwal Sundar, CSE-B, 106121092
    IPMP Task Code
    Arrays Pgm16
    Link: https://www.geeksforgeeks.org/maximum-difference-between-two-elements/
*/

#include "bits/stdc++.h"
using namespace std;

void maxDiff(vector<int> &A)
{
    int minElm = INT_MAX; // minimum element encountered till now
    int p = -1; // position of minimum element
    int pos = -1;
    int maxDif = -1; // maximum difference achieved till now
    int P = -1; // position of maximum element
    int n = A.size(); // size of vector

    for (int i = 0; i < n; i++)
    {
        if (A[i] < minElm)
        {
            p = i;
            minElm = A[i]; // update minimum
        }
        else
        {
            int d = A[i]-minElm; // get differece
            if (d > maxDif)
            {
                P = i;
                pos = p;
                maxDif = d; // update maximum difference
            }
        }
    }

    if (maxDif == -1) // not possible
        cout << "Maximum difference does not exist.";
    else
        cout << "The maximum difference is (A[" << P << "]=" << A[P] << ") - (A[" << pos << "]=" << A[pos] << ") = " << maxDif;
}

// Main function
int main()
{
    cout << "Welcome to C++ Maximum Difference Calculator !" << endl << endl;

    int n; // size of array
    cout << "Enter your array size : ";
    cin >> n;

    vector<int> A; // array
    cout << "Enter your array : ";
    for (int i = 0; i < n; i++)
    {
        int tmp; cin >> tmp;
        A.push_back(tmp);
    }

    maxDiff(A);
    cout << endl << endl << "Thank you for using C++ Maximum Difference Calculator. Bye Bye !";
}