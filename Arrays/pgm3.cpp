/*
    Prajwal Sundar, CSE-B, 106121092
    IPMP Task Code
    Arrays Pgm3
    Link: https://www.geeksforgeeks.org/find-the-missing-number/
*/

#include "bits/stdc++.h"
using namespace std;

int main()
{
    cout << "Welcome to C++ Missing Number Finder !" << endl << endl;

    int n;
    cout << "Enter the upper limit : ";
    cin >> n;

    cout << "Enter array : ";
    int s = 0; // sum variable
    for (int i = 0; i < n-1; i++)
    {
        int tmp; cin >> tmp;
        s += tmp; // find sum of all inputs
    }

    int num = ((n*(n+1))/2) - s; // missing number
    cout << "The missing number is : " << num;
    cout << endl << endl << "Thank you for using C++ Missing Number Finder. Bye Bye !";
}