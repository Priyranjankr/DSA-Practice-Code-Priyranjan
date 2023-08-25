#include<iostream>
using namespace std;
void RevArray(int *arr,int s,int e){

    if(s > e ){
        return;
    }
    cout<<"Priy";
     RevArray(arr,s++,e--);
    swap(arr[s],arr[e]);
    

}
int main(){

    int arr[50];

    int n;
    cin >> n;

    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    
    int s = 0;
    RevArray(arr, s , n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}