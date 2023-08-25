#include<iostream>
using namespace std;
int Countdigit(int n){
    //  base case
    int count = 1;
    if(n >= 0 && n < 10){
        return 1;

    }
    count = count + Countdigit(n / 10);

    return count;
}
int main(){
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int ans = Countdigit(n);

    cout << "Number of digits in n :" << ans;
    return 0;
}