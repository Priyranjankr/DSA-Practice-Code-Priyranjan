#include<iostream>
using namespace std;
int sum = 0;
int sumN(int n){

    if(n==0)
        return sum;
    sum = sum + n;

    sumN(n - 1);

    // return sum;
}
int main(){
    int n;
    cin >> n;

    int sumn = sumN(n);
    cout << "The sum of N number is: "<<sumn;
   

    return 0;
}