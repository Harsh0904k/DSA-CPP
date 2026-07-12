/*
Rule for Tree Recursion

If a function asks:

"Compute something about this subtree."

Then it should usually return that value.

Examples:

Height:

return max(left, right) + 1;

Count:

return left + right + 1;

Sum:

return left + right + root->val;

Search:

return left || right || (root->val == target);

Notice the pattern?

Every recursive call returns information about its own subtree.
*/

#include<iostream>
using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr){}
};

int treeheight(TreeNode* root){
    if(root == nullptr){
        return 0;
    }

    int left = treeheight(root->left);
    int right = treeheight(root->right);

    return max(left,right) + 1;

}

int nodecount(TreeNode* root){
    if(root == nullptr){
        return 0;
    }

    int left = nodecount(root->left);
    int right = nodecount(root->right);

    return left+right+1;

}


int nodesum(TreeNode* root){
    if(root == nullptr){
        return 0;
    }

    int left = nodesum(root->left);
    int right = nodesum(root->right);

    return left+right+root->val;

}

bool elementsearch(TreeNode* root, int target)
{
    if(root == nullptr)
        return false;

    if(root->val == target)
        return true;

    return elementsearch(root->left, target) ||
           elementsearch(root->right, target);
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

    cout<<"No. of nodes : "<< nodecount(root)<<endl;
    cout<<"Height of tree : "<< treeheight(root)<<endl;
    cout<<"Total sum of all element : " <<nodesum(root)<<endl;
    cout<<"Search 6 : "<< elementsearch(root, 6)<<endl;
    cout<<"Search 9 : "<< elementsearch(root, 9)<<endl;

}