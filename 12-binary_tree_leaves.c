#include "binary_trees.h"
/**
 * binary_tree_leaves - a function that measures the
 * size of a binary tree
 *
 * @tree:  is a pointer to the root node of the tree
 * to count the number of leaves
 * A NULL pointer is not a leaf
 *
 * Return: leaves of the binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t right_leaves, left_leaves;

if (tree == NULL)
return (0);

if (tree->left == NULL && tree->right == NULL)
return (1);

left_leaves = binary_tree_leaves(tree->left);
right_leaves = binary_tree_leaves(tree->right);

return (left_leaves + right_leaves);
}
