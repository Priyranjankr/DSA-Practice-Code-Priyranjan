#include<iostream>
using namespace std;
int Tzero(int n){
    // base case

    if(n == 0)
        return 1;
        if (n > 0 && n < 10)
        return 0;
    
    int ans = Tzero(n / 10);
    
    if(n % 10 == 0){
        return ans + 1;
    }else
    return ans;
}
int main(){
    int n;
    cout << "Enter the a Positive number:";
    cin >> n;

    cout << "Total Number of Zero in Given Number is: " << Tzero(n);
    return 0;
}