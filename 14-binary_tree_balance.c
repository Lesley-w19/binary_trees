#include "binary_trees.h"
/**
 * binary_tree_height - a function that measures the height of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to measure the height.
 *
 * Return: height of the binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height, right_height;

/* If tree is NULL, your function must return 0 */
if (tree == NULL)
return (0);

left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

if (left_height > right_height)
return (left_height);
else
return (right_height);
}

/**
 * binary_tree_balance - a function that measures the
 * balance factor of a binary tree
 *
 * @tree:  is a pointer to the root node of the
 * tree to measure the balance factor
 *
 * Return: nodes of the binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int left_height, right_height;

if (tree == NULL)
return (0);

left_height = tree->left ? (int)binary_tree_height(tree->left) : -1;
right_height = tree->right ? (int)binary_tree_height(tree->right) : -1;

return (left_height - right_height);

}
