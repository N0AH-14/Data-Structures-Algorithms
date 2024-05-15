#include <bits/stdc++.h>
using namespace std;
int peakElement(int arr[], int n)
{
    if (n == 1)
    {
        return 0;
    }
    int max = 0, i;
    for (i = 1; i < n; i++)
    {
        if (arr[max] < arr[i])
            max = i;
    }
    return max;
}
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    int arr[n];
    for(auto& val: arr)
    {
        cin>>val;
    }
    cout<<peakElement(arr,n);
}