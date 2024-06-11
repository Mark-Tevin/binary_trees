#include "binary_trees.h"

/**
 * binary_tree_depth -  measures the depth of a node in a binary tree.
 * @tree: Pointer to the root node to measure the depth
 * Return: Depth of the tree, 0 if tree is NULL
 *
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
	{
		return (0);
	}
	/**
	 * Move in the upper direction
	 * of the tree to count the depth
	 */
	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
