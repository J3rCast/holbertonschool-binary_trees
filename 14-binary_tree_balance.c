#include "binary_trees.h"
/**
 * binary_tree_height1 - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: int
 */
size_t binary_tree_height1(const binary_tree_t *tree)
{
	int leftH = 0, rightH = 0;

	if (tree == NULL)
		return (0);

	leftH = binary_tree_height1(tree->left) + 1;
	rightH = binary_tree_height1(tree->right) + 1;

	if (leftH > rightH)
		return (leftH);
	else
		return (rightH);
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height1(tree->left) - binary_tree_height1(tree->right));
}
