#include "binary_trees.h"
/**
 * binary_tree_nodes - a function that counts the nodes with
 * at least 1 child in a binary tree
 *
 * @tree: is a pointer to the root node of the
 * tree to count the number of nodes
 * A NULL pointer is not a node
 *
 * Return: nodes of the binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t left_nodes, right_nodes;

if (tree == NULL)
return (0);

if (tree->left && tree->right)
return (0);

left_nodes = binary_tree_nodes(tree->left);
right_nodes = binary_tree_nodes(tree->right);

return (left_nodes + 1 + right_nodes);
}
