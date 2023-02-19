/*
    Prajwal Sundar, CSE-B, 106121092
    IPMP Task Code
    Arrays Pgm10
    Link: https://www.geeksforgeeks.org/find-four-elements-that-sum-to-a-given-value-set-2/
*/

#include "bits/stdc++.h"
using namespace std;

struct Node
{
    int i; // position from first array
    int j; // position from second array
    int n1; // first array number
    int n2; // second array number
    int s; // sum

    Node(int a, int b, int c, int d)
    {
        i = a; j = b;
        n1 = c; n2 = d;
        s = n1 + n2;
    }
};

bool comp(struct Node * N1, struct Node * N2)
{
    return (N1->s <= N2->s);
}

void get(vector<int> &V, int s)
{
    int n = V.size();
    sort(V.begin(), V.end()); // sort the vector
    cout << endl << "Sorted Array : ";
    for (int i = 0; i < n; i++) cout << V[i] << " ";
    cout << endl;

    vector<struct Node *> P; // pairwise sum vector
    for (int i = 0; i < n; i++)
        for (int j = i+1; j < n; j++)
            P.push_back(new Node(i, j, V[i], V[j]));
    sort(P.begin(), P.end(), comp);

    int l = P.size();
    int L = 0, R = l-1; // pointers
    struct Node * P1, * P2;
    int flag = 0; // flag variable

    while (L < R)
    {
        if ((P[L]->s + P[R]->s) > s) R--; // reduce sum
        else if ((P[L]->s + P[R]->s) < s) L++; // increase sum
        else // sum obtained
        {
            P1 = P[L]; P2 = P[R];
            bool c1 = (P1->i) != (P2->i);
            bool c2 = (P1->i) != (P2->j);
            bool c3 = (P1->j) != (P2->i);
            bool c4 = (P1->j) != (P2->j); // checking distinct positions
            if (c1 && c2 && c3 && c4)
            {
                flag = 1; // sum obtained
                break;
            }
        }
    }

    if (flag)
        cout << "Sum = " << s << " obtained as (A[" << P1->i << "]=" << V[P1->i] << ") + (A[" << P1->j << "]=" << V[P1->j] << ") + (A[" << P2->i << "]=" << V[P2->i] << ") + (A[" << P2->j << "]=" << V[P2->j] << ")";
    else
        cout << "Sum not obtained";
}

// Main Function
int main()
{
    cout << "Welcome to C++ Quadriple Sum Checker !" << endl << endl;

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
    cout << endl << endl << "Thank you for using C++ Quadriple Sum Checker. Bye Bye !";
}