#include<iostream>
using namespace std;

int F1stOccurance(int arr[],int size,int x){

      // base case
      if(size == 0)
          return -1;

          if(arr[0] == x)
          return 0;

          int ans = F1stOccurance(arr + 1, size - 1, x);

          if(ans == -1){
          return -1;
          }
          else{
          return ans + 1;
          }
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
    
    int x;
    cout<<"Enter the Number That find find Occurance: ";
    cin>>x;

    cout << "The 1st Occurance of Number " << x << " is: " << F1stOccurance(arr, n, x);

    return 0;
}