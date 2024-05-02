#include "bits/stdc++.h"
using namespace std;
class Sorting
{
public:
    void swap(vector<int> &array, int index1, int index2)
    {
        int temp = array[index1];
        array[index1] = array[index2];
        array[index2] = temp;
    }
    vector<int> selectionSort(vector<int> array)
    {
        cout << "Insertion Sort" << endl;
        for (int i = 0; i < array.size() - 1; i++)
        {
            int min = i;                           // Make current element as Minimum
            for (int j = i; j < array.size(); j++) // Find Minimum
            {
                if (array[min] > array[j])
                    min = j;
            }
            swap(array, i, min); // Swap Minimum with current element
        }
        return array;
    }
    vector<int> bubbleSort(vector<int> array)
    {
        cout << "Bubble Sort" << endl;
        for (int i = array.size() - 1; i > 0; i--)
        {
            int didSwap = 0;
            for (int j = 0; j < i; j++)
            {
                if (array[j] > array[j + 1])
                {
                    swap(array, j, j + 1);
                    didSwap = 1;
                }
            }
            if (didSwap == 0)
                break;
        }
        return array;
    }
    vector<int> insertionSort(vector<int> array)
    {
        cout << "Insertion Sort" << endl;
        for (int i = 0; i < array.size(); i++)
        {
            for (int j = i; j > 0 && array[j - 1] > array[j]; j--)
            {
                swap(array, j, j - 1);
            }
        }
        return array;
    }
    void merge(vector<int> &array, int low, int mid, int high)
    {
        vector<int> temp;
        int left = low, right = mid + 1;
        while (left <= mid && right <= high) // sorting between two arrays
        {
            if (array[left] <= array[right])
            {
                temp.emplace_back(array[left]);
                left++;
            }
            else
            {
                temp.emplace_back(array[right]);
                right++;
            }
        }
        while (left <= mid) // Right array ended
        {
            temp.emplace_back(array[left]);
            left++;
        }
        while (right <= high) // Left array ended
        {
            temp.emplace_back(array[right]);
            right++;
        }
        for (int i = low; i <= high; i++)
        {
            array[i] = temp[i - low];
        }
    }
    void mergeSort(vector<int> &array, int low, int high)
    {
        if (low == high)
            return;
        int mid = (low + high) / 2;
        mergeSort(array, low, mid);      // Left
        mergeSort(array, mid + 1, high); // Right
        merge(array, low, mid, high);
    }
    void quickSort(vector<int> &array, int low, int high)
    {
        int pivot = low;
        for (int i = low+1; i <= high; i++)
        {
            for (int j = high; j > i; j--)
            {
                if (array[i] > array[pivot] && array[j] <= array[pivot])
                {
                    swap(array, i, j);
                }
            }
        }
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        Sorting sort;
        cin >> n;
        vector<int> array(n, 0);
        cin.ignore();
        for (auto &element : array)
        {
            cin >> element;
        }

        // vector<int> sSArray=sort.selectionSort(array);
        // for(auto& val:sSArray)
        // {
        //     cout<<val<<" ";
        // }
        // cout<<endl;

        // vector<int> bSArray=sort.bubbleSort(array);
        // for(auto& val:bSArray)
        // {
        //     cout<<val<<" ";
        // }
        // cout<<endl;

        // vector<int> iSSort=sort.insertionSort(array);
        // for(auto& value: iSSort)
        // {
        //     cout<<value<<" ";
        // }
        // cout<<endl;

        sort.mergeSort(array, 0, n - 1);
        for (auto &value : array)
        {
            cout << value << " ";
        }
        cout << endl;
    }
}