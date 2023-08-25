#include <iostream>
using namespace std;
void printName(int n)
{

    if (n == 0)
        return;
    cout << ": Priyranjan" << endl;

    printName(n - 1);
}
int main()
{

    int n;
    cout << "Enter how many times Name Print :";
    cin >> n;

    printName(n);
    return 0;
}