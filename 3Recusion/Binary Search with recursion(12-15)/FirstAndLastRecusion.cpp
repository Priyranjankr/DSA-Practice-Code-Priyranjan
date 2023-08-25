#include<iostream>
using namespace std;
int FirstOccurance(int *arr,int start,int end,int key,int ans){

    //base case
    if(start > end){
        return ans;
    }

    int mid = start + (end - start) / 2;

    if(arr[mid] == key){
         ans = mid;
        /*store kara lo
                       aur left me jao left most nikalne ke liye*/
        end = mid - 1;
        // call recusion
        return FirstOccurance(arr, start, end, key,ans);
    }else if(key > arr[mid]){
        // right me jao
        start = mid + 1;
        // recusion call kr lo
        return FirstOccurance(arr, start, end, key,ans);
    }else if(key <arr[mid]){
        // left me jao
        end = mid - 1;
        // recusion call kr lo
         return FirstOccurance(arr, start, end, key, ans);
    }
    return ans;
}
int LastOccurance(int *arr,int start,int end,int key,int ans){

    // base Case
    if(start > end){
        return ans;
    }

    int mid = start + (end - start) / 2;

    if(arr[mid] == key){
        ans = mid;
        /*store kara lo
            aur right me jao right most ke liye
            */
        start = mid + 1;
        // recusion call kr lo
        return LastOccurance(arr, start, end, key, ans);
    }else if(key > arr[mid]){
        // right me jao
        start = mid + 1;
        //recusion call kr lo
        return LastOccurance(arr, start, end, key, ans);
    }else if(key < arr[mid]){
        // left me jao
        end = mid - 1;
        // recursion call kr lo
        return LastOccurance(arr, start, end, key, ans);
    }
    return ans;
}
int main(){
    int arr[10] = {1, 2, 3, 3,3,3,3,4,5,6,};

    int size = 10;
    int key = 3;
    int ans = -1;
    cout << "Fist Occurance at Index: " << FirstOccurance(arr,0,size-1, key,ans) << endl;
    cout << "Last Occurance at Index: " << LastOccurance(arr,0, size-1, key,ans) << endl;
    return 0;
}