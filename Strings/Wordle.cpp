#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string S, T, M;
    cin >> t;
    while (t--)
    {
        cin >> S >> T;
        for (int i = 0; i < 5; i++)
        {
            S[i] == T[i]
                ? M.push_back('G')
                : M.push_back('B');
        }
        cout << M << endl;
        M.clear();
    }
}
