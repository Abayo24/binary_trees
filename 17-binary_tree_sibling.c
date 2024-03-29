#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node.
 * @node: pointer to the node to find the sibling.
 *
 * Return: pointer to sibling node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node && node->parent)
	{
		if (node->parent->left && node->parent->left->n != node->n)
			return (node->parent->left);
		else if (node->parent->right && node->parent->right->n != node->n)
			return (node->parent->right);
	}
	return (NULL);
}
