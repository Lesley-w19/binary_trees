#include "binary_trees.h"
/**
 * binary_tree_height - a function that measures the height of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to measure the height.
 *
 * Return: height of the binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height, right_height;

/* If tree is NULL, your function must return 0 */
if (tree == NULL)
return (0);

left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

if (left_height > right_height)
return (left_height);
else
return (right_height);
}

/**
 * binary_trees_ancestor -  a function that finds the
 * lowest common ancestor of two nodes
 * 
 * @first: is a pointer to the first node 
 * @second: s a pointer to the second node
 *
 * Return a pointer to the lowest common ancestor node of the two given nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
size_t firstHeight, secHeight;

if (!first || !second)
return (NULL);

if (first == second)
return ((binary_tree_t *) first);

firstHeight = binary_tree_height(first);
secHeight = binary_tree_height(second);

if (second->parent && secHeight < firstHeight)
return (binary_trees_ancestor(first, second->parent));
else if (first->parent && firstHeight < secHeight)
return (binary_trees_ancestor(second, first->parent));
else if (first->parent && second->parent)
return (binary_trees_ancestor(first->parent, second->parent));
else
return (NULL);
}
