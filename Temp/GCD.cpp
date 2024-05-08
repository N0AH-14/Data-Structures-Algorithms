#include "bits/stdc++.h"
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
    {
        // cout<<"Returning A:\t"<<a<<endl;
        return a;
    }
    else
    {
        // cout<<"Returning GCD:\t"<<b<<","<<a%b<<endl;
        return gcd(b, a % b);
    }
}
int main()
{
    cout<<gcd(3,12);
}