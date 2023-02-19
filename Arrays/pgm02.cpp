/*
    Prajwal Sundar, CSE-B, 106121092
    IPMP Task Code
    Arrays Pgm2
    Link: https://www.geeksforgeeks.org/find-the-number-occurring-odd-number-of-times/
*/

#include "bits/stdc++.h"
using namespace std;

int main()
{
    cout << "Welcome to C++ Odd Occurence Locator !" << endl << endl;

    int n; // size of array
    cout << "Enter the size of your array : ";
    cin >> n;

    int R = 0; // XOR result
    cout << "Enter your array : ";
    for (int i = 0; i < n; i++)
    {
        int tmp; cin >> tmp;
        R ^= tmp; // xor of all inputs
    }

    cout << "The number " << R << " occurs odd number of times.";
    cout << endl << endl << "Thank you for using C++ Odd Occurence Locator. Bye Bye !";
}