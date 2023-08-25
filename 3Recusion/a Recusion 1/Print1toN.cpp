#include<iostream>
using namespace std;
void Print(int n){
    // base case 
    if(n == 0)
        return;

   //     
     Print(n - 1);
     cout << n << " ";
}
int main(){
    int n;
    cout << "Enter the number : ";
    cin >> n;

    Print(n);

    return 0;
}