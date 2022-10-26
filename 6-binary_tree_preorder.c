#include "binary_trees.h"
/**
 * binary_tree_preorder -  a function that goes through a
 * binary tree using pre-order traversal
 *
 * @tree:  is a pointer to the root node of the tree to traverse
 * @func:  is a pointer to a function to call for each node.
 *
 * Return: void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
/* If tree or func is NULL, do nothing */
if (tree == NULL)
return;

if (func == NULL)
return;

/* the func parameter int binary_tree_s::n */
/**
 * Algorithm Preorder(tree)
 *
 * Visit the root.
 * Traverse the left subtree, i.e., call Preorder(left->subtree)
 * Traverse the right subtree, i.e., call Preorder(right->subtree)
 */

func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
}
