/* 

We'll use this tree throughout.

            1
          /   \
         2     3                                         
        / \   / \
       4  5  6   7
                  \ 
                   8

*/

#include<iostream>
#include<vector>
using namespace std;
class treenode{
    public:
    int data;
    treenode* left;
    treenode* right;

    treenode(int val):data(val),left(nullptr),right(nullptr){}
};



void backtrack(treenode* root, int& sum){   // & means: Don't give the function a copy. Give it the same variable.
    int target = 8;                        // Every recursive call modifies that same variable, cant preserve each node sum.
    if(root==nullptr){
        return;
    } 

    sum = sum+root->data;

    if(root != nullptr && root->left == nullptr && root->right == nullptr && sum==target){
        cout<<endl;
        cout<<"found";
    }

    backtrack(root->left, sum);
    backtrack(root->right, sum); 
    sum = sum - root->data;

    return ;

}

void recursion(treenode* root, int sum){     //Every recursive call gets its own copy of sum
    int target = 8;                         //we preserved sum for each node, no undo so its not backtracking
    if(root==nullptr){
        return ;
    } 

    sum = sum+root->data;

    if(root != nullptr && root->left == nullptr && root->right == nullptr && sum==target){
        cout<<endl;
        cout<<"found";
    }

    recursion(root->left, sum);
    recursion(root->right, sum); 
    return ;

}

int main(){
    treenode* root = new treenode(1);
    root->left = new treenode(2);
    root->right = new treenode(3);
    root ->left->left = new treenode(4);
    root->left->right = new treenode(5);
    root->right->left = new treenode(6);
    root->right->right = new treenode(7);
    root->right->right->right = new treenode(8);

    
    int sum = 0;
    backtrack(root, sum);
    recursion(root, 0);

}