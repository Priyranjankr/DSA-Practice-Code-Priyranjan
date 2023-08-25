#include <iostream>
using namespace std;
#include "Node.cpp"
Node *takeInput()
{
    cout << "In Input Function: " << endl;
    int data;
    cin >> data;
    Node *head = NULL; 
    //  optimasized
    Node *tail = NULL;
    //  temparory method -1 data nhi daal payege
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }else{
            tail-> next = newNode;
            tail = tail -> next;
            // Or
            // tail = newNode;
        }

        /*
        else
        {

            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }

        */
        cin >> data;
    }
    return head;
}
void Print(Node *head)
{
    cout << "In Print Function: " << endl;
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

// int main()
// {
//     // Node *head = takeInput();

//     // Print(head);
//     return 0;
// }