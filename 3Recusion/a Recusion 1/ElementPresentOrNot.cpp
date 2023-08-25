#include<iostream>
using namespace std;
bool IsPresent(int arr[],int size,int target){
    //  base case 
    if(size == 1){
        if(arr[0] == target){
            return true;
        }else{
        return false;
        }
    }
    

    return false || IsPresent(arr + 1, size - 1, target);
}
int main(){
    int arr[100];

    int n;
    cout << "Enter the size of an Array: ";
    cin >> n;
    cout << "Enter the element of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the target element:";
    cin >> key;
    cout << "The element is Present in Array or Not: " << IsPresent(arr, n, key);
    return 0;
}