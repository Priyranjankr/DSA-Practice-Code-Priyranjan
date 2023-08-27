
/*You are given an integer array/list(ARR) of size N. It contains only 0s, 1s and 2s. Write a solution to sort this array/list in a 'single scan'.
'Single Scan' refers to iterating over the array/list just once or to put it in other words, you will be visiting each element in the array/list just once.
*/
#include <bits/stdc++.h>
using namespace std;

void Print(int arr[], int n)
{

    cout << "Sorted Array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[1000];

    cout << "Enter the element of Array only 0 ,1 and 2: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int s = 0;
    int mid = 0;
    int e = n - 1;

    while (mid <= e)
    {
        if (arr[mid] == 0)
        {
            swap(arr[s], arr[mid]);
            s++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[e]);
            e--;
        }
    }
    // sort(arr,arr + n);
    Print(arr, n);
}