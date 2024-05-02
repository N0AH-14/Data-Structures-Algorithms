#include "bits/stdc++.h"
using namespace std;
class Solution
{
public:
    vector<int> prefixDistinct(int n, vector<int> &arr)
    {
        vector<int> answer(0);//answer vector
        set<int> distinct;
        for(int i=0; i<n;i++)
        {
            distinct.insert(arr[i]);
            answer.emplace_back(distinct.size());
        }
        return answer;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.prefixDistinct(n, arr);
        for (auto it : ans)
            cout << it << " ";
        cout<<endl;
    }
}