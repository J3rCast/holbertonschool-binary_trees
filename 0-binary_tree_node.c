#include "binary_trees.h"
/**
 * binary_tree_node - Creates a binary tree node
 *
 * @parent: pointer to the parent node
 * @value: value of the  new node
 *
 * Return: pointer to the new node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	newNode->parent = parent;
	newNode->n = value;
	newNode->right = NULL;
	newNode->left = NULL;

	return (newNode);
}
