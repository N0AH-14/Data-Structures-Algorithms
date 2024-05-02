#include "bits/stdc++.h"
using namespace std;
int main(){
    int array[24];
    float sum=0;
    for(int i=0;i<23;i++)
    {
        cin>>array[i];
        sum+=array[i];
    }
    for(int i=0;i<23;i++)
    {
        if(i==10)
        {
            cout<<endl;
        }
        cout<<array[i]<<endl;
    }
    cout<<endl<<sum<<endl<<float(sum/12);
}