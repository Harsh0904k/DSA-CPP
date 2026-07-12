#include<iostream>
using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr){}
};
int nodesum(TreeNode* root){
    if(root == 0){
        return 0;
    }

    int left = nodesum(root->left);
    int right = nodesum(root->right);

    return left+right+root->val;

}

int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root -> right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right= new TreeNode(7);
    root->right->right->right = new TreeNode(8);

    cout<<nodesum(root);

}