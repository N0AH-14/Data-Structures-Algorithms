//codechef.com/practice/course/strings/STRINGS/problems/BLOBBYVOLLEY
#include "bits/stdc++.h"
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,a=0,b=0,flag=0;
	    cin>>n;
	    string s;
	    cin>>s;
	    if(s[0]=='A')a++;
	    else if(s[0]=='B')flag=1;
	    for(int i=1;i<n;i++){
	        if(s[i]=='A'&&flag==0){a++;flag=0;}
	        else if(s[i]=='B'&&flag==1){flag=1;b++;}
	        else if(s[i]=='A'&&flag==1)flag=0;
	        else if(s[i]=='B'&&flag==0)flag=1;
	    }
	    cout<<a<<' '<<b<<endl;
	}
	return 0;
}