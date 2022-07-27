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
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int ret =0;

	if (tree == NULL)
		return (0);

	if (tree->left && !tree->right)
		return (0);

	if (!tree->left && tree->right)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (binary_tree_height1(tree->left) != binary_tree_height1(tree->right))
		return (0);

	if (tree->left && tree->right)
	{
		ret = binary_tree_is_perfect(tree->right);
		if (ret == 0)
			return (0);
		ret = binary_tree_is_perfect(tree->left);
		if (ret == 0)
			return (0);
	}

	return (1);
}
