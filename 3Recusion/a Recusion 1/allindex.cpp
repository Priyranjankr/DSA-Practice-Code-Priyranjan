#include<iostream>
using namespace std;
int TotalOccu(int arr[],int size,int target,int Output[]){
    //  base case 
    if(size == 0){
        return 0;
    }

    //  recusive relation

    int ans = TotalOccu(arr, size - 1, target, Output);

    if(arr[size-1] == target){
        return ans + 1;
    }else{
        return ans;
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
    cout << "Enter the Number That find their total Number of Occurance: ";
    cin >> x;
    int *Output = new int[n];

    cout << "Total No of Occurance of " << x << " is: " << TotalOccu(arr, n, x, Output);

    delete[] Output;
    return 0;
}