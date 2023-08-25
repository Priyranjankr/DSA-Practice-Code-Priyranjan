#include<iostream>
using namespace std;

#include"TreeNode.h"
#include<queue>

TreeNode<int> *takeInputLevelWise()
{
    int rootData;
    cout << "Enter root data" << endl;
    cin >> rootData;

    TreeNode<int> *root = new TreeNode<int>(rootData);

    queue<TreeNode<int> *> pendingNodes;
    pendingNodes.push(root);

    while (pendingNodes.size() != 0)
    {
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter the number of children of " << front->data << endl;
        int numChild;
        cin >> numChild;

        for (int i = 0; i < numChild; i++)
        {
            int childData;
            cout << "Enter " << i + 1 << "th child of " << front->data << endl;
            cin >> childData;
            TreeNode<int> *child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}

//  find X -->> Not Solved

bool ContainX(TreeNode<int> *root, int X){
  

   if(root->data == X){
        return true;
   }
   for (int i = 0; i < root->children.size();i++){
        ContainX(root->children[i], X);
   }

   return false;
}

//  data greater than X
int CountGreaterX(TreeNode<int> *root, int X ,int &count)
{
  
   if(root->data > X){
        count++;
   }
     
   for (int i = 0; i < root->children.size();i++){
        CountGreaterX(root->children[i], X,count);
   }

   return count;
}


    int main()
{

    TreeNode<int> *root = takeInputLevelWise();

    int X = 3;
    int count = 0;
    cout << "Number of Node Greater than X: " <<CountGreaterX(root,X,count) <<endl;

    bool ans = ContainX(root, X);
    cout << "X are present in tree or Not: "<<ans;
   
    return 0;
}
