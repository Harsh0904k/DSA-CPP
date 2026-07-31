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
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x):val(x), left(nullptr), right(nullptr){};
};
int height(TreeNode* root){
      if(root == NULL){
        return 0;
      }
      int right = height(root->right);
      int left = height(root->left);
      
      return max(left,right)+1;
}
int count(TreeNode* root){
    if(root == NULL){
        return 0;
    }
    int left = count(root->left);
    int right = count(root -> right);

    return left+right+1;
}
vector<int> elements;
void inorder(TreeNode* root){
    while(root == NULL){
        return;
    }
    inorder(root->left);
    elements.push_back(root->val);
    inorder(root->right);
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

    cout<<height(root)<<endl;
    cout<<count(root)<<endl;


    inorder(root);
    for(int i = 0; i<elements.size(); i++){
        cout<<elements[i];
    }
}