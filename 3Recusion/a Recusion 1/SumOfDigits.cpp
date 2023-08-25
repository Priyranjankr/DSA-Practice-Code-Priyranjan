#include<iostream>
using namespace std;
int DigitSum(int n){

    //  base case
    if(n == 0){
        return 0;
    }
    if(n < 10){
        return n;
    }

    int ans = n % 10 + DigitSum(n / 10);

    return ans;
}
int main(){
    int n;
    cout << "Enter the Number :";
    cin >> n;

    cout << "Sum of Digits is: " << DigitSum(n);

    return 0;
}