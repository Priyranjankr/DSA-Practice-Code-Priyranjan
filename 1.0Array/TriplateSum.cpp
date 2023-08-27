#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in the array" << endl;

    cin >> n;
    int a[n];
    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int x;
    cout << "Enter the Triple Sum : " << endl;
    cin >> x;

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (a[i] + a[j] + a[k] == x)
                {
                    count++;
                }
            }
        }
    }

    cout <<"Number of Triple is:" << count << endl;
    return 0;
}