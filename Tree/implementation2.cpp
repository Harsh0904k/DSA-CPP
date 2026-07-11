#include<iostream>
using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr){}        
};

int main(){
    TreeNode* root = new TreeNode(20);
    root -> left = new TreeNode(10);
    root -> right = new TreeNode(2);
    root->left->left = new TreeNode(5);
    root->left->right = new TreeNode(2);


    cout<<root->left->left->val;

}