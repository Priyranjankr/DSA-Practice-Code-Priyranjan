#include<iostream>
using namespace std;
int XtoN(int x,int n){
    //  base case 
    if(n == 0){
        return 1;
    }
    if(x == 1){
        return 1;
    }

    int smallOutput = XtoN(x, n - 1);

    return x * smallOutput;
}
int main(){
    int x, n;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of n: ";
    cin >> n;

    int Power = XtoN(x, n);

    cout << "The X to Power N is :" << Power;
    return 0;
}