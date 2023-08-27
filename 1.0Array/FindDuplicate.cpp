#include <bits/stdc++.h>

using namespace std;

// 9
// 0 7 2 5 4 7 1 3 6 --->> duplicate elements is 7;

int helper(int arr[], int n)
{
    vector<int> ans(n - 1, 0);

    for (int i = 0; i < n; i++)
    {
        ans[arr[i]]++;
        if (ans[arr[i]] == 2)
        {
            return arr[i];
            break;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;

    int a[n];
    cout << " Enter the number of elements in the array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = helper(a, n);

    cout << "The number of duplicate elements is " << ans << endl;

    return 0;
}