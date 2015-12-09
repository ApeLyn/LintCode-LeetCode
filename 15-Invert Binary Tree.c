/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void TreeNode* swapNode(struct TreeNode* root) {
	struct TreeNode* temp;
	if (root == NULL) return;
	if (root->left != NULL || root->right != NULL) {
		temp = root->left;
		root->left = root->right;
		root->right = temp;
		swapNode(root->left, root->right);
	}
}

struct TreeNode* invertTree(struct TreeNode* root) {
    swapNode(root);
    return root;
}