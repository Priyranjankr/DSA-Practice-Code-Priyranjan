#include <iostream>
#include<queue>
#include "TreeNode.h"

using namespace std;

TreeNode<int>* takeInputLevelWise(){
    int rootData;
    cout << "Enter root data" << endl;
    cin >> rootData;

    TreeNode<int> *root = new TreeNode<int>(rootData);

    queue<TreeNode<int> *> pendingNodes;    
    pendingNodes.push(root);

    while(pendingNodes.size() != 0){
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter the number of children of " << front->data << endl;
        int numChild;
        cin >> numChild;

        for (int i = 0; i < numChild;i++){
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

TreeNode<int> *takeInput()
{
    int rootData;
    cout << "Enter the data " << endl;
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);

    int n;
    cout << "Enter the number of children of " << rootData << endl;
    cin >> n;
    for (int i = 0; i < n;i++){
      TreeNode<int>*child =  takeInput();
      root->children.push_back(child);
    }
    return root;
}

void PrintTree(TreeNode<int> *root)
{

    //  edge case not base case
    if (root == NULL)
    {
        return;
    }
    cout << root->data << ": ";

    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << ",";
    }

    cout << endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        PrintTree(root->children[i]);
    }
}
//  count node
int numNode(TreeNode<int> *root){
  
   //  edge case
   if(root == NULL){
        return 0;
   }
    int ans=1;

    for(int i=0;i<root->children.size();i++){
        ans += numNode(root->children[i]);
    }
    return ans;
}
//  sum of all nodes
int SumNode(TreeNode<int> *root){
    int sum = root->data;
    for (int i = 0; i < root->children.size();i++){
        sum += SumNode(root->children[i]);
    }
    return sum;
}
//  Max data in tree
int MaxData(TreeNode<int> *root){
    int maxi = root->data;

    for (int i = 0; i < root->children.size();i++){

        maxi = max(maxi, MaxData(root->children[i]));
    }
    return maxi;
} 
//  height of tree -->> not give correct answer Solve again ---->>>
int Height(TreeNode<int> *root){
        if(root == NULL){
        return 0;
        }
        int hei = 1;
        for (int i = 0; i < root->children.size();i++){
          hei =  Height(root->children[i]);
        }
        return hei+1;
} 
//  depth of tree

void PrintAllatLevelK(TreeNode<int> *root,int k){
    //    edge case 
    if(root == NULL){
          return;
    }

    if(k == 0){
          cout << root->data << " ";
          return;
    }

    for (int i = 0; i < root->children.size();i++){
          PrintAllatLevelK(root->children[i], k - 1);
    }
}

//  No of leaf Node

int LeafOfNode(TreeNode<int> *root)
{
    if(root->children.size() == 0){
          return 1;
    }
    int ans = 0;
    for (int i = 0; i < root->children.size();i++){
          ans += LeafOfNode(root->children[i]);
    }
    return ans;
}
//  Print leaf Node

void PrintLeaf(TreeNode<int> *root){
        if(root->children.size() == 0){
          cout << root->data << " ";
        }

        for (int i = 0; i < root->children.size();i++){
          PrintLeaf(root->children[i]);
        }
} 

// PreOrder

void PreOrder(TreeNode<int> *root){
    //   edge case not base case
        if(root == NULL){
          return;
        }
        cout << root->data << " ";

        for (int i = 0; i < root->children.size();i++){
          PreOrder(root->children[i]);
        }
}
//  Post Order Traversal

void PostOrder(TreeNode<int> *root){
    if(root == NULL){
          return;
    }

        for (int i = 0; i < root->children.size();i++){
         
          PostOrder(root->children[i]);
        //   cout << root->data << " ";
        }

        cout << root->data << " ";
}
//  deletion of node
void DeleteTree(TreeNode<int> *root)
{

        for (int i = 0; i < root->children.size();i++){
          DeleteTree(root->children[i]);
        }

        delete root;
}

 int main()
{
       

    /*
    TreeNode<int> *root = new TreeNode<int>(1);
    TreeNode<int> *node1 = new TreeNode<int>(2);
    TreeNode<int> *node2 = new TreeNode<int>(3);

    root->children.push_back(node1);
    root->children.push_back(node2);
*/

    TreeNode<int> *root = takeInputLevelWise();
    PrintTree(root);

    cout << endl;

    int countNode = numNode(root);
    cout << "The number of nodes in Tree is: " << countNode << endl;

    int Sum = SumNode(root);

    cout << "Sum of data of all nodes is: " << Sum << endl;

    int maxdata = MaxData(root);
    cout << "The Max element in tree is: " << maxdata << endl;

    int MaxLevel = Height(root);

    cout << "Height of the tree is: " << MaxLevel << endl;
 
    int k = 2;
    cout << "All node at level k: ";
    PrintAllatLevelK(root, k);
    cout << endl;
    cout << "The Number of Leaf Node are: " << LeafOfNode(root) << endl;

    cout << "The Leaf Node are:  ";
    PrintLeaf(root);
   
    cout << endl;

    cout << "The Tree in PreOrder: ";
    PreOrder(root);

    cout << endl;
    cout << "Post Order Traversal: ";
    PostOrder(root);

    // Todo delete tree
   
    // DeleteTree(root); -->> usind function(recusively)

    //  delete using distructor

    delete root;

    return 0;
}