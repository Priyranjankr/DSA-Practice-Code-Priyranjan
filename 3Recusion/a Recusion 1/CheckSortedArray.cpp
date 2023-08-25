#include<iostream>
using namespace std;
//  Alternate Option
bool IsSorted2(int arr[],int size){
    //  base case
    if (size == 0 || size == 1)
        return true;

//  pahle smaller output check kr lo 
    bool smallerIsSorted = IsSorted2(arr + 1, size - 1);

//  agar o pura sort nhi hua return false
    if(!smallerIsSorted){
        return false;
    }
    //  piche ka sorted h but pahle 2 element ko check kruga

    if(arr[0]>arr[1]){
        return false;
    }else{
        return true;
    }
}
bool IsSorted(int *arr,int size){
    //  base case
    if(size == 0 ||size==1)
        return true;

        if(arr[0]>arr[1]){
        return false;
        }
        bool SmallerSorted = IsSorted(arr + 1, size - 1);
        return SmallerSorted;
        // if(SmallerSorted){
        // return true;
        // }else
        // return false;
}
int main(){
    int arr[10];

    for (int i = 0; i < 10;i++){
        cin >> arr[i];
    }

    cout << "Array is Sorted or Not :" << IsSorted(arr, 10)<<endl;
    cout << "Array is Sorted or Not :" << IsSorted2(arr, 10) << endl;
    return 0;
}