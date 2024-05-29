#include <bits/stdc++.h>
using namespace std;
int speedUp=[](){
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
void selectionSort(vector<int> &arr, int l, int r)
{
    int min = 0, temp;
    for (int i = 0; i < r; ++i)
    {
        min=i;
        for (int j = i; j < r; ++j)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}
int main()
{
    vector<int> arr = {-7,-10,-4,-3,-20,-15};
    selectionSort(arr, 0, arr.size());
    for (auto &num : arr)
    {
        cout << num << " ";
    }
}