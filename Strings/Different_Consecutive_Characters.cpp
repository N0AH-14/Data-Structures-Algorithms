#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,count=0,temp;
	string S;
	cin>>t;
    temp=t;
	while(t--)
	{
	    cin>>n>>S;
	    for(int i=0;i<n;i++)
	    if(S[i]==S[i+1])
        {
            if(S[i]=='0')
            {
                S.insert(i+1,"1");
                count++;
                n++;
            }
            else
            {
                S.insert(i+1,"0");
                count++;
                n++;
            }
        }
        cout<<count<<endl;
        S.clear();
        count=0;
	}
}
