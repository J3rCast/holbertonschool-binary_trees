#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: int
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int leftH = 0, rightH = 0;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	leftH = binary_tree_height(tree->left) + 1;
	rightH = binary_tree_height(tree->right) + 1;

	if (leftH > rightH)
		return (leftH);
	else
		return (rightH);
}
