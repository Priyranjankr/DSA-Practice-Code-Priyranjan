#include<iostream>
using namespace std;
int factorialN(int n){
    // base case
    if(n==0)
        return 1;

      // Recusive relation  
    int fact = n * factorialN(n - 1);

    return fact;
}
int main(){
    int n;
    cin >> n;

    int factorial = factorialN(n);

    cout << "The factorial of N number is: " << factorial << endl;
    return 0;
}