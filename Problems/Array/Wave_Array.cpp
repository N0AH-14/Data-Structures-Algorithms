//geeksforgeeks.org/problems/wave-array-1587115621/1
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void convertToWave(int n, vector<int>& arr)
    {
        int i=0;
        while(i<n)
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            i+=2;
        }
    }
};
int main()
{
    int t,n;
    cin>>t; //Input testcases
    while(t--) //While testcases exist
    {
        cin>>n; //input size of array
        vector<int> a(n); //declare vector of size n
        for(int i=0;i<n;i++)
            cin>>a[i]; //input elements of array
        sort(a.begin(),a.end());
        Solution ob;
        ob.convertToWave(n, a);

        for(int i=0;i<n;i++)
            cout<<a[i]<<" "; //print array
            
        cout<<endl;
    }
}