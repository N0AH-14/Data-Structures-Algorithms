#include <bits/stdc++.h>
using namespace std;
int speedUP=[](){
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        if(nums.size()==1) return nums[0];
        int i;
        multiset <int> kLargest;
        for(i=0;i<k;++i)
        {
            kLargest.insert(nums[i]);
        }
        for(i=k;i<nums.size();++i)
        {
            if(nums[i]>*(kLargest.begin()))
            {
                kLargest.insert(nums[i]);
                kLargest.erase(kLargest.begin());
            }
        }
        return *(kLargest.begin());
    }
};