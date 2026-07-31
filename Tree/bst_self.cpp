#include<iostream>
using namespace std;
class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val){
        data = val;
        left = nullptr;
        right = nullptr;

    }
};

TreeNode* insert(TreeNode* root, int val){
    if(root == nullptr){
        TreeNode* new_node = new TreeNode(val);
        return new_node;
    }
    else if(val < root->data){
        root -> left = insert(root->left, val);   
    }

    else if(val > root->data){
        root -> right = insert(root->right, val);
    }

    return root;
}

void search(TreeNode* root, int val){
    
    if(root == nullptr){
        cout<<"Not Exist";
        return;
    }

    else if(val == root->data){
        cout<<"Found";
        return;
    }
    else if(val < root->data){
        search(root->left, val);
    }
    else if(val > root->data){
        search(root->right, val);
    }
   

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
    int n;
    TreeNode* root = nullptr;
    cout<<"Enter Node You want to insert ";
    cin>>n;
    while(n != 001){
       root = insert(root, n);
       cout<<"Enter Node You want to insert ";
       cin>>n;
    }

    printTree(root);
    search(root, 60);

}