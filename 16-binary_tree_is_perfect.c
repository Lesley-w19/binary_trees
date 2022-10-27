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
 * binary_tree_is_perfect - a function that checks if a binary tree is perfect
 *
 * @tree: is a pointer to the root node of the tree to check
 *
 * Return: is perfect of the binary tree
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int left_perfect, right_perfect, left_height, right_height;

if (tree == NULL)
return (0);

if (tree->left == NULL && tree->right == NULL)
return (1);

if (tree->left == NULL || tree->right == NULL)
return (0);

left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);

if (left_height != right_height)
return (0);

left_perfect = binary_tree_is_perfect(tree->left);
right_perfect = binary_tree_is_perfect(tree->right);

return (left_perfect && right_perfect);
}
