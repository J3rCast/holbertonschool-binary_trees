#include "binary_trees.h"
/**
 * binary_tree_insert_left - insertts a node as the left child.
 *
 * @parent: pointer to the node to insert the left child.
 * @value: valuye to store in the new node.
 *
 * Return: pointer to the created node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;

	if (parent == NULL)
		return (NULL);

	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
		return (NULL);

	if (parent->left)
	{
		newNode->left = parent->left;
		newNode->left->parent = newNode;
	}
	parent->left = newNode;

	return (newNode);
}
