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
	binary_tree_t *temp = NULL;

	if (parent == NULL)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;

	if (parent->left != NULL)
	{
		temp = parent->left;
		parent->left = newNode;
		newNode->left = temp;
		temp->parent = newNode;
	}
	else
		parent->left = newNode;

	return (newNode);
}