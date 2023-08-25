#include<iostream>
using namespace std;
double GeoSum(int n,int k){
    //    base case 
    if(k == 0){
        return 1;
    }
    if(k == 1)
        return n;

    double SmallSum =  + GeoSum(n, k - 1);

    return SmallSum;
}
int main(){
    int n;
    cout << "Enter the base number : ";
    cin >> n;
    

    int k;
    cout << "Enter the number of term in geometric series sarting with 0 is :";
    cin >> k;

    cout << "The geometric sum is: " << GeoSum(n, k);

    return 0;
}