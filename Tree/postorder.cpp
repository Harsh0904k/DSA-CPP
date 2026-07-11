/*
Rule:

Rule:

Left → Right → Root

Unlike preorder and inorder, we print the node only after both left and right subtrees are completely processed.

Example Tree
            1
          /   \
         2     3
        / \   / \
       4  5  6   7

Expected output:

4 5 2 6 7 3 1
*/

#include<iostream>
using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x): val(x), left(nullptr), right(nullptr){}
};

void preorder(TreeNode* root){
    if(root == NULL){
        return;
    }
    
    preorder(root->left);
    preorder(root->right);
    cout<<root->val<<" ";
}

int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root -> right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right= new TreeNode(7);

    preorder(root);

}