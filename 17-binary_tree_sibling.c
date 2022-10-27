#include "binary_trees.h"
/**
 * binary_tree_sibling - a function that finds the sibling of a node
 *
 * @node: is a pointer to the node to find the sibling.
 * If node is NULL or the parent is NULL, return NULL
 * If node has no sibling, return NULL
 *
 * Return: a pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
binary_tree_t *parent;

if (node == NULL)
return (0);

if (node->parent == NULL)
return (0);

parent = node->parent;

if (parent->left == node)
return (parent->right);

return (parent->left);
}
