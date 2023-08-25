#include <iostream>
using namespace std;
bool binarySearch(int arr[], int start, int end, int key)
{

    // base case

    // element not found
    if (start > end)
        return false;
    int mid = start + (end - start) / 2;
    // element found
    if (arr[mid] == key)
        return true;

    if (arr[mid] < key)
    {
        return binarySearch(arr, mid + 1, end, key);
    }
    else
    {
        return binarySearch(arr, start, mid - 1, key);
    }
}
int main()
{
    int arr[6] = {2, 4, 6, 10, 14, 16};

    int size = 6;
    int key;
    cin >> key;

    bool ans = binarySearch(arr, 0, size - 1, key);

    if (ans)
    {
        cout << "Found";
    }
    else
        cout << "Not Found";
    return 0;
}