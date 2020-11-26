#include "binary_trees.h"
/**
 * binary_tree_nodes - measures the nodes of a binary tree
 * @tree: tree is a pointer to the root node of the tree to traverse
 * Return: Always 0 (Succes)
 *
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if ((tree->left) || (tree->right))
		return (binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right));
	return (0);
}
