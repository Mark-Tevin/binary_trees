#include "binary_trees.h"

/**
* binary_tree_is_leaf - checks is anode is a leaf
 * @node: pointer to the node to check
 * Return: 1 if node is a leaf, 0 is not
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	return (node->left == NULL && node->right == NULL);
}
