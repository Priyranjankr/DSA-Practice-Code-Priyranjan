#include<iostream>
using namespace std;
void Saydigits(int n,string arr[]){

  // base case 
  if(n == 0)
      return;

    // Processing --> digit nikalo

  int digit = n % 10;
  n = n / 10;

  // recusive call
  Saydigits(n, arr);

  cout << arr[digit] << " ";
}
int main(){
    string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    int n;
    cin >> n;

    Saydigits(n, arr);
    return 0;
}