#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, x;
    cin >> t;
    while (t--)
    {
        string match_results;
        unordered_map<string, pair<int,int>> Player;
        cin >> x;
        int total_pizepool = 100 * x;
        cin.ignore();
        getline(cin, match_results);
        Player.emplace("Carlsen", make_pair(0,0));
        Player.emplace("Chef", make_pair(0,0));
        for (int i = 0; i < 14; i++)
        {
            if (match_results[i] == 'C')
            {
                Player["Carlsen"].first += 2;
            }
            if (match_results[i] == 'N')
            {
                Player["Chef"].first += 2;
            }
            if (match_results[i] == 'D')
            {
                Player["Carlsen"].first++;
                Player["Chef"].first++;
            }
        }
        if(Player["Carlsen"].first>Player["Chef"].first)
        {
            Player["Carlsen"].second=(total_pizepool/100)*60;
            // Player["Chef"].second=(total_pizepool/100)*40;
        }
        if(Player["Carlsen"].first<Player["Chef"].first)
        {
            Player["Carlsen"].second=(total_pizepool/100)*40;
            // Player["Chef"].second=(total_pizepool/100)*60;
        }
        if(Player["Carlsen"].first==Player["Chef"].first)
        {
            Player["Carlsen"].second=(total_pizepool/100)*55;
            // Player["Chef"].second=(total_pizepool/100)*45;
        }
        cout<<Player["Carlsen"].second<<endl;
    }
}
