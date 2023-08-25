#include<iostream>
using namespace std;

int main(){
    int a[] = {1, 2, 3, 4};

    char c[] = "abcd";

    cout << a << endl;

    cout << c << endl;
    char c1 = 'a';
    char *pc = &c1;
    cout << c1 << endl;
    cout << pc << endl;
      
    return 0;
}