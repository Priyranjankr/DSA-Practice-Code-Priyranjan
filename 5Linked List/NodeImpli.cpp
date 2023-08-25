#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
         next = NULL;
    };
};
int main(){

    Node Node1(100);
    cout << Node1.data;
    Node n2(45);
    
    return 0;
}