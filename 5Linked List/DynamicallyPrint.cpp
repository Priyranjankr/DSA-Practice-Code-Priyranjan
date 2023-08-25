#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        int *next;

        // constructor
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
};
void Print(Node *head)
{
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
}
int main(){

        Node *n1 = new Node(10);

        Node *head = n1;

        Node *n2 = new Node(20);
        Node *n3 = new Node(30);
        Node *n4 = new Node(40);
        Node *n5 = new Node(50);



        return 0;
}