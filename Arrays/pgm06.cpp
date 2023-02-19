/*
    Prajwal Sundar, CSE-B, 106121092
    IPMP Task Code
    Arrays Pgm6
    Link: https://www.geeksforgeeks.org/given-a-number-find-next-smallest-palindrome-larger-than-this-number/
*/

#include "bits/stdc++.h"
using namespace std;

// Check if all are 9's
int checkAll9(vector<long> &A)
{
    int n = A.size(); // size of array
    for (int i = 0; i < n; i++)
        if (A[i] != 9)
            return 0; // number other than 9 encountered
    return 1; // only 9's encountered
}

// Get immediate next palidrome
string get(vector<long> &A)
{
    int n = A.size(); // number of digits

    if (checkAll9(A))
        return to_string((long) (pow(10, n) + 1));
    
    int i = (n/2)-1, j; // pointers
    if (n % 2) // odd
        j = i+2;
    else // even
        j = i+1;

    while (A[i] == A[j]) // ignore similar digits
    { i--; j++; }

    int inc = (i < 0) || (A[i] < A[j]); // increment needed or not
    while (i >= 0)
    {
        A[j] = A[i]; // mirror left onto right
        i--; j++;
    }

    if (inc) // carry needed
    {
        int carry = 1; // carry
        if (n % 2) // odd
            i = j = (n/2);
        else // even
        { j = n/2; i = j-1; }

        while (i >= 0 && carry)
        {
            if (A[i] < 9) // carry can be deposited here
            {
                A[i--]++; // deposit the carrry
                A[j++]++; // mirror right also
                carry = 0;
            }

            else // carry deposited and regenerated
                A[i--] = A[j++] = 0;
        }
    }

    string str = "";
    for (int i = 0; i < n; i++)
        str += to_string(A[i]);
    return str;
}

// Main Function
int main()
{
    cout << "Welcome to C++ Next Smallest Palindrome Generator !" << endl << endl;

    string n; // number
    cout << "Enter your number : ";
    cin >> n;

    int l = n.size();
    vector<long> V;
    for (int i = 0; i < l; i++) V.push_back(n[i]-'0');

    cout << "Next Nearest Palindrome : " << get(V);
    cout << endl << endl << "Thank you for using C++ Next Smallest Palindrome Generator. Bye Bye !";
}