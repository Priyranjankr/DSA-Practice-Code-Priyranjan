#include<iostream>
#include<climits>
using namespace std;
void PrintArray(int arr[],int size){
    for (int i = 0; i < size;i++){
        cout << arr[i] << " ";
    }
}
void SelectionSort2(int arr[],int size){
    //   n-1 round
    for(int i= 0;i < size-1;i++){
   //  find minimum element
        cout << "Array after " << i << "th Round: ";
           PrintArray(arr, size);
           cout << endl;
           int min = arr[i], minIndex = i;

           for (int j = i; j < size; j++)
           {
               if (arr[j] < min)
               {
                   min = arr[j];
                   minIndex = j;
               }
    }

    // swap
    int temp = arr[i];
    arr[i] = arr[minIndex];
    arr[minIndex] = temp;
    }


}

//  using recusion
void SelectionSort1(int arr[],int size){
   //  base case
    cout << "Array after Every Round: ";
    PrintArray(arr, size);
    cout << endl;
    if (size == 0)
    {
    return;
   }     
    //  find minimum elemen
    
    int min = arr[0], minIndex = 0;

    for (int i = 0; i < size;i++){
        if(arr[i]<min){
            min = arr[i];
            minIndex = i;
        }
    }

    // swap
    int temp = arr[0];
    arr[0] = arr[minIndex];
    arr[minIndex] = temp;

    SelectionSort1(arr + 1, size - 1);
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

    SelectionSort1(arr, n);
    cout << "Sorted array using SelectionSort1 is: ";
    for (int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
    cout << endl
         << endl;
    int arr1[1000];

    cout << "Enter the element of Arr1: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    SelectionSort2(arr1, n);
    cout << "Sorted array using SelectionSort2 is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
        return 0;
}