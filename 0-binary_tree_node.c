#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: pointer to parent node of node to create.
 * @value: value to be put in new node.
 *
 * Return: pointer to new node, NULL on failure.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));

	if (!new)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
