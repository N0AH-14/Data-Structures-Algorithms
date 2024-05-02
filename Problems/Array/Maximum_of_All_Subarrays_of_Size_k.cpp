//geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> max_of_subarrays(int *arr, int n, int k)
    {
        vector<int> maximum;
        int i = 0;
        int j = 0;
        int max = -1;
        while (j < n)
        {
            if (arr[j] > max)
            {
                max = arr[j];
            }
            if (j - i + 1 == k)
            {
                maximum.push_back(max);
                if (arr[i] == max)
                {
                    max = -1;
                    j = i;
                }
                i++;
            }
            if (j - i + 1 != k)
            {
                j++;
            }
        }
        return maximum;
    }
};
int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}