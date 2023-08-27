#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of array:";
    cin >> n;
    
    
    for (int i = 0; i < ((n - 1) / 2 + 1); i++)
    {
        cout << 2 * i + 1 << " ";
    }
    for (int i = n / 2; i > 0; i--)
    {
        cout << 2 * i << " ";
    }

}