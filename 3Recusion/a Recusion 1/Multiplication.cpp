#include<iostream>
using namespace std;
int Multiple(int m,int n){
    //   base case 
    if(n == 0)
        return 0;

    int ans = Multiple(m, n - 1);

    return ans + m;
}
int main(){
    int m;
    cout << "Enter the first Number:";
    cin >> m;

    int n;
    cout << "Enter trhe second Number: ";
    cin >> n;

    cout<<"The multiplication of "<<m <<" and "<<n<<" is: "<<Multiple(m,n);
    return 0;
}