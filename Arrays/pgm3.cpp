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
    int a = 0, b = 0;
    for (int i = 1; i < n; i++)
    {
        int tmp; cin >> tmp;
        a ^= tmp; b ^= i;
    }
    b ^= n;

    cout << "The missing number is : " << (a ^ b);
    cout << endl << endl << "Thank you for using C++ Missing Number Finder. Bye Bye !";
}