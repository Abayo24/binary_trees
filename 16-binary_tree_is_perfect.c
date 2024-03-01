#include "binary_trees.h"
#include "9-binary_tree_height.c"
#include "11-binary_tree_size.c"

/**
 * _pow - returns a raised to the power of b
 * @a: Base
 * @b: Exponent
 *
 * Return: x raised to power of y
 */

int _pow(int a, int b)
{
	if (b < 0)
		return (-1);
	if (b == 0)
		return (1);
	return (a * _pow(a, b - 1));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 * @tree: pointer to the root node of the tree to check.
 *
 * Return: 0 if tree is NULL.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int nodes, target, height;

	height = binary_tree_height(tree) + 1;
	nodes = binary_tree_size(tree);
	target = _pow(2, height);
	return (target - 1 == nodes);
}
