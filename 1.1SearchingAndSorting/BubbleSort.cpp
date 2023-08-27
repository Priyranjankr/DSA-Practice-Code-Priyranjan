#include<iostream>
using namespace std;
void PrintArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
void BubbleSort1(int arr[],int size){
    //  size-1 round
    for (int i = 0; i < size -1 ;i++){
    
        for (int j = 0; j < size -i-1 ;j++){
            if (arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
        cout << "Array after " << i+1 << "th Round: ";
        PrintArray(arr, size);
        cout << endl;
    }
}


int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[1000];

    cout << "Enter the element of Array: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

        BubbleSort1(arr, n);
        cout << endl;
        cout << "Sorted array using Bubble sort is: ";
        PrintArray(arr,n);
   
    return 0;
}