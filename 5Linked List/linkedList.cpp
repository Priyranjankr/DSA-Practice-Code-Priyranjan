#include<iostream>
using namespace std;
#include"Node.cpp"

int main(){
 // statically 
    Node n1(5);

    Node *head = &n1;

    Node n2(10);
    n1.next = &n2;

    cout << n1.data << " " << n2.data << endl;
    cout << head->data << endl;

    // Dynamically list creating
    Node *n3 = new Node(20);
    
    Node *head = n3; // storing address of head

    Node *n4 = new Node(32);
    
    n3->next = n4;
    
    


    return 0;
    
}