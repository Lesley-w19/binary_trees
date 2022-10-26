#include "binary_trees.h"
/**
 * binary_tree_insert_right - a function that creates a binary tree node
 *
 * @parent:  is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 *
 * Return: a function that inserts a node as the right-child of another node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *node;

if (parent == NULL)
return (NULL);

/* binary_tree_node - creates a new node */
node = binary_tree_node(parent, value);

if (node == NULL)
return (NULL);

node->right = parent->right;

if (node->right)
node->right->parent = node;

parent->right = node;

return (node);
}
