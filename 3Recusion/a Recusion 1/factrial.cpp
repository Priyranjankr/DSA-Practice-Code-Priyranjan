#include <iostream>
using namespace std;
int Factorial(int n)
{

    //  base case
    if (n == 0)
        return 1;

    int smallOutput = Factorial(n - 1);

    return n * smallOutput;
}
int main()
{
    int n;
    cout << "Enter the Number: ";
    cin >> n;

    int Fact = Factorial(n);

    cout << "The Factorial of n is : "<<Fact;
    return 0;
}