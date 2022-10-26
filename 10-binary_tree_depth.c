#include "binary_trees.h"
/**
 * binary_tree_height - a function that measures the depth of a node in a binary tree
 *
 * @tree: is a pointer to the root node of the tree to measure the height.
 *
 * Return: height of the binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth;

if (tree == NULL)
return (0);

depth = tree->parent ? 1 + binary_tree_depth(tree) : 0;

return (depth);
}
