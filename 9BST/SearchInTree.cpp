#include <bits/stdc++.h>

using namespace std;
template<typename T>

class BST{
    public:
        T data;
        BST *left;
        BST *right;

        //  constructor
        BST(T data){
            this->data = data;
            left = NULL;
            right = NULL;
        }
        //  distructor

        ~BST(){
            delete left;
            delete right;
        }
};
BST<int>* takeInput(){

        int rootData;
        cout << "Enter the root data " << endl;
        cin >> rootData;

        if(rootData == -1){
            return NULL;
        }

        BST<int> *root = new BST<int>(rootData);

        queue<BST<int> *> pendingNode;
        pendingNode.push(root);

        while(pendingNode.size() != 0){
            BST<int> *front = pendingNode.front();
            pendingNode.pop();

            int leftData;
            cout << "Enter the left of " << front->data << endl;
            cin >> leftData;

            if(leftData != -1){
                BST<int> *child = new BST<int>(leftData);
                front->left = child;
                pendingNode.push(child);
            }

            int rightData;
            cout << "Enter the right of " << front->data << endl;
            cin >> rightData;
            if(rightData != -1){
                BST<int> *child = new BST<int>(rightData);
                front->right = child;
                pendingNode.push(child);
            }
        }

        return root;
}

bool SearchBST(BST<int> *root,int k){
    if(root == NULL){
            return false;
    }

    if(root->data == k){
            return true;
    }

    if (root->data > k && root->left != NULL)
    {
            SearchBST(root->left, k);
    }
    if (root->data < k && root->right != NULL)
    {
            SearchBST(root->right, k);
    }

  
}
//  5 3 7 2 4 6 8 -1 -1 -1 -1 -1 -1 -1 -1

    int main()
{

        BST<int> *root = takeInput();

        int k;
        cout << "Enter the search k : " << endl;
        cin >> k;

        bool ans = SearchBST(root, k);
        cout << "k is Present or Not in BST: " << ans;
        delete root;
        return 0;
}