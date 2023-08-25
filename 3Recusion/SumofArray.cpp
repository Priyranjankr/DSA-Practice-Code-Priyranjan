#include<iostream>
using namespace std;
int sumIs(int arr[],int n){

    // base case 
    if(n == 0)
        return 0;
        if(n == 1)
        return arr[0];

    int ans = arr[0] + sumIs(arr + 1, n - 1);
    return ans;
}
int main(){

    int arr[100];
    int n;
    cin >> n;

    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }

    int sum = sumIs(arr, n);
    cout << "Sum is: "<< sum;
    return 0;
}