/*
    Prajwal Sundar, CSE-B, 106121092
    IPMP Task Code
    Arrays Pgm7
    Link: https://stackoverflow.com/questions/9368205/given-a-number-find-the-next-higher-number-which-has-the-exact-same-set-of-digi
*/

#include "bits/stdc++.h"
using namespace std;

// Get next permuntation in sequence
string get(vector<int> &V)
{
    int i, l = V.size(); // pointer
    for (i = l-1; ((i >= 0) && (V[i] <= V[i-1])); i--);

    if (i < 0) // last permutation possible
        return "-1";

    int p = -1, sml = INT_MAX; // next smallest digit
    for (int j = i; j < l; j++)
    {
        if ((V[j] > V[i-1]) && (V[j] < sml))
        { p = j; sml = V[j]; }
    }

    V.erase(V.begin()+p); // erase digit
    V.insert(V.begin()+(i-1), sml); // insert
    sort(V.begin()+i, V.end()); // sort

    string str = "";
    for (auto ptr = V.begin(); ptr != V.end(); ++ptr)
        str += to_string(*ptr); // concatenate
    return str;
}

int main()
{
    cout << "Welcome to C++ Next Permutation Finder !" << endl << endl;

    string n; // number
    cout << "Enter a number : ";
    cin >> n;

    vector<int> V; // vector of digits
    int l = n.size();
    for (int i = 0; i < l; i++) V.push_back(n[i]-'0');

    cout << "The next permutation is : " << get(V);
    cout << endl << endl << "Thank you for using C++ Next Permutation Finder. Bye Bye !";
}