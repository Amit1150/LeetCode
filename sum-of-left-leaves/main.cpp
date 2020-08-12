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

int sumOfLeftLeaves(TreeNode* root)
{
    if(root == nullptr)
        return 0;
    int sum { 0 };
    if(root->left != nullptr && root->left->left == nullptr && root->left->right == nullptr)
        sum = root->left->val;

    return sum + sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
}
int main()
{
    struct TreeNode *tree1 = new TreeNode(1, new TreeNode(2, new TreeNode(3),new TreeNode(4)),new TreeNode(2, new TreeNode(4), new TreeNode(3)));
    cout << "left leaves sum: "<< sumOfLeftLeaves(tree1) << endl;
    return 0;
}