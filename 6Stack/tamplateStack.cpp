#include<iostream>
#include "Pair.cpp"
using namespace std;

int main(){

    pair<int> p1;

    p1.setX(10);
    p1.setY(20);

    cout << p1.getX() << " " << p1.getY() << endl;

    pair<double> p;

    p.setX(23.43);
    p.setY(43.23);

    cout << p.getX() << " " << p.getY() << endl;

    return 0;
}