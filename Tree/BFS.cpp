/*


Example Tree
            1
          /   \
         2     3
        / \   / \
       4  5  6   7
                  \
                   8


*/

#include<iostream>
#include<queue>

using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x): val(x), left(nullptr), right(nullptr){}
};

void bfs(TreeNode* root){
    if(root == NULL){
        return;
    }

    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()){
        TreeNode* current = q.front();
        q.pop();
        cout<<current->val<<" ";

        if(current->left != nullptr){
            q.push(current->left);
        }

        if(current->right != nullptr){
            q.push(current->right);
        }

    }
      
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

    bfs(root);

}