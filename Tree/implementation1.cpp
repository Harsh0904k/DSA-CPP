#include<iostream>
using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x){
        val = x;
        left = nullptr;
        right = nullptr;
    }
};

int main(){
    TreeNode* root = new TreeNode(10);

root->left = new TreeNode(5);
root->right = new TreeNode(20);

cout<<" "<<root->val<<endl;
cout<<root->left->val<<"  ";  //cout<<root->left it will cout pointer adress not stored value
cout<<root->right->val;
}