#include <iostream>
using namespace std;
int power(int n)
{
    //  Base case
    if (n == 0)
    {
        return 1;
    }

    //  recusive relation
    int ans = 2 * power(n - 1);

    return ans;
}
int main()
{
    int n;
    cin >> n;

    //    2 ka power

   cout<< "Power of 2 is: "<< power(n);
}