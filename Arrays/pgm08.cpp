/*
    Prajwal Sundar, CSE-B, 106121092
    IPMP Task Code
    Arrays Pgm8
    Link: https://www.geeksforgeeks.org/given-an-array-a-and-a-number-x-check-for-pair-in-a-with-sum-as-x/
*/

#include "bits/stdc++.h"
using namespace std;

void get(vector<int> &V, int s)
{
    int n = V.size(); // length of vector

    sort(V.begin(), V.end()); // sort the vector
    cout << endl << "Sorted Array : ";
    for (int i = 0; i < n; i++) cout << V[i] << " ";
    cout << endl;

    int L = 0, R = n-1; // left and right pointers
    int flag = 0; // flag variable

    while (L < R)
    {
        if ((V[L] + V[R]) > s) R--; // decrease sum
        else if ((V[L] + V[R]) < s) L++; // increase sum
        else // sum obtained
        {
            flag = 1; // success
            break;
        }
    }

    if (flag)
        cout << "Sum = " << s << " obtained as (A[" << L << "]=" << V[L] << ") + (A[" << R << "]=" << V[R] << ")";
    else
        cout << "Sum not obtained";
}

// Main Function
int main()
{
    cout << "Welcome to C++ Pair Sum Checker !" << endl << endl;

    int n; // size of array
    cout << "Enter the size of your array : ";
    cin >> n;

    vector<int> V; // vector
    cout << "Enter your array : ";
    for (int i = 0; i < n; i++)
    {
        int tmp; cin >> tmp;
        V.push_back(tmp);
    }

    int s;
    cout << "Enter the sum you wish to obtain : ";
    cin >> s;
    
    get(V, s);
    cout << endl << endl << "Thank you for using C++ Pair Sum Checker. Bye Bye !";
}