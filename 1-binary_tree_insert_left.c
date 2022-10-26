#include "binary_trees.h"
/**
 * binary_tree_insert_left - a function that creates a binary tree node
 *
 * @parent:  is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 *
 * Return: a function that inserts a node as the left-child of another node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *node;

if (parent == NULL)
return (NULL);

node = binary_tree_node(parent, value);

if (node == NULL)
return (NULL);

node->left = parent->left;

if (node->left)
node->left->parent = node;

parent->left = node;

return (node);
}
