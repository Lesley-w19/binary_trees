#include "binary_trees.h"
/**
 * binary_tree_inorder -  a function that goes through a
 * binary tree using in-order traversal
 *
 * @tree:  is a pointer to the root node of the tree to traverse
 * @func:  is a pointer to a function to call for each node.
 * @int: The value in the node must be passed as a parameter to this function.
 *
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
/* If tree or func is NULL, do nothing */
if (tree == NULL)
return;

if (func == NULL)
return;

/* the func parameter int binary_tree_s::n */
func(tree->n);
binary_tree_inorder(tree->left, func);
binary_tree_inorder(tree->right, func);
}
