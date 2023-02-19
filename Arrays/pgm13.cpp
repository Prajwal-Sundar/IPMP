/*
    Prajwal Sundar, CSE-B, 106121092
    IPMP Task Code
    Arrays Pgm13
    Link: https://www.geeksforgeeks.org/find-a-sorted-subsequence-of-size-3-in-linear-time/
*/

#include "bits/stdc++.h"
using namespace std;

// Next greatest element using stack
vector<int> nextGreatest(vector<int> &A)
{
    stack<int> S; // stack
    int n = A.size(); // size of array
    int P[n]; // array of positions

    for (int i = n-1; i >= 0; i--)
    {
        while (!S.empty() && A[i] > A[S.top()]) S.pop(); // pop
        if (S.empty()) P[i] = -1; // next greatest not present
        else P[i] = S.top(); // next greatest present
        S.push(i);
    }

    return vector<int> (P, P+n);
}

// Main Function
int main()
{
    cout << "Welcome to C++ Increasing Triplet Calculator !" << endl << endl;

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

    vector<int> P = nextGreatest(A); // next greatest positions
    int flag = 0; // flag variable

    for (int i = 0; i < n; i++)
    {
        if (P[i] != -1 && P[P[i]] != -1) // triplet found
        {
            flag = 1; // found
            cout << "(i,j,k) = (" << i << "," << P[i] << "," << P[P[i]] << ") with (A[i],A[j],A[k]) = (" << A[i] << "," << A[P[i]] << "," << A[P[P[i]]] << ")" << endl;
        }
    }

    if (!flag) // no triplet found
        cout << "Triplet not found" << endl;
    
    cout << endl << "Thank you for using C++ Increasing Triplet Calculator. Bye Bye !";
}