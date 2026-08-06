#include <iostream>
#include <vector>
using namespace std;

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) {
        data = val;
        left = right = nullptr;
    }
};

void printPath(TreeNode* root, vector<int>& path) {

    if (root == nullptr)
        return;

    // Choose
    path.push_back(root->data);

    // If leaf, print path
    if (root->left == nullptr && root->right == nullptr) {
        for (int x : path)
            cout << x << " ";
        cout << endl;
    }

    // Explore
    printPath(root->left, path);
    printPath(root->right, path);

    // Undo (Backtrack)
    path.pop_back();
}

int main() {

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    vector<int> path;

    printPath(root, path);

    return 0;
}