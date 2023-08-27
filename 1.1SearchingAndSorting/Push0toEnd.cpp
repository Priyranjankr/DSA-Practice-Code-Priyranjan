#include <bits/stdc++.h>

using namespace std;

// 7
// 2 0 0 1 3 0 0

int main()
{
    int n;
    cout << "Enter the number of elements in the array:" << endl;
    cin >> n;

    int a[n];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int i = 0;
    int j = 0;
    while (i < n && j < n)
    {
        if (a[i] != 0 && a[j] != 0)
        {
            i++;
            j++;
        }
        else if (a[i] == 0 && a[j] != 0)
        {
            swap(a[i], a[j]);
            i++;
        }
        else if (a[j] == 0)
        {

            j++;
        }
    }

    cout << "The sorted array is:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}