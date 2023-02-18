/*
    Prajwal Sundar, CSE-B, 106121092
    IPMP Task Code
    Arrays Pgm1
    Link: https://www.geeksforgeeks.org/union-and-intersection-of-two-sorted-arrays-2/
*/

#include "bits/stdc++.h"
using namespace std;

vector<vector<int>> UI(vector<int> &A, vector<int> &B)
{
    vector<int> U; // union vector
    vector<int> I; // intersection vector

    int L1 = A.size(), L2 = B.size();
    int P1 = 0, P2 = 0;

    while ((P1 < L1) && (P2 < L2))
    {
        if (A[P1] < B[P2]) U.push_back(A[P1++]);
        else if (A[P1] > B[P2]) U.push_back(B[P2++]);
        else // repeated element
        {
            U.push_back(A[P1++]);
            I.push_back(B[P2++]);
        }
    }

    while (P1 < L1) U.push_back(A[P1++]);
    while (P2 < L2) U.push_back(B[P2++]);

    return {U, I}; // vector of union and intersection
}

int main()
{
    cout << "Welcome to C++ Union and Intersection Finder !" << endl << endl;

    int l1;
    cout << "Enter the size of your first array : ";
    cin >> l1;

    vector<int> A;
    cout << "Enter the first array (sorted) : ";
    for (int i = 0; i < l1; i++)
    {
        int tmp; cin >> tmp;
        A.push_back(tmp);
    }

    int l2;
    cout << "Enter the size of your second array : ";
    cin >> l2;

    vector<int> B;
    cout << "Enter the second array (sorted) : ";
    for (int i = 0; i < l2; i++)
    {
        int tmp; cin >> tmp;
        B.push_back(tmp);
    }

    vector<vector<int>> R = UI(A, B); // result vector
    
    cout << endl << "Union : ";
    for (auto ptr = R[0].begin(); ptr != R[0].end(); ++ptr) cout << *ptr << " ";
    cout << endl << "Intersection : ";
    for (auto ptr = R[1].begin(); ptr != R[1].end(); ++ptr) cout << *ptr << " ";

    cout << endl << endl << "Thank you for using C++ Union and Intersection Finder. Bye Bye !";
}