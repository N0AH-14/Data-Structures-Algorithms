//geeksforgeeks.org/problems/maximum-value-in-a-bitonic-array3001/1
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    int i;
	    for(i=0;i<n;i++)
	    {
	       if(arr[i]>arr[i+1] || i==n-1)
	       {
	           return arr[i];
	       }
	    }
	}
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaximum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}