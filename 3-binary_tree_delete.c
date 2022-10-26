#include "binary_trees.h"
/**
 * binary_tree_delete - a function that creates a binary tree node
 *
 * @tree:  is a pointer to the root node of the tree to delete
 *
 * Return: a function that deletes an entire binary tree
 */

void binary_tree_delete(binary_tree_t *tree)
{
if (tree == NULL)
return;

/* Delete the nodes*/
binary_tree_delete(tree->left);
binary_tree_delete(tree->right);

/* Delete the entire tree */
free(tree);
}
