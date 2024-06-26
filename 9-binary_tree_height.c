#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, return 0
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (tree == NULL)
	{
		return (0);
	}
	/* Left height verification */
	l_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	/* right height verification */
	r_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	/**
	 * Returns the height i.e maximum of left
	 * and right subtrees plus 1 (for root)
	 */
	return (l_height > r_height ? l_height : r_height);
}
