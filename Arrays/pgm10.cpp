/*
    Prajwal Sundar, CSE-B, 106121092
    IPMP Task Code
    Arrays Pgm10
    Link: https://www.geeksforgeeks.org/find-a-triplet-that-sum-to-a-given-value/
*/

#include "bits/stdc++.h"
using namespace std;

void get(vector<int> &V, int s)
{
    int l = V.size(); // length of vector

    sort(V.begin(), V.end()); // sort the vector
    cout << endl << "Sorted Array : ";
    for (int i = 0; i < l; i++) cout << V[i] << " ";
    cout << endl;

    int L, R, i;
    for (i = 0; i < l; i++)
    {
        L = i+1; R = l-1; // left and right pointers
        int flag = 0; // flag variable

        while (L < R)
        {
            if ((V[L] + V[R]) > (s-V[i])) R--; // reduce the sum
            else if ((V[L] + V[R]) < (s-V[i])) L++; // increase the sum
            else
            {
                flag = 1; // sum found
                break;
            }
        }

        if (flag) // sum found
            break;
    }

    if (i < l)
        cout << "Sum = " << s << " obtained as (A[" << i << "]=" << V[i] << ") + (A[" << L << "]=" << V[L] << ") + (A[" << R << "]=" << V[R] << ")";
    else
        cout << "Sum not obtained";
}

// Main Function
int main()
{
    cout << "Welcome to C++ Triplet Sum Checker !" << endl << endl;

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
    cout << endl << endl << "Thank you for using C++ Triplet Sum Checker. Bye Bye !";
}