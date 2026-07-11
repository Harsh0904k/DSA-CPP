/*
Rule:

Left → Root → Right

Notice something different.

In Preorder, we printed immediately after reaching the node.

cout << root->val;

came before recursive calls.

In Inorder, we print after finishing the left subtree.

Example Tree
            20
          /   \
         10     2
        / \   / 
       5   2 1   

Expected Output

4 2 5 1 6 3 7
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

void inorder(TreeNode* root){
    if(root == NULL){
        return;
    }
    
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}

int main(){
    TreeNode* root = new TreeNode(20);
    root->left = new TreeNode(10);
    root -> right = new TreeNode(2);
    root->left->left = new TreeNode(5);
    root->left->right = new TreeNode(2);
    root->right->left = new TreeNode(1);

    inorder(root);

}