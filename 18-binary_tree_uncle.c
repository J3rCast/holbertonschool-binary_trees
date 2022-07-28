#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 *
 * @node: pointer to the node to find the uncle
 *
 * Return: pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grand = NULL;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	grand = node->parent->parent;

	if (grand->left == node->parent)
		return (grand->right);

	if (grand->right == node->parent)
		return (grand->left);

	return (node);
}
