#include <stdio.h>
#include <stdlib.h>

struct TreeNode
{
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* makeEmpty(struct TreeNode* root)
{

    if(root != NULL)
    {
        makeEmpty(root->left);
        makeEmpty(root->right);
        free(root);
    }
    return NULL;

}
