#include<iostream>
using namespace std;
void PrintArray(int arr[], int n){
    cout << "Size of Current Array is: " << n << endl;
    for (int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
bool LinearSearch(int arr[],int size,int k){

    PrintArray(arr, size);
    // base case 
    if(size == 0){
        return false; // pura travel krne par nhi mila
    }

    if(arr[0] == k){
        return true;
    }else{
        bool remainingPart = LinearSearch(arr + 1, size - 1, k);
        return remainingPart;
    }
}
int main(){

    int arr[5] = {3, 5, 1, 2, 6};

    int size = 5;
    int key;
    cin >> key;

    bool ans = LinearSearch(arr, size, key);

    if(ans){
        cout << "Found";
    }else
        cout << "Not Found";

    return 0;
}