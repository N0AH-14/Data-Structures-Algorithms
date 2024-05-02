#include "bits/stdc++.h"
using namespace std;
class Sorting
{
    public:
    void swap (vector<int>& array, int index1, int index2)
    {
        int temp=array[index1];
        array[index1]=array[index2];
        array[index2]=temp;
    }
    vector<int>insertionSort (vector<int> array)
    {
        cout<<"Insertion Sort"<<endl;
        for(int i=0;i<array.size()-1;i++)
        {
            int min=i;
            for(int j=i;j<array.size();j++)
            {
                if(array[min]>array[j]) min=j;
            }
            swap(array,i,min);
        }
        return array;
    }
};
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        Sorting sort;
        cin>>n;
        vector<int> array(n,0);
        cin.ignore();
        for(auto& element: array)
        {
            cin>>element;
        }
        cout<<"Given Array"<<endl;
        for(auto& element: array)
        {
            cout<<element<<" ";
        }
        cout<<endl;
        vector<int> iSArray=sort.insertionSort(array);
        for(auto& val:iSArray)
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }
}