#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        //Soltion Starts Here
        string A, B;
        for (int i = 0; i < n; i += 2)
        {
            A = string(1, s[i]);
            B = string(1, s[i + 1]);
            A + B == "00"
                ? cout << "A"
            : A + B == "01"
                ? cout << "T"
            : A + B == "10"
                ? cout << "C"
            : A + B == "11"
                ? cout << "G"
                : cout << endl;
        }
        cout << endl;
    }
}