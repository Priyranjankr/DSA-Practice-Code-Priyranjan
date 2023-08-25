#include<iostream>
using namespace std;
int LastOccu(int arr[],int size,int x){
    // base case 
    if(size == 0)
        return -1;
//  recusive call
        int ans = LastOccu(arr + 1, size - 1, x);
   
        if(ans == -1){
         if(arr[0] == x){
             return 0;
         }else{
             return -1;
         }
        }else{
        return ans + 1;
        }
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
    int x;
    cout << "Enter the Number That find their last Occurance: ";
    cin >> x;

    cout << "The last Occurance of Number " << x << " is: " << LastOccu(arr, n, x);
    return 0;
}