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

	if (!tree)
		return (0);

	left_height = binary_tree_height(tree->left) + 1;
	right_height = binary_tree_height(tree->right) + 1;

	if (left_height > right_height)
		return (left_height);
	return (right_height);

}

/**
 * binary_tree_balance - measures the_balance of a binary tree
 * @tree: tree is a pointer to the root node of the tree to traverse
 * Return: Always 0 (Succes)
 *
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t branch_left = 0;
	size_t branch_rigth = 0;

	if (!tree)
		return (0);

	if (tree->left)
		branch_left = binary_tree_height(tree->left);
	if (tree->right)
		branch_rigth = binary_tree_height(tree->right);

	return (branch_left - branch_rigth);
}
