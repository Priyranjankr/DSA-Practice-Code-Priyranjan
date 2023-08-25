#include<iostream>
using namespace std;
int Sum(int arr[],int size){
    //  base case 
    if(size == 0){
        return 0;
    }
    if(size == 1){
        return arr[0];
    }
    //  recusive relation
   int sum = arr[0] + Sum(arr + 1, size - 1);
    return sum;
}
int main(){
    int arr[100];

    int n;
    cout << "Enter the size of an Array: ";
    cin >> n;
    cout << "Enter the element of array: ";
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }

    cout << "Sum of Array is: " << Sum(arr, n);
    return 0;
}