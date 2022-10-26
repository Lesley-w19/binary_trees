#include "binary_trees.h"
/**
 * binary_tree_inorder -  a function that goes through a
 * binary tree using in-order traversal
 *
 * @tree:  is a pointer to the root node of the tree to traverse
 * @func:  is a pointer to a function to call for each node.
 * @int: The value in the node must be passed as a parameter to this function.
 *
 * Return: void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
/* If tree or func is NULL, do nothing */
if (tree == NULL)
return;

if (func == NULL)
return;

/* the func parameter int binary_tree_s::n */
/**
 * Algorithm Inorder(tree)
 *
 * Traverse the left subtree, i.e., call Inorder(left->subtree)
 * Visit the root.
 * Traverse the right subtree, i.e., call Inorder(right->subtree)
 */

binary_tree_inorder(tree->left, func);
func(tree->n);
binary_tree_inorder(tree->right, func);
}
