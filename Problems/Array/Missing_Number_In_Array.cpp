//geeksforgeeks.org/problems/missing-number-in-array1416/1
#include <bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        int i, sum=0;
        for(auto& val: array)
        {
            sum+=val;
        }
        return (((n*(n+1))/2)-sum);
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.missingNumber(array, n) << "\n";
    }
    return 0;
}