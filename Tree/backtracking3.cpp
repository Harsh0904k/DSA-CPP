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
using namespace std;
    class TreeNode{
        public:
        int data;
        TreeNode* left;
        TreeNode* right;

        TreeNode(int val):data(val),left(nullptr),right(nullptr){}
    };
    void traverse(TreeNode* root, int& sum){
        if(root==nullptr){
            return;
        }
        sum = sum + root->data;
        if(root->left == nullptr && root->right == nullptr){
            cout<<sum<<endl;
        }
        int current = root->data;
        traverse(root->left, sum);
        traverse(root->right, sum);

        sum = sum-current;

        return;
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
    int sum = 0;
    traverse(root,sum);
    
    }

