#include <stdio.h>

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {

    return (p == NULL && q == NULL) ? true  : (p == NULL || q == NULL) ? false : (p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right));
}