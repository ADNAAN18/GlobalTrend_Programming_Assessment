#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int dfs(TreeNode* root, int& maxi) {
    if (root == nullptr) 
        return 0;
        
    int left = max(dfs(root->left, maxi), 0);
    int right = max(dfs(root->right, maxi), 0);
        
    int total = root->val + left + right;
    maxi = max(total, maxi);
        
    return root->val + max(left, right);
}

int maxPathSum(TreeNode* root) {
    int maxi = INT_MIN;
    dfs(root, maxi);
    return maxi;
}


TreeNode* newNode(int val) {
    TreeNode* node = new TreeNode(val);
    node->left = nullptr;
    node->right = nullptr;
    return node;
}

int main() {
    TreeNode* root = newNode(-10);
    root->left = newNode(9);
    root->right = newNode(20);
    root->right->left = newNode(15);
    root->right->right = newNode(7);

    cout << "The maximum path sum is: " << maxPathSum(root) << endl;



    return 0;
}
