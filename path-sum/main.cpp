#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

 bool hasPathSum(TreeNode* root, int sum) {
    if(root == nullptr) {
        return false;
    }
    int val = root -> val;
    if(val == sum  && root -> left == nullptr && root -> right == nullptr)
        return true;
    
    return (hasPathSum(root -> left, sum - val)) || (hasPathSum(root -> right, sum - val));
}
 
int main() {
    struct TreeNode *tree1 = new TreeNode(5, new TreeNode(4, new TreeNode(11, new TreeNode(7),new TreeNode(2)), nullptr), new TreeNode(8, new TreeNode(13),new TreeNode(4, nullptr, new TreeNode(1))));
    cout<< hasPathSum(tree1, 22) << endl;
}