#include "binary_trees.h"
/**
 * binary_tree_uncle - a function that finds the uncle of a node
 *
 * @node:  is a pointer to the node to find the uncle
 * If node is NULL, return NULL
 * If node has no uncle, return NULL
 *
 * Return: a pointer to the uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
binary_tree_t *parent;

if (parent == NULL)
return (NULL);

if (node->parent == NULL || node->parent->parent == NULL)
return (NULL);

if (node->parent == node->parent->parent->left)
return (node->parent->parent->right);

return (node->parent->parent->left);
}
