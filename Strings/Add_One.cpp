#include <bits/stdc++.h>
using namespace std;
string sum(string num, int index)
{
    if (num[index] == '9')
    {
        if (index == 0)
        {
            string carry = "1";
            num[index] = '0';
            carry.append(num);
            num = carry;
        }
        else
        {
            num[index] = '0';
            string scopy = sum(num, index - 1);
            num = scopy;
        }
    }
    else
    {
        num[index] += 1;
    }
    return num;
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string num, result_num;
        cin >> num;
        result_num = sum(num, (num.length() - 1));
        cout << result_num<< endl;
    }
}
