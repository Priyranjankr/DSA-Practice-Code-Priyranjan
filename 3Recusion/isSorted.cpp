#include<iostream>
using namespace std;
bool isSorted(int arr[],int n){

    // base case 
    if(n == 0 || n == 1)
        return true;

        // processing
        if(arr[0] > arr[1]){
        return false;
        }else{
        int remainingPart = isSorted(arr + 1, n - 1);
        return remainingPart;
        }
}
int main(){

    int arr[7] = {2, 5, 7, 9, 342, 546, 876};

    bool ans = isSorted(arr, 7);

    if(ans){
        cout << "Array is Sorted";
    }else{
        cout << "Array is not Sorted";
    }
    return 0;
}