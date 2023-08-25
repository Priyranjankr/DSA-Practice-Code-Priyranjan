#include<iostream>
using namespace std;

int main(){
    // size should be odd
    int arr[7] = {1, 3, 4, 5, 3, 4,1};

    int ans = 0;
    for (int i = 0; i < 7;i++){
        ans = ans ^ arr[i];
    }

    cout << "unique element is: " << ans;
    return 0;
}