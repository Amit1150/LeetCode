#include <iostream>
using namespace std;


struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

bool hasSameVal(TreeNode *a, TreeNode *b) {
    if(a != nullptr && b != nullptr) {
        return a -> val == b -> val;
    }
    return false;
}

bool isSameTree(TreeNode* p, TreeNode* q) {
    if(p == nullptr && q == nullptr) {
        return true;
    }
    
    
    return hasSameVal(p, q) && isSameTree(p -> left, q -> left) && isSameTree(p -> right, q -> right);
}

int main() {
    struct TreeNode *tree1 = new TreeNode(1, new TreeNode(2), new TreeNode(3));
    struct TreeNode *tree2 = new TreeNode(1, new TreeNode(2), new TreeNode(3));
    
    cout<< "Is Same: "<< isSameTree(tree1, tree2)<< endl;
    return 0;
}