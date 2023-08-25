#include<bits/stdc++.h>
using namespace std;

template<typename T>

class BinaryTreeNode{

    public:
        T data;
        BinaryTreeNode *left;
        BinaryTreeNode *right;

        //  constructor

        BinaryTreeNode(T data){
            this->data = data;
            left = NULL;
            right = NULL;
        }

        //  distructor

        ~BinaryTreeNode(){
            delete left;
            delete right;

        }
};

BinaryTreeNode<int>* takeInput(){

        int rootData;
        cout << "Enter the root data " << endl;
        cin >> rootData;

        if(rootData == -1){
            return NULL;
        }

        BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
        queue<BinaryTreeNode<int> *> pendingNode;

        pendingNode.push(root);

        while(pendingNode.size() != 0){

            BinaryTreeNode<int> *front = pendingNode.front();
            pendingNode.pop();

            int leftChild;
            cout << "Enter the left child of " << front->data << endl;
            cin >> leftChild;
            if(leftChild != -1){
                BinaryTreeNode<int> *child = new BinaryTreeNode<int>(leftChild);
                front->left = child;
                pendingNode.push(child);
            }

            int rightChild;
            cout << "Enter the right child of " << front->data << endl;
            cin >> rightChild;

            if(rightChild != -1){
                BinaryTreeNode<int> *child = new BinaryTreeNode<int>(rightChild);
                front->right = child;
                pendingNode.push(child);
            }
        }

        return root;
}

void PreOrderTravels(BinaryTreeNode<int>*root){
         if(root == NULL){
            return;
         }

         cout << root->data << " ";

         PreOrderTravels(root->left);
         PreOrderTravels(root->right);
}

// 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
int main()
{
        BinaryTreeNode<int> *root = takeInput();

        PreOrderTravels(root);

        delete root;

        return 0;
}