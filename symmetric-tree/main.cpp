#include <iostream>
using namespace std;

// using recusive method

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

bool hasSameNode(TreeNode *a, TreeNode *b) {
    if(a == nullptr && b == nullptr) {
       return true;
    }
    if(a == nullptr or b == nullptr) {
        return false;
    }
    return (a -> val == b -> val) && 
            hasSameNode(a -> left, b -> right) && 
            hasSameNode(a -> right, b -> left);
}

bool isSymmetric(TreeNode* root) {
    if(root == nullptr) {
        return true;
    }
    return hasSameNode(root -> left, root -> right);
}

int main() {
    struct TreeNode *tree1 = new TreeNode(1, new TreeNode(2, new TreeNode(3),new TreeNode(4)),new TreeNode(2, new TreeNode(4), new TreeNode(3)));
    
    struct TreeNode *tree2 = new TreeNode(1, new TreeNode(2, nullptr, new TreeNode(3)), new TreeNode(2, nullptr ,new TreeNode(2)));
    
    cout<< "Is Same: "<< isSymmetric(tree1)<< endl;
    cout<< "Is Same: "<< isSymmetric(tree2)<< endl;
    return 0;
}