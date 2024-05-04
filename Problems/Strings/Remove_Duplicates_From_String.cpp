//geeksforgeeks.org/problems/remove-all-duplicates-from-a-given-string4321/1
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeDuplicates(string str) {
        unordered_set<char> seen;
        string result;

        for (char c : str) {
            if (seen.find(c) == seen.end()) {
                result += c;
                seen.insert(c);
            }
        }

        return result;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}