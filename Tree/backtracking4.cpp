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
class treenode{
    public:
    int data;
    treenode* left;
    treenode* right;

    treenode(int val):data(val),left(nullptr),right(nullptr){}
};

void inorder(treenode* root){
    if(root==nullptr){
        return;
    }
    inorder(root->left);
    cout<<root->data;
    cout<<"->";
    inorder(root->right);
    return;
}

int treeHeight(treenode* root){
    if(root == nullptr){
        return 0;
    }
    int left = treeHeight(root->left);
    int right = treeHeight(root->right);

    return max(left,right)+1;
}

int nodeSum(treenode* root){
    if(root == nullptr){
        return 0;
    }

    int left = nodeSum(root->left);
    int right = nodeSum(root->right);
    
    return left+right+root->data;
}

int backtrack(treenode* root, int& sum){
    int target = 8;
    if(root==nullptr){
        return 0;
    } 

    sum = sum+root->data;

    if(root != nullptr && root->left == nullptr && root->right == nullptr && sum==target){
        cout<<endl;
        cout<<"found";
    }

    int left = backtrack(root->left, sum);
    int right = backtrack(root->right, sum); 
    
    sum = sum - root->data;

    return 0;

}

int main(){
    treenode* root = new treenode(1);
    root->left = new treenode(2);
    root->right = new treenode(3);
    root ->left->left = new treenode(4);
    root->left->right = new treenode(5);
    root->right->left = new treenode(6);
    root->right->right = new treenode(7);
    root->right->right->right = new treenode(8);

    inorder(root);

    int height = treeHeight(root);
    cout<<endl;
    cout<<height;

    int sum= nodeSum(root);
    cout<<endl;
    cout<<sum;
    
    int check = 0;
    backtrack(root, check);

}