/*
    Prajwal Sundar, CSE-B, 106121092
    IPMP Task Code
    Arrays Pgm15
    Link: https://www.geeksforgeeks.org/find-the-row-with-maximum-number-1s/
*/

#include "bits/stdc++.h"
using namespace std;

// Get row with maximum number of 1's
int getRow(int r, int c, bool ** A)
{
    int R = -1, M = INT_MIN;
    
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (A[i][j]) // 1 reached
            {
                int n = c-j; // number of 1's
                if (n > M) // new record
                {
                    R = i;
                    M = n; // update record
                }
                break;
            }
        }
    }

    return R;
}

// Main Function
int main()
{
    cout << "Welcome to C++ Maximum 1's Row Finder !" << endl << endl;

    int r, c; // rows and columns
    cout << "Enter the number of rows : ";
    cin >> r;
    cout << "Enter the number of columns : ";
    cin >> c;

    bool ** M = (bool **) malloc(r * sizeof(bool *));
    for (int i = 0; i < r; i++)
        M[i] = (bool *) malloc(c * sizeof(bool));
    cout << "Enter your matrix :-" << endl;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> M[i][j];
    
    cout << "Row " << getRow(r, c, M) << " has the maximum number of 1's.";
    cout << endl << endl << "Thank you for using C++ Maximum 1' Row Finder. Bye Bye !";
}