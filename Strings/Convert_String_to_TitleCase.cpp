#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string S, word;
        map<int, string> Line;
        int key = 1, Uppercase = 1;
        getline(cin, S);
        for (int i = 0; i <= S.length(); i++)
        {
            if (S[i] == ' ' || i == S.length())
            {
                if (Uppercase == 0)
                {
                    if (word[0] == 'a' || word[0] == 'b' || word[0] == 'c' || word[0] == 'd' || word[0] == 'd' || word[0] == 'f' || word[0] == 'g' || word[0] == 'h' || word[0] == 'i' || word[0] == 'j' || word[0] == 'k' || word[0] == 'l' || word[0] == 'm' || word[0] == 'n' || word[0] == 'o' || word[0] == 'p' || word[0] == 'q' || word[0] == 'r' || word[0] == 's' || word[0] == 't' || word[0] == 'u' || word[0] == 'v' || word[0] == 'w' || word[0] == 'x' || word[0] == 'y' || word[0] == 'z')
                    {
                        word[0] = char(int(word[0]) - 32);
                    }
                    for (auto it = word.begin() + 1; it != word.end(); ++it)
                    {
                        if (*it == 'A' || *it == 'B' || *it == 'C' || *it == 'D' || *it == 'E' || *it == 'F' || *it == 'G' || *it == 'H' || *it == 'I' || *it == 'J' || *it == 'K' || *it == 'L' || *it == 'M' || *it == 'N' || *it == 'O' || *it == 'P' || *it == 'Q' || *it == 'R' || *it == 'S' || *it == 'T' || *it == 'U' || *it == 'V' || *it == 'W' || *it == 'X' || *it == 'Y' || *it == 'Z')
                        {
                            *it = char(int(*it) + 32);
                        }
                    }
                }
                Line.emplace(key, word);
                key++;
                Uppercase = 1;
                word.clear();
            }
            else
            {
                if (S[i] == 'A' || S[i] == 'B' || S[i] == 'C' || S[i] == 'D' || S[i] == 'E' || S[i] == 'F' || S[i] == 'G' || S[i] == 'H' || S[i] == 'I' || S[i] == 'J' || S[i] == 'K' || S[i] == 'L' || S[i] == 'M' || S[i] == 'N' || S[i] == 'O' || S[i] == 'P' || S[i] == 'Q' || S[i] == 'R' || S[i] == 'S' || S[i] == 'T' || S[i] == 'U' || S[i] == 'V' || S[i] == 'W' || S[i] == 'X' || S[i] == 'Y' || S[i] == 'Z')
                {
                    word.push_back(S[i]);
                }
                else
                {
                    word.push_back(S[i]);
                    Uppercase = 0;
                }
            }
        }
        for (auto it : Line)
        {
            cout << it.second << " ";
        }
        cout << endl;
    }
}
