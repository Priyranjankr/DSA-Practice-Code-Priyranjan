#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int target){
    int s = 0;
    int e = size - 1;

    while(s <= e){
        int mid = s + (e - s) / 2;

        if(arr[mid] == target){
            return mid;

        }else if(target < arr[mid]){
            //  left me hoga
            e = mid - 1;
        }else{
            //  right me hoga
            s = mid + 1;
        }
    }
    return -1;
}
int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[1000];

    cout << "Enter the element of Array: ";

    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    int x;
    cout << "Enter the value of x to find in array: ";
    cin >> x;

    cout << "Element present at index : " << binarySearch(arr, n, x);

    return 0;
}