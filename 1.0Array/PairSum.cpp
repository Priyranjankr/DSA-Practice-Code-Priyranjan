#include <bits/stdc++.h>

using namespace std;
// 9
// 1 3 6 2 5 4 3 2 4
// 7

int main()
{
    int n;
    cout << "Enter the number of elements in the array" << endl;

    cin >> n;
    int a[100];
    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cout << "Enter the pair Sum: ";
    cin >> x;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == x)
            {
                count++;
            }
        }
    }
    cout<<"Number of Pair Sum is: " << count << endl;
    return 0;
}