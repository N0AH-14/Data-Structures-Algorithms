#include "bits/stdc++.h"
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
    {
        // cout<<"Returning A:\t"<<a<<endl;
        cout << "GCD:\t" + to_string(a) << endl;
        return a;
    }
    else
    {
        // cout<<"Returning GCD:\t"<<b<<","<<a%b<<endl;
        return gcd(b, a % b);
    }
}
void leftRotate(int arr[], int d, int n)
{
    d = d % n;	//to keep "D" in limit
    int GCD = gcd(d, n);	//No. of sets
    for (int i = 0; i < GCD; i++)
    {
        int temp = arr[i];
        int j = i;
        while (1)
        {
            int k = j + d;
            if (k >= n)
            {
                k = k - n;
            }
            if (k == i)
            {
                break;
            }
            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    }
}
int main()
{
    int n, d;
    cin>>n;
    int arr[n];
    for (auto &val : arr)
    {
        cin >> val;
    }
    cin>>d;
    leftRotate(arr, d,n);
    for (auto &val : arr)
    {
        cout << val << "\t";
    }
}