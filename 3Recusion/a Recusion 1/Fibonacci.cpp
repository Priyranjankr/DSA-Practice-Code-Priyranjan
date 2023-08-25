#include <iostream>
using namespace std;
int PrintFibo(int n)
{

    //  base case
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    int nextNum= PrintFibo(n - 1) + PrintFibo(n - 2);
    return nextNum;
}
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int ans = PrintFibo(i);
        cout << ans << " ";
    }

    return 0;
}