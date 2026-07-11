/* Preorder means:

Root → Left → Right

This means:

Visit the current node.
Traverse the left subtree.
Traverse the right subtree.

The word "Pre" means before.
So we process the root before its children.

We'll use this tree throughout.

            1
          /   \
         2     3
        / \   / \
       4  5  6   7

The preorder answer should be

1 2 4 5 3 6 7

*/



#include<iostream>
using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr){}     
};

void preorder(TreeNode* current){
    if(current == NULL){
        return;
    }
    cout<<current->val<<" ";

    preorder(current->left);
    preorder(current->right);
}

int main(){
    TreeNode* root = new TreeNode(20);
    root -> left = new TreeNode(10);
    root -> right = new TreeNode(2);
    root->left->left = new TreeNode(5);
    root->left->right = new TreeNode(2);
    root->right->left = new TreeNode(1);

    preorder(root);



}