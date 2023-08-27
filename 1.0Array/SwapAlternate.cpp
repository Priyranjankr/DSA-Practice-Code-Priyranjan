#include<iostream>
using namespace std;
void swapAlternate(int arr[],int size){

    for (int i = 0; i < size;i+=2){
        if(i+1<size){
            swap(arr[i], arr[i + 1]);
        }
    }
}

void PrintArray(int arr[],int size){
    for (int i = 0; i < size;i++){
        cout << arr[i] << " ";
    }
    cout << endl << endl;
}
int main(){
    int even[8] = {2, 4, 34, 66, 7, 89, 54, 9};
    int odd[7] = {32, 4, 5, 67, 78, 98, 32};

    swapAlternate(even, 8);
    PrintArray(even, 8);

    swapAlternate(odd, 7);
    PrintArray(odd, 7);

    return 0;
}