#include<iostream>
using namespace std;
int FirstOccurance(int arr[],int size,int key){

    int start = 0;
    int end = size - 1;
    int ans = -1;
    while(start <= end){
        int mid = start + (end - start) / 2;

        if(arr[mid] == key){
            ans = mid; /*store kara lo 
                       aur left me jao left most nikalne ke liye*/
            end = mid - 1;
        }else if(key > arr[mid] ){
            // right me jao
            start = mid + 1;
        }else if(key < arr[mid]){
            // left me jao
            end = mid - 1;
        }
    }
    return ans;
}
int LastOccurance(int *arr,int size,int key){
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while(start <= end){
        int mid = start + (end - start) / 2;
        if(arr[mid] == key){
            ans = mid;
            /*store kara lo
            aur right me jao right most ke liye
            */
            start = mid + 1;
        }else if(key > arr[mid]){
            // right me jao
            start = mid + 1;

        }else if(key < arr[mid]){
            // left me jao
            end = mid - 1;

        }
    }
    return ans;
}
int main()
{
    int arr[5] = {1, 2, 3, 3, 4};

    int size = 5;
    int key = 3;
    cout << "Fist Occurance at Index: " << FirstOccurance(arr, size,key) << endl;
    cout<< "Last Occurance at Index: " << LastOccurance(arr, size,key) << endl;
    return 0;
}