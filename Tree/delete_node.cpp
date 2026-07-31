#include<iostream>
using namespace std;
class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val):data(val), left(nullptr), right(nullptr){}
};
TreeNode* insert(TreeNode* root, int val){
    if(root == NULL){
        TreeNode* new_node = new TreeNode(val);
        return new_node;
    }
    if(root->data > val){
        root->right = insert(root->right, val);
    }
    else if(root->data < val){
        root -> left = insert(root->left, val);
    }

    return root;
}

TreeNode* delNode(TreeNode* root, int val){
    if(root == NULL){
        return root;
    }
    if(val == root->left->data){
        root->left = root -> left ->left;
    }
    if(val == root->right->data){
        root->right = root ->right->right;
    }

    else if(val<root->data){
        root->left = delNode(root->left,val);
    }

    else if(val>root->data){
        root->right = delNode(root->right, val);
    }

return root;
}

void printTree(TreeNode* root, int space = 0) {
    if (root == nullptr)
        return;

    space += 5;

    // Print right subtree first
    printTree(root->right, space);

    cout << endl;
    for (int i = 5; i < space; i++)
        cout << " ";
    cout << root->data << endl;

    // Print left subtree
    printTree(root->left, space);
}    

int main(){
    TreeNode* root = NULL;
    int n = 0;
    while(n != -1){
    cout<<"Enter value to insert : ";
    cin>>n;
    root = insert(root,n);
    }
   
    root = delNode(root, 5);
    printTree(root);
}