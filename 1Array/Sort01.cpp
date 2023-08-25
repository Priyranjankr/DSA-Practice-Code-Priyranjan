#include <iostream>
using namespace std;

void sort01(int arr[], int n)
{

    int i  = 0 ;
    int j  = n - 1;
      
      while(i < j){
        while(i < j && arr[i] == 0) i++;
        while(i < j && arr[j] == 1) j--;
        if(i < j) swap(arr[i], arr[j]);
      }
}

void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    
    
        int n, arr[100];
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort01(arr, n);

        printArray(arr, n);
    

    return 0;
}