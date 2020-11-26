#include "binary_trees.h"
/**
 * b_print_num - Prints a number
 *
 * @n: Number to be printed
 */
void b_print_num(int n)
{
	printf("%d\n", n);
}
/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @tree: tree is a pointer to the root node of the tree to traverse
 * @func: is a pointer to a function to call for each node.
 *
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, &b_print_num);
	binary_tree_preorder(tree->right, &b_print_num);

}
