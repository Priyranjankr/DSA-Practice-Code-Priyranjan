#include <iostream>
#include "BinaryTree.h"
#include <queue>
using namespace std;

void PrintTree(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << ": ";
    if (root->left != NULL)
    {
        cout << "L" << root->left->data << " ";
    }
    if (root->right != NULL)
    {
        cout << "R" << root->right->data << " ";
    }

    cout << endl;
    PrintTree(root->left);
    PrintTree(root->right);
}
//  Printing LevelWise  -->> NOt solved
void PrintLevelWise(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }

    queue <int> pendingNodes;
    pendingNodes.push(root->data);

    while(pendingNodes.size() != 0){
        int front = pendingNodes.front();
        cout << front << ": ";
        pendingNodes.pop();

        if (root->left != NULL)
        {
            cout << "L" << root->left->data << " ";

            pendingNodes.push(root->left->data);
        }
        if (root->right != NULL)
        {
            cout << "R" << root->right->data << " ";
            pendingNodes.push(root->right->data);
        }
        cout << endl;
    }
}

BinaryTreeNode<int> *takeInput()
{

    int rootData;
    cout << "Enter Data: ";
    cin >> rootData;
    //     -1 reserved for NULL
    if (rootData == -1)
    {
        return NULL;
    }

    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    BinaryTreeNode<int> *leftChild = takeInput();
    BinaryTreeNode<int> *rightChild = takeInput();

    root->left = leftChild;
    root->right = rightChild;

    return root;
}

//  take input levelwise --> use queue

BinaryTreeNode<int> *takeInputLevelWise()
{
    int rootData;
    cout << "Enter root Data: " << endl;
    cin >> rootData;
    //     -1 reserved for NULL
    if (rootData == -1)
    {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int> *> pendingNodes;
    pendingNodes.push(root);

    while (pendingNodes.size() != 0)
    {
        BinaryTreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();

        cout << "Enter the left child of " << front->data << endl;
        int leftChildData;
        cin >> leftChildData;

        if (leftChildData != -1)
        {
            BinaryTreeNode<int> *child = new BinaryTreeNode<int>(leftChildData);
            front->left = child;
            pendingNodes.push(child);
        }

        cout << "Enter the right child of " << front->data << endl;
        int rightChildData;
        cin >> rightChildData;

        if (rightChildData != -1)
        {
            BinaryTreeNode<int> *child = new BinaryTreeNode<int>(rightChildData);
            front->right = child;
            pendingNodes.push(child);
        }
    }

    return root;
}  


    int main()
{

    /*
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(1);
    BinaryTreeNode<int> *node1 = new BinaryTreeNode<int>(2);
    BinaryTreeNode<int> *node2 = new BinaryTreeNode<int>(3);

    root->left = node1;
    root->right = node2;
   */

    // BinaryTreeNode<int> *root = takeInput();
    BinaryTreeNode<int> *root = takeInputLevelWise();
  
    // PrintLevelWise(root);  -->> Not solved

    PrintTree(root);

    delete root;

    return 0;
}