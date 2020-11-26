#include "binary_trees.h"
/**
 * binary_tree_depth - goes through a binary tree using pre-order traversal
 * @tree: tree is a pointer to the root node of the tree to traverse
 * Return: Always 0 (Succes)
 *
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree || !(tree->parent))
		return (0);

	depth = binary_tree_depth(tree->parent);

	return (depth + 1);

}
