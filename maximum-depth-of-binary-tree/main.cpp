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

int maxDepth(TreeNode* root) {
    if(root == nullptr) {
        return 0;
    }
    return 1 + max(maxDepth(root -> left), maxDepth(root -> right));
}
 
int main() {
    
    struct TreeNode *tree1 = new TreeNode(3, 
                                    new TreeNode(9), new TreeNode(20, 
                                                            new TreeNode(15), new TreeNode(7)
                                                        ));
    struct TreeNode *tree2 = new TreeNode(3, new TreeNode(-6, new TreeNode(6, nullptr, new TreeNode(5)), nullptr), new TreeNode(7));
    
    cout << "max height: "<< maxDepth(tree1) << endl;
    cout << "max height: "<< maxDepth(tree2) << endl;
    return 0;
}