#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    bool isAnagram(string a, string b){
        if(a.length()!=b.length())
        {
            return false;
        }
        set<char> word;
        for(auto& ch: a)
        {
            word.insert(ch);
            cout<<ch<<"\t"<<word.size()<<endl;
        }
        int size=word.size();
        cout<<"Size:\t"<<size<<endl;
        for(auto& ch: b)
        {
            word.insert(ch);
            cout<<ch<<"\t"<<word.size()<<endl;
            if(size!=word.size())
            {
                cout<<size<<"\t"<<word.size()<<endl;
                return false;
            }
        }
        return true;
    }

};
int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}