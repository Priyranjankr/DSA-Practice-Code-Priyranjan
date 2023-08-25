#include<iostream>
using namespace std;
int fibo(int n){
    // base case
    if(n == 0){
        
        return 0;
    }
        if( n == 1){
        return 1;
        }

        // recusive relation
        int ans = fibo(n - 1) + fibo(n - 2);

}

int main(){

    int n;
    cout << "Enter the number of term in Fibonacci Series:";
    cin >> n;
   cout<<"the nth Number in Fibonacci is:" << fibo(n);


   return 0;
}