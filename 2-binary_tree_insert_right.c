#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right child.
 *
 * @parent: pointer to the node to insert the right child in.
 * @value: Is the value to store in the node.
 *
 * Return: pointer to the created node or NULL on failure.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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

	if (parent->right != NULL)
	{
		temp = parent->right;
		parent->right = newNode;
		newNode->right = temp;
		temp->parent = newNode;
	}
	else
		parent->right = newNode;

	return (newNode);

}
