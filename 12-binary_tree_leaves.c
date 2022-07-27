#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 *
 * @tree: pointer to the root node of the tree
 * to count the number of leaves
 *
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int leavesL = 0, leavesR = 0;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	leavesL = binary_tree_leaves(tree->left);
	leavesR = binary_tree_leaves(tree->right);

	return (leavesL + leavesR);
}
