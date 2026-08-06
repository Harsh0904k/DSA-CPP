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
class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val):data(val),left(nullptr),right(nullptr){}
};

void printTree(TreeNode* root, vector<int>path){
    if(root==nullptr){
        return;
    }
    path.push_back(root->data);

    if(root->left == NULL && root->right == NULL){
        for(int x:path){
            cout<<x;
        }
        cout<<endl;
    }

    printTree(root->left,path);
    printTree(root->right,path);

    path.pop_back();
}
int main(){
    vector<int>path;
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root -> right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right= new TreeNode(7);
    root->right->right->right = new TreeNode(8);

    printTree(root,path);
}
