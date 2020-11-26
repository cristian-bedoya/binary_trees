#include "binary_trees.h"
/**
 * binary_tree_height - goes through a binary tree using pre-order traversal
 * @tree: tree is a pointer to the root node of the tree to traverse
 * Return: Always 0 (Succes)
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0; 
	size_t right_height = 0;

	if (!tree || (!(tree->right) && !(tree->right)))
		return (0);

	left_height = binary_tree_height(tree->left) + 1;
	right_height = binary_tree_height(tree->right) + 1;

	if (left_height > right_height)
		return (left_height);
	return (right_height);

}
